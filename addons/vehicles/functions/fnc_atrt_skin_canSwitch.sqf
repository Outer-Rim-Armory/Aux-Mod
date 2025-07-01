#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can switch their AT-RT's skin.
 * The AT-RT requires a specific action due to being remote controlled.
 *
 * Arguments:
 * 0: The target <OBJECT>
 *
 * Return Value:
 * True if the textures can be changed, otherwise false <BOOL>
 *
 * Examples:
 * ace_player call BNA_KC_vehicles_fnc_atrt_skin_canSwitch;
 *
 * Public: No
 */

params ["_target"];
private ["_atrt", "_textureSources"];

_atrt = _target getVariable [QGVAR(atrt_riding), objNull];

TRACE_2("fnc_atrt_skin_canSwitch",_target,_atrt);

_textureSources = getArray (configOf _atrt >> "textureList");

count _textureSources >= 2 and {alive _atrt} and
{!isNull _atrt} and {IS_STOPPED(_atrt)};
