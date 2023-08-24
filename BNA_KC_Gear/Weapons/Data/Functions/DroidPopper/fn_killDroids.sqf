/*
 * Author: DartRuffian
 * Given a unit and an array of units, filter out the non-B1 droid units; kill them; and assign the kills to the given unit.
 * Also plays a random sound effect from JLTS's droid death sounds.
 *
 * Arguments:
 * 0: Unit to assign kill credit to <Object>
 * 1: Array of units to kill <Array>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, [unit1, unit2]] call BNAKC_fnc_killDroids;
 */

params ["_killer", "_units"];

_units = _units select { ((toLowerAnsi typeOf _x find "b1") > 0) };
{
    _x setDamage [1, true, _killer];
    playSound3D
    [
        selectRandom getArray (configFile >> "CfgJLTSDeathSounds" >> "DeathDroid" >> "emp"),
        _x
    ];
} forEach _units;