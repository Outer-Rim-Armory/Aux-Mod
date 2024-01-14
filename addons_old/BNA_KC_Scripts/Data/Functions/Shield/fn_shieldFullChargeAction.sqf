/*
* Author: DartRuffian
* Recharges a vehicle's shield to full after a amount of time.
* Recharge time is based on the vehicle's shield regen rate * 1.5
*
* Arguments:
* vehicle: Object - The vehicle to recharge
* engineer: Object - The person repairing the vehicle
*
* Return Value:
* None
*
* Examples:
* [vehicle player, player] call BNAKC_fnc_shieldFullChargeAction;
*/


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]], ["_engineer", objNull, [objNull]]];
private ["_rechargeTime"];

if (isNull _vehicle or isNull _engineer) exitWith {};

_rechargeTime =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenTime",
    BASE_SHIELD_REGEN_TIME
] call BIS_fnc_returnConfigEntry;

_vehicle setVariable ["BNA_KC_Shield_isRecharging", true, true];
_vehicle call BNAKC_fnc_deactivateShield;

[
    _rechargeTime * 1.5,
    [_vehicle, _engineer],
    {
        // Finished
        _this#0 params ["_vehicle", "_engineer"];
        _vehicle call BNAKC_fnc_rechargeShield;
        _vehicle setVariable ["BNA_KC_Shield_isRecharging", nil, true];
        ["Recharge Complete"] remoteExecCall ["ace_common_fnc_displaytextstructured", _engineer];
    },
    {
        // Failed
        _this#0 params ["_vehicle", "_engineer"];
        _vehicle setVariable ["BNA_KC_Shield_isRecharging", nil, true];
        ["Recharge Cancelled"] remoteExecCall ["ace_common_fnc_displaytextstructured", _engineer];
    },
    "Recharging Shields",
    {
        // Condition
        _this#0 params ["_vehicle", "_engineer"];
        [_vehicle, _engineer] call BNAKC_fnc_canFullRecharge;
    }
] call ace_common_fnc_progressBar;