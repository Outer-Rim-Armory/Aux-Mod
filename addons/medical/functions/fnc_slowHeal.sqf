#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Slowly heals a unit over time.
 *
 * Arguments:
 * 0: The unit to heal <OBJECT>
 * 1: The rate of healing actions <NUMBER>
 *
 * Return Value:
 * CBA Per Frame Handler ID or -1 if invalid parameters <NUMBER>
 *
 * Examples:
 * [player, 10] call BNA_KC_medical_fnc_slowHeal;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_rate", 0, [0]]
];
private ["_function", "_condition", "_exitCode", "_healHandler", "_fullHealed"];
TRACE_2("fnc_slowHeal",_unit,_rate);

if (
    isNull _unit or {
        !(_unit isKindOf "CAManBase") or
        !(_unit getVariable [QGVAR(slowHealHandler), -1] isEqualTo -1)
    }
) exitWith {-1};

_function = {
    params ["_handle", "_unit"];
    private ["_wounds", "_bloodLevel"];

    if (isGamePaused) then {continue};

    _wounds = _unit getVariable ["ace_medical_openWounds", createHashmap];
    _bloodLevel = _unit getVariable ["ace_medical_bloodVolume", DEFAULT_BLOOD_VOLUME];
    _painLevel = _unit getVariable ["ace_medical_pain", 0];

    INFO_4("Slow Healer %1 | (Pre-Treatment) _wounds=%2, _bloodLevel=%3, _painLevel=%4",_handle,_wounds,_bloodLevel,_painLevel);

    switch (true) do {
        case (count _wounds > 0): {
            private ["_bodyPart", "_bodyPartWounds"];

            _bodyPart = selectRandom keys _wounds;
            _bodyPartWounds = _wounds get _bodyPart;
            _bodyPartWounds deleteAt (random count _bodyPartWounds);

            if (count _bodyPartWounds > 0) then {
                _wounds set [_bodyPart, _bodyPartWounds];
            } else {
                _wounds deleteAt _bodyPart;
            };

            _unit setVariable ["ace_medical_openWounds", _wounds, true];
        };

        case (_bloodLevel < DEFAULT_BLOOD_VOLUME): {
            _bloodLevel = (_bloodLevel + GVAR(bactaBloodRestoreAmount)) min DEFAULT_BLOOD_VOLUME;
            _unit setVariable ["ace_medical_bloodVolume", _bloodLevel, true];
        };

        case (_painLevel > 0): {
            _painLevel = (_painLevel - GVAR(bactaPainReductionAmount)) max 0;
            _unit setVariable ["ace_medical_pain", _painLevel, true];
        };

        default {
            INFO_2("Slow Healer %1 | (Exit) Treatment complete for unit %2",_handle,_unit);
            if (GVAR(bactaFullHealOnComplete)) then {[_unit, _unit] call ace_medical_treatment_fnc_fullHeal;};
        };
    };

    INFO_4("Slow Healer %1 | (Post-Treatment) _wounds=%2, _bloodLevel=%3, _painLevel=%4",_handle,_wounds,_bloodLevel,_painLevel);

    // Update aim effect and blood loss
    [_unit] call ace_medical_engine_fnc_updateDamageEffects;
    [_unit] call ace_medical_status_fnc_updateWoundBloodLoss;
};

_condition = {
    params ["_handle", "_unit"];
    alive _unit and !(_unit call FUNC(isFullyHealed)) and _unit getVariable [QGVAR(canBeHealed), true];
};

_exitCode = {
    params ["_handle", "_unit"];
    INFO_2("Slow Healer %1 | (Exit) Removing handler from %2",_handle,_unit);
    _unit setVariable [QGVAR(slowHealHandler), nil];
    _unit setVariable [QGVAR(canBeHealed), nil];
};

_healHandler = [
    _function,
    _condition,
    _exitCode,
    _rate,
    [_unit]
] call EFUNC(core,tempPFH);

_unit setVariable [QGVAR(slowHealHandler), _healHandler];
_healHandler;