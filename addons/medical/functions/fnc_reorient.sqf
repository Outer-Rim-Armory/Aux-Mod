#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Attempts to wake up a stable but unconscious unit.
 *
 * Arguments:
 * 0: Patient unit <OBJECT>
 *
 * Return Value:
 * True if patient wakes up, otherwise false
 *
 * Examples:
 * player call FUNC(reorient);
 *
 * Public: Yes
 */

params [
    ["_patient", objNull, [objNull]]
];
private ["_random"];
TRACE_1("fnc_reorient",_patient);

_random = random 1;

if (!(_patient call ace_common_fnc_isAwake) and
    {_random >= GVAR(reorient_successChance)} and
    {_patient call ace_medical_status_fnc_hasStableVitals}
) then {
    [_patient, false] call ace_medical_fnc_setUnconscious;
    true;
} else {
    false;
};