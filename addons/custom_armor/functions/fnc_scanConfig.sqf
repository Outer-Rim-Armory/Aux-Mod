#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Crawls through CfgWeapons and CfgVehicles to get all custom helmets, vests, etc. and saves the array to missionNamespace
 *
 * Arguments:
 * None
 *
 * Return Value:
 * The array of custom items <ARRAY>
 *
 * Example:
 * call BNA_KC_custom_armor_fnc_scanConfig;
 */

params [
    ["_rebuild", false, [false]]
];
private ["_customItems"];
TRACE_1("fnc_scanConfig",_rebuild);

_customItems = missionNamespace getVariable [QGVAR(customItems), []];
if (_customItems isNotEqualTo [] and !_rebuild) exitWith {
    _customItems;
};

_customItems = [];
{
    _customItems append (
        QUOTE([ARR_3(_x,QQGVAR(isCustom),FALSE)] call BIS_fnc_returnConfigEntry isEqualTo TRUE) configClasses _x
    );
} forEach [(configFile >> "CfgWeapons"), (configFile >> "CfgVehicles")];

_customItems = _customItems apply {configName _x;};

missionNamespace setVariable [QGVAR(customItems), _customItems, true];
_customItems;
