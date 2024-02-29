#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles bacta grenades
 *
 * Arguments:
 * 0: The unit that threw the grenade <OBJECT>
 * 1: Class name of the ammo type thrown <STRING>
 * 2: Class name of the magazine (grenade) thrown <STRING>
 * 3: Projectile object <OBJECT>
 *
 * Return Value:
 * Whether the area healing was successfully created <BOOL>
 *
 * Examples:
 * [ace_player, "BNA_KC_Grenade_Bacta", "BNA_KC_Grenade_Bacta_Ammo", _projectile] call BNA_KC_weapons_fnc_bactaGrenade;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_ammo", "", [""]],
    ["_magazine", "", [""]],
    ["_projectile", objNull, [objNull]]
];
private ["_duration", "_radius", "_rate", "_maxPatients", "_healerID"];
TRACE_4("fnc_bactaGrenade",_unit,_ammo,_magazine,_projectile);

if (!GVAR(bactaEnabled) or
    {isNull _unit} or
    {isNull _projectile} or
    {_ammo isEqualTo ""} or
    {_magazine isEqualTo ""}
) exitWith {false;};

_duration = [
    configFile >> "CfgMagazines" >> _magazine,
    QGVAR(bactaDuration),
    BACTA_DURATION_DEFAULT
] call BIS_fnc_returnConfigEntry;

_radius = [
    configFile >> "CfgMagazines" >> _magazine,
    QEGVAR(medical,areaHealRadius),
    -1
] call BIS_fnc_returnConfigEntry;

_rate = [
    configFile >> "CfgMagazines" >> _magazine,
    QEGVAR(medical,areaHealRate),
    -1
] call BIS_fnc_returnConfigEntry;

_maxPatients = [
    configFile >> "CfgMagazines" >> _magazine,
    QEGVAR(medical,areaHealMaxPatients),
    0
] call BIS_fnc_returnConfigEntry;

TRACE_5("fnc_bactaGrenade | Heal parameters",_projectile,_radius,_rate,_maxPatients,_duration);

INFO_1("Created area healing for bacta grenade %1",_projectile);
_healerID = [_projectile, _radius, _rate, GVAR(bactaBloodRestoreAmount), GVAR(bactaPainReductionAmount), GVAR(bactaFullHealOnComplete), _maxPatients] call EFUNC(medical,areaSlowHeal);

[{deleteVehicle _this; INFO_1("Deleted bacta grenade %1",_this);}, _projectile, _duration] call CBA_fnc_waitAndExecute;

_healerID > 0;