#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can switch their vehicle's skin.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The player attempting to change the texture <OBJECT>
 *
 * Return Value:
 * True if the textures can be changed, otherwise false <BOOL>
 *
 * Examples:
 * condition = call BNA_KC_vehicles_fnc_skin_canSwitch;
 *
 * Public: No
 */

params ["_vehicle", "_player"];
private ["_textureSources"];
TRACE_2("fnc_skin_canSwitch",_target,_vehicle);

_textureSources = getArray (configOf _vehicle >> "textureList");

if (_vehicle isKindOf "StaticWeapon") exitWith {
    count _textureSources > 2 and {alive _vehicle};
};

count _textureSources > 2 and {alive _vehicle} and
{_player isEqualTo currentPilot _vehicle} and {IS_STOPPED(_vehicle)};