/*
 * Author: DartRuffian
 * Converts an array in format RGB(A) to hex string.
 * If given array has four elements, it is assumed to be format RGBA.
 * Arrays with three elements are assumed to be format RGB.
 *
 * Arguments:
 * color: Array - Array format RGB(A)
 *
 * Return Value:
 * String - The hex code, with leading "#"
 *
 * Example:
 * [255, 255, 255] call BNAKC_fnc_rgbToHex; // #FFFFFF
 * [0, 0, 0] call BNAKC_fnc_rgbToHex; // #000000
 */


params [["_color", [0,0,0], [[0]], [3, 4]]];
private ["_colorMultiplier", "_colorStr"];

_colorMultiplier = 1;
if (count _color > 3) then
{
    _color = _color select [0, 3]; // 3 is the number of elements, not the index
    _colorMultiplier = 255;
};

_color = _color apply { (_x * _colorMultiplier) call ace_common_fnc_toHex; };
_colorStr = "#" + (_color joinString "");
_colorStr;