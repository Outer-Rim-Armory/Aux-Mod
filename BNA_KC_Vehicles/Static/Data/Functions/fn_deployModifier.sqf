/*
 * Author: DartRuffian
 * ACE Action modifier function to update the action's name.
 * Most params are unused but included since ACE passes them all anyway.
 *
 * Arguments:
 * target: Object - The tripod (if picking up)
 * player: Object - The unit placing/picking up the tripod
 * params: Array - Parameters passed to the action
 * actionData: Array - Action name, icon, etc.
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = "call BNAKC_fnc_deployModifier";
 */


params ["_target", "_player", "_params", "_actionData"];

private _configPath = "";
if (secondaryWeapon _player isEqualTo "") then
{
    // Unit is picking up a tripod
    _configPath = configFile >> "CfgVehicles" >> typeOf _target;
}
else
{
    // Unit is placing tripod
    _configPath = configFile >> "CfgWeapons" >> secondaryWeapon _player;
};

private _name =
[
    _configPath,
    "displayName",
    "Tripod"
] call BIS_fnc_returnConfigEntry;

_actionData set [1, format ["%1 %2", _actionData#1, _name]];