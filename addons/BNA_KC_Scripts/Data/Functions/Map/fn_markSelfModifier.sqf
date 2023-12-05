/*
* Author: DartRuffian
* Modifier for "Mark Self" ace self action
*
* Arguments:
* target: Object - The object the action is assigned to
* player: Object - ace_player
* params: Array - Parameters passed to the ace action
* actionData: Array - Action name, icon, etc.
*
* Return Value:
* None
*
* Examples:
* modifierFunction = "_this call BNAKC_fnc_markSelfModifier;"
*/


params ["_target", "_player", "_params", "_actionData"];

private _colorCode =
[
    configFile >> "CfgMarkerColors" >> BNA_KC_Map_MarkColor,
    "color",
    [0, 0, 0, 1]
] call BIS_fnc_returnConfigEntry;
(_actionData select 2) set [1, [_colorCode] call BNAKC_fnc_rgbToHex];