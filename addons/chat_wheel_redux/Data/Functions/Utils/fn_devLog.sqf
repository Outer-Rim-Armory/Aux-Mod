/*
 * Author: DartRuffian
 * Writes a given message and function name that called it to the report file and systemChat.
 *
 * Arguments:
 * message: String - The message to write
 *
 * Return Value:
 * None
 *
 * Example:
 * "Message" call CWR_fnc_devLog;
 * // Writes "[TAG_fnc_funcName] Message" to console and report file
 */


params ["_message"];

_message = format["[%1] %2", _fnc_scriptNameParent, _message];

if (CWR_Debug_ShowMessages) then {
    systemChat _message;
};
diag_log _message;
