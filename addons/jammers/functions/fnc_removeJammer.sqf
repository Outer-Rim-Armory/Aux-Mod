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
 * _jammer call BNA_KC_jammers_fnc_removeJammer;
 *
 * Public: Yes
 */

params [
    ["_jammer", objNull, [objNull]]
];
TRACE_1("fnc_removeJammer",_jammer);

[{GVAR(ready)}, {
    [QGVAR(removeJammer), _this] call CBA_fnc_serverEvent;
}, [_jammer]] call CBA_fnc_waitUntilAndExecute;
