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
waitUntil { sleep 5; time > 0 and !is3DEN; };

// Early exit if object does not have a radius set
if !(isNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRadius")) exitWith
{
    systemChat "This object does not have a healing radius set.";
    -1;
};

private _healRadius = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRadius");
private _healRate = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealRate");
private _maxPatients = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Medical_areaHealMaxPatients");

private _currentPatients = [];
_object setVariable ["BNA_KC_healHandlers", []];
while {true} do
{
    private _nearbyUnits = (getPosASL _object) nearEntities ["CAManBase", _healRadius];
    private _unitsToHeal = [];
    private _healHandlers = _object getVariable "BNA_KC_healHandlers";

    systemChat format ["All nearby units: %1", _nearbyUnits];

    {
        // Skip if unit is not hurt
        if (_x call ace_medical_status_fnc_isInStableCondition) then { continue; };
        // Skip if unit is already being healed
        if (_x in _currentPatients) then { continue; };

        _unitsToHeal pushBack _x;
    } forEach _nearbyUnits;

    systemChat format ["All injured and not-patient units: %1", _unitsToHeal];

    // Remove any patients that have become fully healed
    _currentPatients = _currentPatients select
    {
        !(_x call BNAKC_fnc_isFullyHealed)
    };

    // Sort by most injured to least
    _unitsToHeal = [_unitsToHeal] call BNAKC_fnc_sortUnitsByInjuries;
    systemChat format ["Sorted units: %1", _unitsToHeal];
    // Combine current patients and new patients, put current patients first
    _unitsToHeal = _currentPatients + _unitsToHeal;
    systemChat format ["Patients + units to heal: %1", _unitsToHeal];

    _unitsToHeal = _unitsToHeal select [0, _maxPatients]; // Get only the first x patients 
    systemChat format ["Units to heal: %1", _unitsToHeal];
    systemChat format ["Actual Units to heal: %1", _unitsToHeal - _currentPatients];

    {
        // For each unit, create a healing handler for it.
        _healHandlers pushBack ([_x, _healRate] call BNAKC_fnc_slowHeal);
        _currentPatients pushBack _x;
    } forEach (_unitsToHeal - _currentPatients); // Only assign handlers to new units

    _object setVariable ["BNA_KC_healHandlers", _healHandlers];

    sleep 5;
};