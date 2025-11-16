#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Converts an array in format RGB(A) to hex string.
 * If given array has four elements, it is assumed to be format RGBA.
 * Arrays with three elements are assumed to be format RGB.
 *
 * Arguments:
 * 0: RGB(A) value <ARRAY>
 *
 * Return Value:
 * The hex code, with leading "#" <STRING>
 *
 * Example:
 * [255, 255, 255] call FUNC(rgbToHex);
 */

params [
    ["_color", [0, 0, 0], [[]], [3, 4]]
];
private ["_colorMultiplier", "_colorStr"];
TRACE_1("fnc_rgbToHex",_color);

_colorMultiplier = 1;
if (count _color > 3) then {
    _color = _color select [0, 3];
    _colorMultiplier = 255;
};

_color = _color apply {
    (_x * _colorMultiplier) call ace_common_fnc_toHex;
};
_colorStr = "#" + (_color joinString "");
_colorStr;
