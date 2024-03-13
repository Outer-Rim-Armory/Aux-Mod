#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Makes a given object a radio jammer. Server execution only.
 *
 * Arguments:
 * 0: Radio jammer <OBJECT>
 * 1: Radius in meters <NUMBER>
 * 2: Strength (optional, default: 100) <NUMBER>
 * 3: Is active (optional, default: true) <BOOL>
 *
 * Return Value:
 * True if jammer was added, otherwise false <BOOL>
 *
 * Example:
 * ["BNA_KC_jammer_addJammer", [_jammer, _radius]] call CBA_fnc_serverEvent;
 *
 * Public: No
 */

params [
    ["_jammer", objNull, [objNull]],
    ["_radius", -1, [0]],
    ["_strength", 100, [0]],
    ["_isActive", true, [true]]
];
private ["_jammerObjects"];
TRACE_4("fnc_addJammer",_jammer,_radius,_strength,_isActive);

if (!isServer or
    {!alive _jammer} or
    {_radius < 0} or
    {_strength < 0}
) exitWith {false;};

_jammerObjects = GVAR(activeJammers) apply {_x#0};
if (_jammer in _jammerObjects) exitWith {false};

GVAR(activeJammers) pushBack [_jammer, _radius, _strength];
_jammer setVariable [QGVAR(activeJammerIndex), count GVAR(activeJammers) - 1, true];
_jammer setVariable [QGVAR(isActive), _isActive, true];

if (GVAR(jammerHandler) < 0) then {
    [] call FUNC(jammerHandlerServer);
};

[QGVAR(addJammerLocal), [_jammer, _radius, _strength]] call CBA_fnc_globalEvent;
true;