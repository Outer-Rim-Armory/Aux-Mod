#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is mostly healed. Not every stat is checked, just common variables such as open wounds, blood volume, etc.
 *
 * Arguments:
 * 0: Source for healing <OBJECT>
 * 1: Radius to heal units in <NUMBER>
 * 2: Delay between healing actions <NUMBER>
 * 3: Maximum number of patients <NUMBER>
 *    - Values < 0 signify no maximum number of patients.
 *
 * Return Value:
 * None
 *
 * Example:
 * [_source, 5, 0.5, -1] call BNA_KC_medical_fnc_areaSlowHeal;
 */


params [
    ["_object", objNull, [objNull]],
    ["_radius", -1, [0]],
    ["_rate", -1, [0]],
    ["_maxPatients", 0, [0]]
];
private ["_function", "_condition", "_exitCode", "_healHandler", "_fullHealed"];
TRACE_4("fnc_areaSlowHeal", _object, _radius, _rate, _maxPatients);

if (
    isNull _object or {
        _radius <= 0 or
        _rate < 0 or
        _maxPatients isEqualTo 0
    }
) exitWith {};

_function = {
    params ["_handle", "_object", "_radius", "_maxPatients"];
    private ["_positionAGL", "_currentPatients", "_units"];

    if (isGamePaused) then {continue};

    _positionAGL = ASLToAGL getPosASL _object;
    _currentPatients = _object getVariable [QGVAR(currentPatients), []];

    _units = [_positionAGL, _radius] call EFUNC(core,getNearbyUnits);
    _units select {
        !(_x call FUNC(isFullyHealed) or _x in _currentPatients);
    };

    INFO_2("Area Healer %1 | (Start) _units=%1", _handle, _units);
};

_condition = {
    params ["_handle", "_object", "_radius", "_maxPatients"];
    !isNull _object;
};

_exitCode = {
    params ["_handle", "_object", "_radius", "_maxPatients"];
    INFO_2("Area Healer %1 | (Exit) Removing handler from %2", _handle, _object);
};

_areaHandler = [
    _function,
    _condition,
    _exitCode,
    _rate,
    [_object, _radius, _maxPatients]
] call EFUNC(core,tempPFH);

_object setVariable [QGVAR(areaHealHandler), _areaHandler];
_areaHandler;