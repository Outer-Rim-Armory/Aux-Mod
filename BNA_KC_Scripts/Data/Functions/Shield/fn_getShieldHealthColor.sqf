/*
* Author: DartRuffian
* Returns the shield health color based on the vehicle's shield health
*
* Arguments:
* vehicle: Object - Vehicle to get shield health color of
*
* Return Value:
* String - Health color hex code
*
* Examples:
* (vehicle player) call BNAKC_fnc_getShieldHealthColor; // Returns "#FF0000"
*/


// ACE repair colors
#include "script_component.sqf"
#define DAMAGE_COLOR_SCALE ["#FF0000", "#FF4400", "#FF7D16", "#FF9916", "#FCB121", "#FFD52C", "#FFEC4D", "#FFFF7E", "#FFFFFF"]
params [["_vehicle", objNull, [objNull]]];
private ["_shieldMaxHealth", "_shieldHealth", "_color"];

if (isNull _vehicle) exitWith {};

_shieldMaxHealth =
[
	(configFile >> "CfgVehicles" >> typeOf _target),
	"BNA_KC_Shield_maxHealth",
	BASE_SHIELD_HEALTH
] call BIS_fnc_returnConfigEntry;
_shieldHealth = _target call BNAKC_fnc_getShieldHealth;

_color = DAMAGE_COLOR_SCALE select (linearConversion [0, 1, (_shieldHealth/_shieldMaxHealth), 0, 8, true]);