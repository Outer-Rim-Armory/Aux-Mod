#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles EMP grenades
 *
 * Arguments:
 * 0: The unit that threw the grenade <OBJECT>
 * 1: Class name of the ammo type thrown <STRING>
 * 2: Class name of the magazine (grenade) thrown <STRING>
 * 3: Projectile object <OBJECT>
 *
 * Return Value:
 * Whether the emp grenade activated successfully <BOOL>
 *
 * Examples:
 * [ace_player, "BNA_KC_Grenade_EMP", "BNA_KC_Grenade_EMP_Ammo", _projectile] call BNA_KC_weapons_fnc_empGrenade;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_ammo", "", [""]],
    ["_magazine", "", [""]],
    ["_projectile", objNull, [objNull]]
];
private [];
TRACE_4("fnc_empGrenade", _unit, _ammo, _magazine, _projectile);

if (isNull _unit or isNull _projectile) exitWith {false;};
if (_ammo isEqualTo "" or _magazine isEqualTo "") exitWith {false;};

true;