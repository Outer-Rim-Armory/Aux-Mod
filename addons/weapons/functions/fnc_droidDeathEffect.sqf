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
 *
 * Public: Yes
 */

params [
    ["_units", []],
    ["_killer", objNull, [objNull]]
];
private [];

_units = _units select {
    private _isDroid = getNumber (configFile >> "CfgWeapons" >> uniform _x >> "JLTS_isDroid");
    _isDroid isEqualTo TRUE or (toLowerAnsi typeOf _x find "b1") > 0;
};

TRACE_2("fnc_droidDeathEffect",_units,_killer);

if (count _units isEqualTo 0) exitWith {};

{
    _x setDamage [1, true, _killer];
    playSound3D [
        selectRandom getArray (configFile >> "CfgJLTSDeathSounds" >> "DeathDroid" >> "emp"),
        objNull,
        false,
        getPosASL _x,
        5,
        1,
        75
    ];
} forEach _units;
nil;