#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Slowly heals a unit over time.
 *
 * Arguments:
 * 0: The unit to heal <OBJECT>
 * 1: The rate of healing actions <NUMBER>
 * 2: Amount of blood to add per action (Optional, default: 0.25) <NUMBER>
 * 3: Amount of pain to reduce per action (Optional, default: 0.1) <NUMBER>
 * 4: Whether to full heal the patient after completion (Optional, default false) <BOOL>
 *
 * Return Value:
 * CBA Per Frame Handler ID or -1 if invalid parameters <NUMBER>
 *
 * Examples:
 * [player, 10] call BNA_KC_medical_fnc_slowHeal;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_rate", 0, [0]],
    ["_bloodRestore", 0.25, [0]],
    ["_painReduce", 0.1, [0]],
    ["_fullHealOnCompletion", false, [false]]
];
private ["_function", "_condition", "_exitCode", "_healHandler", "_fullHealed"];
TRACE_2("fnc_slowHeal",_unit,_rate);

if (
    isNull _unit or {
        !(_unit isKindOf "CAManBase") or
        (_unit getVariable [QGVAR(slowHealHandler), -1] isNotEqualTo -1)
    }
) exitWith {-1};

_function = {
    params ["_handle", "_unit"];
    private ["_wounds", "_bloodLevel"];

    if (isGamePaused) then {continue};

    _wounds = GET_OPEN_WOUNDS(_unit);
    _bloodLevel = GET_BLOOD_VOLUME(_unit);
    _painLevel = GET_PAIN(_unit);

    INFO_4("Slow Healer %1 | (Pre-Treatment) _wounds=%2, _bloodLevel=%3, _painLevel=%4",_handle,_wounds,_bloodLevel,_painLevel);

    ["ace_common_displayTextStructured", ["Recieving treatment.", 1.5, _unit], _unit] call CBA_fnc_targetEvent;
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

            _unit setVariable [VAR_OPEN_WOUNDS, _wounds, true];
        };

        case (_bloodLevel < DEFAULT_BLOOD_VOLUME): {
            _bloodLevel = (_bloodLevel + _bloodRestore) min DEFAULT_BLOOD_VOLUME;
            _unit setVariable [VAR_BLOOD_VOL, _bloodLevel, true];
        };

        case (_painLevel > 0): {
            _painLevel = (_painLevel - _painReduce) max 0;
            _unit setVariable [VAR_PAIN, _painLevel, true];
        };

        default {
            INFO_2("Slow Healer %1 | (Exit) Treatment complete for unit %2",_handle,_unit);
            if (_fullHealOnCompletion) then {
                [_unit, _unit] call ace_medical_treatment_fnc_fullHeal;
            };
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
    ["ace_common_displayTextStructured", ["Finished recieving treatment.", 1.5, _unit], _unit] call CBA_fnc_targetEvent;
    _unit setVariable [QGVAR(slowHealHandler), nil, true];
    _unit setVariable [QGVAR(canBeHealed), nil, true];
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