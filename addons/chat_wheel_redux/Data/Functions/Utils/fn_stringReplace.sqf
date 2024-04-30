/*
 * Author: Colin J.D. Stewart (PixeL_GaMMa)
 * Edited By DartRuffian
 * Replaces all occurences of substrings in a given string with a given value.
 *
 * Arguments:
 * 0: The string to be edited <String>
 * 1: The substring to be replaced <String>
 * 2: The string to replace the substring with <String>
 *
 * Return Value:
 * String - The edited string
 *
 * Example:
 * ["xxx is awesome, I love xxx!", "xxx", "Arma"] call CWR_fnc_stringReplace;
 */

params ["_str", "_find", ["_replace", ""]];
private ["_return", "_len", "_pos"];

if ( !(_find isEqualType []) ) then {
    _find = [_find];
};

{
    _return = "";
    _len = count _x;
    _pos = _str find _x;

    while { (_pos != -1) && (count _str > 0) } do
    {
        _return = _return + (_str select [0, _pos]) + _replace;

        _str = (_str select [_pos + _len]);
        _pos = _str find _x;
    };
    _str = _return + _str;
} forEach _find;

_str;