/*
 * Author: DartRuffian
 * Creates a slow healing radius around a given object.
 *
 * Arguments:
 * object: Object - The object to become a healing area.
 *
 * Return Value:
 * Number - If an error occurs.
 *
 * Examples:
 * init = "(_this select 0) call BNAKC_fnc_areaSlowHeal;";
 */


params ["_object"];

// Wait until mission start, prevents sounds playing in Eden editor
waitUntil { sleep 3; CBA_missionTime > 0; };

// Early exit if object does not have a radius set
if !(isNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRadius")) exitWith
{
    "This object does not have a healing radius set." call BNAKC_fnc_devLog;
    -1;
};

private _healRadius = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRadius");
private _healRate = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRate");
private _maxPatients = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealMaxPatients");

private _currentPatients = [];
_object setVariable ["BNA_KC_healHandlers", []];
private _objectName = str _object; // used to track handlers
while {!isNull _object} do
{
    private _nearbyUnits = (getPosASL _object) nearEntities ["CAManBase", _healRadius];
    private _unitsToHeal = [];
    private _healHandlers = _object getVariable "BNA_KC_healHandlers";

    format ["All nearby units: %1", _nearbyUnits] call BNAKC_fnc_devLog;

    {
        // Skip if unit is not hurt
        if (_x call BNAKC_fnc_isFullyHealed) then { continue; };
        // Skip if unit is already being healed
        if (_x in _currentPatients) then { continue; };

        _unitsToHeal pushBack _x;
    } forEach _nearbyUnits;

    format ["All injured and not-patient units: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    format ["Current patients before checks: %1", _currentPatients] call BNAKC_fnc_devLog;

    // Remove any patients that have become fully healed
    _currentPatients = _currentPatients select
    {
        !(_x call BNAKC_fnc_isFullyHealed)
    };
    format ["Current patients that are still hurt: %1", _currentPatients] call BNAKC_fnc_devLog;
    for "_x" from 0 to (count _currentPatients - 1) do
    {
        private _unit = _currentPatients#_x;
        // If a patient is not in range, remove their handler
        if !(_unit in _nearbyUnits) then
        {
            private _handlerID = _unit getVariable (_objectName + "_healHandlerID"); // get the handler id saved to the unit
            _unit setVariable [_objectName + "_healHandlerID", nil]; // remove the variable
            [_handlerID] call CBA_fnc_removePerFrameHandler; // remove the handler
            _currentPatients deleteAt _x; // remove from current patients array
            format ["%1 not in range, removed handler", _x] call BNAKC_fnc_devLog;
        };
    };
    format ["Current patients after checks: %1", _currentPatients] call BNAKC_fnc_devLog;

    // Sort by most injured to least
    _unitsToHeal = [_unitsToHeal] call BNAKC_fnc_sortUnitsByInjuries;
    format ["Sorted units: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    // Combine current patients and new patients, put current patients first
    _unitsToHeal = _currentPatients + _unitsToHeal;
    format ["Patients + units to heal: %1", _unitsToHeal] call BNAKC_fnc_devLog;

    _unitsToHeal = _unitsToHeal select [0, _maxPatients]; // Get only the first x patients
    format ["Units to heal: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    format ["Actual Units to heal: %1", _unitsToHeal - _currentPatients] call BNAKC_fnc_devLog;

    {
        // For each unit, create a healing handler for it.
        format ["healing %1 every %2 seconds", _x, _healRate] call BNAKC_fnc_devLog;
        private _healHandlerID = [_x, _healRate] call BNAKC_fnc_slowHeal;
        _x setVariable [_objectName + "_healHandlerID", _healHandlerID];

        _currentPatients pushBack _x;
    } forEach (_unitsToHeal - _currentPatients); // Only assign handlers to new units

    sleep 5;
};

// Object removed, remove handlers
"Object removed, removing handlers" call BNAKC_fnc_devLog;
{
    private _handlerID = _x getVariable (_objectName + "_healHandlerID"); // get the handler id saved to the unit
    _x setVariable [_objectName + "_healHandlerID", nil]; // remove the variable
    [_handlerID] call CBA_fnc_removePerFrameHandler; // remove the handler
} forEach _currentPatients;