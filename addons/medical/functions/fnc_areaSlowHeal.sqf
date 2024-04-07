#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Slowly heals all units within a given radius.
 *
 * Arguments:
 * 0: Source for healing <OBJECT>
 * 1: Radius to heal units in <NUMBER>
 * 2: Delay between healing actions <NUMBER>
 * 3: Amount of blood to add per action (Optional, default: 0.25) <NUMBER>
 * 4: Amount of pain to reduce per action (Optional, default: 0.1) <NUMBER>
 * 5: Whether to full heal the patient after completion (Optional, default false) <BOOL>
 * 6: Maximum number of patients (Optional, default: 0) <NUMBER>
 *    - Values < 0 signify no maximum number of patients.
 *
 * Return Value:
 * CBA PFH id <NUMBER>
 *
 * Example:
 * [_source, 5, 0.5, -1] call BNA_KC_medical_fnc_areaSlowHeal;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_radius", -1, [0]],
    ["_rate", -1, [0]],
    ["_bloodRestore", 0.25, [0]],
    ["_painReduce", 0.1, [0]],
    ["_fullHealOnCompletion", false, [false]],
    ["_maxPatients", 0, [0]]
];
private ["_function", "_condition", "_exitCode", "_healHandler", "_fullHealed"];
TRACE_4("fnc_areaSlowHeal",_object,_radius,_rate,_maxPatients);

if (
    isNull _object or {
        _radius <= 0 or
        _rate < 0 or
        _maxPatients isEqualTo 0
    }
) exitWith {};

_function = {
    params ["_handle", "_object", "_radius", "_rate", "_maxPatients"];
    private ["_positionAGL", "_currentPatients", "_nearbyUnits", "_unitsToHeal"];

    if (isGamePaused) then {continue};

    _positionAGL = ASLToAGL getPosASL _object;
    _currentPatients = _object getVariable [QGVAR(currentPatients), []];

    TRACE_1(FORMAT_2("Area Healer %1 (%2) |",_handle,typeOf _object),_currentPatients);

    // Remove out of range / full healed patients
    if !(_currentPatients isEqualTo []) then {
        for "_i" from 0 to (count _currentPatients - 1) do {
            _currentPatients#_i params ["_unit", "_handlerID"];

            if (_unit call FUNC(isFullyHealed)) then {
                _unit setVariable [QGVAR(canBeHealed), false]; // Causes the PFH to remove itself and call its exit code
                _currentPatients deleteAt _i;
            };
        };
    };

    _unitsToHeal = _currentPatients apply {_x#0;};
    _nearbyUnits = [_positionAGL, _radius] call EFUNC(core,getNearbyUnits);
    _nearbyUnits = _nearbyUnits select {
        !(_x call FUNC(isFullyHealed) or _x in _unitsToHeal);
    };
    _nearbyUnits = _nearbyUnits call FUNC(sortByInjuries);

    _unitsToHeal append _nearbyUnits;

    if (_maxPatients > 0) then {
        _unitsToHeal = _unitsToHeal select [0, _maxPatients];
    };

    TRACE_3(FORMAT_2("Area Healer %1 (%2) |",_handle,typeOf _object),_unitsToHeal,_currentPatients,_nearbyUnits);

    // Start healing new patients
    {
        private ["_healHandlerID"];
        INFO_4("Area Healer %1 (%2) | Healing %3 every %4 seconds",_handler,typeOf _object,_x,_rate);

        _healHandlerID = [_x, _rate, _bloodRestore, _painReduce, _fullHealOnCompletion] call FUNC(slowHeal);
        _currentPatients pushBack [_x, _healHandlerID];

        _object setVariable [QGVAR(currentPatients), _currentPatients, true];
    } forEach (_unitsToHeal - (_currentPatients apply {_x#0}));
};

_condition = {
    params ["_handle", "_object", "_radius", "_rate", "_maxPatients"];
    !isNull _object;
};

_exitCode = {
    params ["_handle", "_object", "_radius", "_rate", "_maxPatients"];
    INFO_3("Area Healer %1 (%2) | (Exit) Removing handler from %3",_handle,typeOf _object,_object);
};

_areaHandler = [
    _function,
    _condition,
    _exitCode,
    _rate,
    [_object, _radius, _rate, _maxPatients]
] call EFUNC(core,tempPFH);

_object setVariable [QGVAR(areaHealHandler), _areaHandler];
_areaHandler;