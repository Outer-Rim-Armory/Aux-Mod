#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Makes a given object a radio jammer.
 *
 * Arguments:
 * 0: Radio jammer <OBJECT>
 * 1: Radius in meters <NUMBER>
 * 2: Strength (optional, default: 100) <NUMBER>
 * 3: Is active (optional, default: true) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_jammer, _radius] call BNA_KC_jammers_fnc_addJammer;
 *
 * Public: Yes
 */

params [
    ["_jammer", objNull, [objNull]],
    ["_radius", -1, [0]],
    ["_strength", 100, [0]],
    ["_isActive", true, [true]]
];
TRACE_4("fnc_addJammer",_jammer,_radius,_strength,_isActive);

// Wait until add/remove handlers have been added
[{GVAR(ready)}, {
    [QGVAR(addJammer), _this] call CBA_fnc_serverEvent;
}, [_jammer, _radius, _strength, _isActive]] call CBA_fnc_waitUntilAndExecute;
