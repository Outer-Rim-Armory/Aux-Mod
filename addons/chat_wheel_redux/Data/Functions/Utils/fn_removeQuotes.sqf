/*
 * Author: DartRuffian
 * Removes double and/or single quotes from a given string.
 * By default, removes double and single quotes.
 *
 * Arguments:
 * 0: The string to be edited <String>
 * 1: Remove double quotes <Bool>
 * 2: Remove single quotes <Bool>
 *
 * Return Value:
 * String - The edited string
 *
 * Example:
 * ["Th'is m'essage 'h'as 'a' l'o't' 'o'f' q'u'o't'es in it.", false, true] call CWR_fnc_remoteQuotes;
 * // Returns "This message has a lot of quotes in it"
 */

params ["_str", ["_removeDouble", true], ["_removeSingle", true]];

if (_removeDouble) then {
    _str = [_str, '"', ""] call CWR_fnc_stringReplace;
};

if (_removeDouble) then {
    _str = [_str, "'", ""] call CWR_fnc_stringReplace;
};

_str;
