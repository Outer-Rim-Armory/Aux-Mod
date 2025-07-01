#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Attempts to wake up a stable but unconscious unit.
 *
 * Arguments:
 * 0: Medic unit <OBJECT>
 * 1: Patient unit <OBJECT>
 *
 * Return Value:
 * True if patient wakes up, otherwise false <BOOL>
 *
 * Examples:
 * [player, unit] call FUNC(reorient);
 *
 * Public: Yes
 */

params [
    ["_medic", objNull, [objNull]],
    ["_patient", objNull, [objNull]]
];
private ["_random", "_delay"];
TRACE_2("fnc_reorient",_medic,_patient);

_random = random 1;

// Non-public function, could potentially be changed
[_patient, "activity", "%1 attempted to reorient patient", [GET_NAME(_medic)]] call ace_medical_treatment_fnc_addToLog;

if (!(_patient call ace_common_fnc_isAwake) and
    {_random >= GVAR(reorient_successChance)} and
    {_patient call ace_medical_status_fnc_hasStableVitals}
) then {
    _delay = (random 3) max 1;
    [{
        if (IS_UNCONSCIOUS(_this)) then {
            [_this, false] call ace_medical_fnc_setUnconscious;
        };
    }, _patient, _delay] call CBA_fnc_waitAndExecute;
    true;
} else {
    false;
};
