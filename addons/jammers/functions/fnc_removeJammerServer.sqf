#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Removes the jamming functionality of a radio jammer.
 *
 * Arguments:
 * 0: Radio jammer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_jammers_removeJammerServer", [_jammer]] call CBA_fnc_serverEvent;
 *
 * Public: No
 */

params ["_jammer"];
private ["_index"];
TRACE_1("fnc_removeJammerServer",_jammer);

if (!isServer) exitWith {WARNING("fnc_removeJammerServer called from non-server context"); false;};
if (isNull _jammer) exitWith {false};

[GVAR(activeJammers), _jammer] call CBA_fnc_hashRem;
_jammer setVariable [QGVAR(isActive), nil, true];

[QGVAR(removeJammerLocal), _jammer] call CBA_fnc_globalEvent;
true;