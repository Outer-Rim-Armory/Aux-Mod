#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when a unit is hit.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HitPart
 *
 * Return Value:
 * None
 *
 * Examples:
 * hitPart = "_this call BNA_KC_weapons_fnc_onHit";
 *
 * Public: No
 */

(_this select 0) params ["_target", "_shooter", "_projectile", "", "", "", "_ammo"];
private ["_ammoType"];
TRACE_4("fnc_onHit",_target,_shooter,_projectile,_ammo);

_ammo = _ammo select 4;

_ammoType = getNumber (configFile >> "CfgAmmo" >> _ammo >> QGVAR(ammoType));

switch (_ammoType) do {
    case AMMO_TYPE_INCENDIARY: {
        [_target, _ammo, _this] call FUNC(onHitIncendiary);
    };
};