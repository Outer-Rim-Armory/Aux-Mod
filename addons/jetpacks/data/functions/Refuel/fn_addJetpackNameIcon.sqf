/*
 * Author: DartRuffian
 * ACE Action modifier function to set the action's icon to the picture of the backpack the unit is wearing.
 * Most params are unused but included since ACE passes them all anyway.
 *
 * Arguments:
 * target: Object - The unit whose jetpack icon to show
 * player: Object - The unit using the action
 * params: Array - Parameters passed to the action
 * actionData: Array - Action name, icon, etc.
 *
 * Return Value:
 * None
 *
 * Examples:
 * cursorObject call BNAKC_Jetpacks_fnc_refuelFromBodyModifier;
 */


params ["_target", "_player", "_params", "_actionData"];

private _jetpackName =
[
    (configFile >> "CfgVehicles" >> backpack _target),
    "displayName",
    "jetpack"
] call BIS_fnc_returnConfigEntry;

private _icon =
[
    (configFile >> "CfgVehicles" >> backpack _target),
    "picture",
    "\z\ace\addons\refuel\ui\icon_refuel_interact.paa"
] call BIS_fnc_returnConfigEntry;

_actionData set [1, format [_actionData#1, _jetpackName]];
_actionData set [2, _icon];