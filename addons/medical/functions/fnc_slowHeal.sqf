#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Slowly heals a unit over time.
 *
 * Arguments:
 * 0: The unit to heal <OBJECT>
 * 1: Delay between healing actions <NUMBER>
 *
 * Return Value:
 * CBA Per Frame Handler ID, -1 if error, or nothing if unit is already healed <NUMBER>
 *
 * Examples:
 * [player, 10] call BNA_KC_medical_fnc_slowHeal;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_delay", 0, [0]]
];
private ["_function", "_condition", "_exitCode"];
TRACE_2("fnc_slowHeal", _unit, _delay);

if (isNull _unit) exitWith {-1};

_function = {
    params ["_handle", "_unit"];
    private ["_wounds", "_bloodLevel"];

    if (isGamePaused) then {continue};

    _wounds = _unit getVariable ["ace_medical_openWounds", createHashmap];

    INFO_2("Slow Healer %1 | (Pre-Bandage) _wounds=%2", _handle, _wounds);

    if (count _wounds > 0) then {
        private ["_bodyPart", "_bodyPartWounds"];
        _bodyPart = selectRandom keys _wounds;
        _bodyPartWounds = _wounds get _bodyPart;
        _bodyPartWounds deleteAt (random count _bodyPartWounds);

        if (count _bodyPartWounds isEqualTo 0) then {
            _wounds deleteAt _bodyPart;
        } else {
            _wounds set [_bodyPart, _bodyPartWounds];
        };

        _unit setVariable ["ace_medical_openWounds", _wounds, true];
    };

    _bloodLevel = _unit getVariable ["ace_medical_bloodVolume", 6];
    if (_bloodLevel < 6) then {
        _bloodLevel = _bloodLevel + GVAR(bactaBloodRestoreAmount);
    } else {
        _bloodLevel = 6;
    };

    _unit setVariable ["ace_medical_bloodVolume", _bloodLevel, true];

    INFO_2("Slow Healer %1 | (Post-Bandage) _wounds=%2", _handle, _wounds);

    // _unit setVariable ["ace_medical_fractures", [0, 0, 0, 0, 0, 0], true];
    // if (_unit getVariable ["ace_isUnconscious", false]) then {
    //     [_unit, false, 0, true] call ace_medical_fnc_setUnconscious;
    // };

    // Update aim effect and blood loss
    [_unit] call ace_medical_engine_fnc_updateDamageEffects;
    [_unit] call ace_medical_status_fnc_updateWoundBloodLoss;
};

_condition = {
    params ["_handle", "_unit"];
    alive _unit and !(_unit call FUNC(isFullyHealed));
};

_exitCode = {
    // params ["_handle", "_unit"];
};

[
    _function,
    _condition,
    _exitCode,
    _delay,
    [_unit]
] call EFUNC(core,tempPFH);