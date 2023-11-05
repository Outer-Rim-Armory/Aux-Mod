/*
 * Author: DartRuffian
 * Creates a slow healing radius around a given object.
 *
 * Arguments:
 * object: Object - The object to become a healing area.
 *
 * Return Value:
 * None
 *
 * Examples:
 * init = "(_this select 0) call BNAKC_fnc_areaSlowHeal;";
 */


params [["_object", objNull, [objNull]], ["_healRadius", -1, [0]], ["_healRate", -1, [0]]];
private ["_maxPatients", "_currentPatients", "_objectName"];

if (isNull _object) exitWith {};

// Wait until mission start, prevents sounds playing in Eden editor
if (CBA_missionTime == 0) then
{
    waitUntil {sleep 3; CBA_missionTime > 0;};
};

if (_healRadius isEqualTo -1) then
{
    // Allows passing a custom heal radius, if none is passed, check the object is CfgVehicles
    _healRadius =
    [
        configFile >> "CfgVehicles" >> typeOf _object,
        "BNA_KC_Medical_areaHealRadius",
        7
    ] call BIS_fnc_returnConfigEntry;
};
if (_healRate isEqualTo -1) then
{
    _healRate =
    [
        configFile >> "CfgVehicles" >> typeOf _object,
        "BNA_KC_Medical_areaHealRate",
        6
    ] call BIS_fnc_returnConfigEntry;
};
_maxPatients =
[
    configFile >> "CfgVehicles" >> typeOf _object,
    "BNA_KC_Medical_areaHealMaxPatients",
    2
] call BIS_fnc_returnConfigEntry;

_currentPatients = [];
_object setVariable ["BNA_KC_healHandlers", []];
_objectName = str _object; // used to track handlers
while {!isNull _object} do
{
    private ["_nearbyUnits", "_unitsToHeal", "_healHandlers"];
    sleep 5;

    _nearbyUnits = (getPosASL _object) nearEntities ["CAManBase", _healRadius];
    if (_nearbyUnits isEqualTo []) then
    {
        // Check for ASL and ATL
        _nearbyUnits = (getPosATL _object) nearEntities ["CAManBase", _healRadius];
    };

    _unitsToHeal = [];
    _healHandlers = _object getVariable "BNA_KC_healHandlers";

    format ["All nearby units: %1", _nearbyUnits] call BNAKC_fnc_devLog;

    {
        if (_x call BNAKC_fnc_isFullyHealed) then {continue;}; // Skip if unit is not hurt
        if (_x in _currentPatients) then {continue;};          // Skip if unit is already being healed

        _unitsToHeal pushBack _x;
    } forEach _nearbyUnits;

    format ["All injured and not-patient units: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    format ["Current patients before checks: %1", _currentPatients] call BNAKC_fnc_devLog;

    // Remove any patients that have become fully healed
    _currentPatients = _currentPatients select {!(_x call BNAKC_fnc_isFullyHealed)};
    format ["Current patients that are still hurt: %1", _currentPatients] call BNAKC_fnc_devLog;
    for "_x" from 0 to (count _currentPatients - 1) do
    {
        private ["_unit", "_handlerID"];
        _unit = _currentPatients#_x;
        // If a patient is not in range, remove their handler
        if !(_unit in _nearbyUnits) then
        {
            _handlerID = _unit getVariable (_objectName + "_healHandlerID"); // get the handler id saved to the unit
            _unit setVariable [_objectName + "_healHandlerID", nil]; // remove the variable
            [_handlerID] call CBA_fnc_removePerFrameHandler; // remove the handler
            _currentPatients deleteAt _x; // remove from current patients array
            format ["%1 not in range, removed handler", _x] call BNAKC_fnc_devLog;
        };
    };
    format ["Current patients after checks: %1", _currentPatients] call BNAKC_fnc_devLog;

    if (_unitsToHeal isEqualTo []) then {"No new units to heal, skipping" call BNAKC_fnc_devLog; continue;};

    // Sort by most injured to least
    _unitsToHeal = [_unitsToHeal] call BNAKC_fnc_sortUnitsByInjuries;
    format ["Sorted units: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    // Combine current patients and new patients, put current patients first
    _unitsToHeal = _currentPatients + _unitsToHeal;
    format ["Patients + units to heal: %1", _unitsToHeal] call BNAKC_fnc_devLog;

    if (_maxPatients > 0) then
    {
        _unitsToHeal = _unitsToHeal select [0, _maxPatients]; // Get only the first x patients
    };

    format ["Units to heal: %1", _unitsToHeal] call BNAKC_fnc_devLog;
    format ["Actual Units to heal: %1", _unitsToHeal - _currentPatients] call BNAKC_fnc_devLog;

    {
        private ["_healHandlerID"];
        // For each unit, create a healing handler for it.
        format ["healing %1 every %2 seconds", _x, _healRate] call BNAKC_fnc_devLog;
        _healHandlerID = [_x, _healRate] call BNAKC_fnc_slowHeal;
        _x setVariable [_objectName + "_healHandlerID", _healHandlerID];

        _currentPatients pushBack _x;
    } forEach (_unitsToHeal - _currentPatients); // Only assign handlers to new units
};

// Object removed, remove handlers
"Object removed, removing handlers" call BNAKC_fnc_devLog;
{
    private ["_handlerID"];
    _handlerID = _x getVariable (_objectName + "_healHandlerID");
    _x setVariable [_objectName + "_healHandlerID", nil];
    [_handlerID] call CBA_fnc_removePerFrameHandler;
} forEach _currentPatients;