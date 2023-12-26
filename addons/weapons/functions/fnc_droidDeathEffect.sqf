#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * An array of units is filtered to remove non-droid units, which are then killed and plays a death sound effect.
 *
 * Arguments:
 * 0: Array of units to potentially kill <ARRAY>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [unit1, unit2] call BNA_KC_weapons_fnc_droidDeath;
 */

params [
    ["_units", []],
	["_killer", objNull, [objNull]]
];
private [];
TRACE_2("fnc_droidDeathEffect", _units, _killer);

if (count _units isEqualTo 0) exitWith {};

_units = _units select {
    private _isDroid = [
        configFile >> "CfgWeapons" >> uniform _x,
        QGVARMAIN(isDroidArmor),
        FALSE
    ] call BIS_fnc_returnConfigEntry;
    _isDroid isEqualTo TRUE or (toLowerAnsi typeOf _x find "b1") > 0;
};

{
    _x setDamage [1, true, _killer];
    playSound3D [
        selectRandom getArray (configFile >> "CfgJLTSDeathSounds" >> "DeathDroid" >> "emp"),
        _x
    ];
} forEach _units;