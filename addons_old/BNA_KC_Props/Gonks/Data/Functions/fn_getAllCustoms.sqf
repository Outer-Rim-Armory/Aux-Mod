/*
 * Author: DartRuffian
 * Crawls through CfgWeapons and CfgVehicles and returns an array of all custom helmets, uniforms, vests, and backpacks.
 * Output is saved to mission namespace as "BNA_KC_customItems" after first run.
 *
 * Arguments:
 * rebuild: Boolean - (Optional, default False) Forces rebuilding the array of custom items.
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_getAllCustoms;
 */


params [["_rebuild", false, [false]]];
private ["_customItems"];

_customItems = missionNamespace getVariable ["BNA_KC_customItems", []];
if (_customItems isNotEqualTo [] and _rebuild isEqualTo false) exitWith
{
	_customItems;
};

_customItems = [];
{
	_customItems append
	(
		"_type = (configName _x) call BIS_fnc_itemType; _isCustom = [_x, 'BNA_KC_isCustom', 0] call BIS_fnc_returnConfigEntry; (getNumber(_x >> 'scope') isEqualTo 2) && _isCustom isEqualTo 1 && !(((_type select 0) isEqualTo '') || ((_type select 0) isEqualTo 'VehicleWeapon'))" configClasses _x
	);
} forEach [(configFile >> "CfgWeapons"), (configFile >> "CfgVehicles")];

_customItems = _customItems apply {configName _x;};

missionNamespace setVariable ["BNA_KC_customItems", _customItems, true];
_customItems;