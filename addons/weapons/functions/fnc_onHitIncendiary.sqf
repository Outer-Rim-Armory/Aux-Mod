#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles a unit getting hit with an incendiary round.
 *
 * Arguments:
 * 0: The unit being hit <OBJECT>
 * 1: Ammo class name <STRING>
 * 2: Damage sections <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, "BNA_KC_Bullet_shotgunIncendiary"]BNA_KC_weapons_fnc_onHitIncendiary;
 *
 * Public: No
 */

#define BURN_THRESHOLD 1
#define BURN_THRESHOLD_BURNEMREDUX 4

params ["_unit", "_ammo", "_sections"];
private ["_fireDamage", "_intensity", "_burnEmDamage"];
TRACE_2("fnc_onHitIncendiary",_unit,_ammo);

_fireDamage = getNumber (configFile >> "CfgAmmo" >> _ammo >> QGVAR(fireDamage));

_intensity = linearConversion [0, 20, _fireDamage, 0, 10, true];

if (_intensity > BURN_THRESHOLD) then {
    INFO_2("Setting %1 on fire with %2 intensity",_unit,_intensity);

    if (ADDON_LOADED(WBK_PhoenixTreal_FlamethrowerMOD)) then {
        _fireDamage = _fireDamage + (_unit getVariable [QGVAR(burnEmDamage), 0]);
        _unit setVariable [QGVAR(burnEmDamage), _fireDamage];
        _intensity = linearConversion [0, 20, _fireDamage, 0, 10, true];

        if (_intensity > BURN_THRESHOLD_BURNEMREDUX) then {
            _unit setDamage 1;
            _unit call flame_death_container;
        } else {
            _unit spawn flame_death_particles;
        };
    } else {
        ["ace_fire_burn", [_unit, _intensity]] call CBA_fnc_globalEvent;
    };
};