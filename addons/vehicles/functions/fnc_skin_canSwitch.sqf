#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can switch their vehicle's skin
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * Whether a vehicle's skin can be changed <BOOL>
 *
 * Examples:
 * condition = call FUNC(skin_canSwitch);
 *
 * Public: Yes
 */

params ["_target", "_player", "_params"];
private ["_textureSources"];
TRACE_3("fnc_skin_canSwitch",_target,_player,_params);

_textureSources = getArray (configFile >> "CfgVehicles" >> typeOf _target >> "textureList");


count _textureSources >= 2 and {
    alive _target and
    _player isEqualTo currentPilot _target and
    speed _target <= 1
};