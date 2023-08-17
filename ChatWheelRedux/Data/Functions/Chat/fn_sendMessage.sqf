/*
 * Author: DartRuffian
 * Given a bearing, an integer ranging from 0 to 360.
 *
 * Arguments:
 * 0: The message to send, optionally with [tags] <String>
 *
 * Return Value:
 * None
 *
 * Example:
 * "I need ammo for my [weapon]" call CWR_fnc_SendMessage;
 * // Sends "I need ammo for my [KC] DC-15S" to all members in the player's group
 */

params ["_message"];

_message = _message call CWR_fnc_processTags;

// Submenus need to be opened with spawn, which returns the code of the
// submenu function before an option is selected.
if (typeName _message isNotEqualTo "STRING") exitWith {};

// Why is chat not global...
[player, _message] remoteExecCall ["groupChat", (units group player)];
