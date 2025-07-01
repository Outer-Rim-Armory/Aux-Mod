#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Condition function for picking up weapons using ACE's Crew Served Weapons feature.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 * 1: The weapon to pick up <OBJECT>
 *
 * Return Value:
 * True if weapon can be picked up, otherwise false <BOOL>
 *
 * Examples:
 * [ace_player, _mortar] call BNA_KC_vehicles_fnc_csw_canDeploy;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_weapon", objNull, [objNull]]
];
TRACE_2("fnc_csw_canPickup",_unit,_weapon);

if (!(_unit getVariable [QEGVAR(jetpacks,usingJetpack), false]) and
    {[_weapon, _unit] call ace_csw_fnc_assemble_canPickUpWeapon}
) exitWith {true};

false;
