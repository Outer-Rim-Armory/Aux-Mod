/*
 * Author: DartRuffian
 * Creates ace child actions to allow pilots to switch between vehicle skins.
 *
 * Arguments:
 * target: Object - The object the action is assigned to
 * player: Object - ace_player
 * params: Array - Parameters passed to the ace action
 *
 * Return Value:
 * None
 *
 * Examples:
 * condition = "_this call BNAKC_fnc_canSwitchSkins";
 */


params ["_target", "_player", "_params"];
private ["_textureSets"];

_textureSets =
[
    configFile >> "CfgVehicles" >> typeOf _target,
    "textureList",
    []
] call BIS_fnc_returnConfigEntry;

count _textureSets > 2 and _player isEqualTo currentPilot _target and speed _target == 0;