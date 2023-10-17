/*
* Author: DartRuffian
* Modifier for the main shield ace action
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
* modifierFunction = "_this call BNAKC_fnc_shieldActionModifier;"
*/


// ACE repair colors
#include "script_component.sqf"
#define DAMAGE_COLOR_SCALE ["#FF0000", "#FF4400", "#FF7D16", "#FF9916", "#FCB121", "#FFD52C", "#FFEC4D", "#FFFF7E", "#FFFFFF"]
params ["_target", "_player", "_params", "_actionData"];
private ["_shieldMaxHealth", "_shieldHealth", "_percentColor", "_actionName"];

_shieldMaxHealth =
[
    (configFile >> "CfgVehicles" >> typeOf _target),
    "BNA_KC_Shield_maxHealth",
    BASE_SHIELD_HEALTH
] call BIS_fnc_returnConfigEntry;
_shieldHealth = _target getVariable ["BNA_KC_Shield_health", _shieldMaxHealth];

_percentColor = _target call BNAKC_fnc_getShieldHealthColor;
_shieldHealthPercent = [_target, true] call BNAKC_fnc_getShieldHealth;

_actionName = _actionData#1;
_actionName = format [_actionName, format ["<t color='%1'>%2</t>", _percentColor, (str _shieldHealthPercent) + "%"]];
_actionData set [1, _actionName];