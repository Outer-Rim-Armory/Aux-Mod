#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds the name of the weapon being deployed / picked up to the interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = "_this call BNA_KC_vehicles_fnc_csw_modifyInteraction;"
 *
 * Public: No
 */

params ["_target", "_player", "_params", "_actionData"];
private ["_configPath", "_name", "_actionName"];
TRACE_4("fnc_csw_modifyInteraction",_target,_player,_params,_actionData);

_configPath = "";
if (_target isEqualTo _player) then {
    // Placing csw weapon
    _configPath = configFile >> "CfgWeapons" >> secondaryWeapon _player >> "ACE_CSW";
} else {
    _configPath = configOf _target;
};

_name = [
    _configPath,
    "displayName",
    "Tripod"
] call BIS_fnc_returnConfigEntry;

_actionName = _actionData#1;
_actionName = [_actionName, "Tripod", _name] call EFUNC(core,stringReplace);
_actionData set [1, _actionName];