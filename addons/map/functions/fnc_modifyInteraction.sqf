#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Modifier function for mark self interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Example:
 * modifierFunction = "call BNA_KC_map_modifyInteraction";
 *
 * Public: No
 */

params ["_target", "_player", "_params", "_actionData"];
private ["_colorCode"];
TRACE_4("fnc_modifyInteraction",_target,_player,_params,_actionData);

_colorCode = [
    configFile >> "CfgMarkerColors" >> GVAR(markSelfColor),
    "color",
    [0, 0, 0, 1]
] call BIS_fnc_returnConfigEntry;
(_actionData select 2) set [1, [_colorCode] call EFUNC(core,rgbToHex)];

nil;
