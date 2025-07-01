#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles bacta grenades.
 *
 * Arguments:
 * 0: Projectile object <OBJECT>
 *
 * Return Value:
 * True if area heal was created, otherwise false <BOOL>
 *
 * Examples:
 * _projectile call BNA_KC_weapons_fnc_bactaGrenade;
 *
 * Public: No
 */

params ["_projectile"];
private ["_duration", "_radius", "_rate", "_maxPatients", "_healerID"];
TRACE_1("fnc_bactaGrenade",_projectile);

if (!GVAR(bactaEnabled) or {isNull _projectile}) exitWith {false;};

_duration = [configOf _projectile,
    QGVAR(bactaDuration),
    BACTA_DURATION_DEFAULT
] call BIS_fnc_returnConfigEntry;

_radius = [configOf _projectile,
    QEGVAR(medical,areaHealRadius),
    -1
] call BIS_fnc_returnConfigEntry;

_rate = [configOf _projectile,
    QEGVAR(medical,areaHealRate),
    -1
] call BIS_fnc_returnConfigEntry;

_maxPatients = getNumber (configOf _projectile >> QEGVAR(medical,areaHealMaxPatients));

TRACE_5("fnc_bactaGrenade | Heal parameters",_projectile,_radius,_rate,_maxPatients,_duration);

INFO_1("Created area healing for bacta grenade %1",_projectile);
_healerID = [_projectile, _radius, _rate, GVAR(bactaBloodRestoreAmount), GVAR(bactaPainReductionAmount), GVAR(bactaFullHealOnComplete), _maxPatients] call EFUNC(medical,areaSlowHeal);

[{deleteVehicle _this; INFO_1("Deleted bacta grenade %1",_this);}, _projectile, _duration] call CBA_fnc_waitAndExecute;

_healerID > 0;
