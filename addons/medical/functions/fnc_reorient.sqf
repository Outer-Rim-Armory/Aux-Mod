#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Forces a unit to wake up if they have stable vitals.
 *
 * Arguments:
 * 1: Patient unit <OBJECT>
 *
 * Return Value:
 * True if patient wakes up, false otherwise
 *
 * Examples:
 * player call FUNC(reorient);
 *
 * Public: Yes
 */

params [
    ["_patient", objNull, [objNull]]
];

if (_patient call ace_medical_status_fnc_hasStableVitals) then {
    [_patient, false] call ace_medical_fnc_setUnconscious;
    true;
} else {
    false;
};