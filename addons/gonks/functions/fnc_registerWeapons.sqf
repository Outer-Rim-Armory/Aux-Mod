#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Registers weapon options to missionNamespace
 *
 * Arguments:
 * 0: Whether to rebuild the weapons hashmap <BOOL>
 *
 * Return Value:
 * All registered weapons <HASHMAP>
 *
 * Example:
 * call BNA_KC_objects_fnc_registerWeapons;
 */

params [
    ["_rebuild", false, [false]]
];
private ["_weapons"];
TRACE_1("fnc_registerWeapons",_rebuild);

_weapons = missionNamespace getVariable [QGVAR(weapons), createHashMap];
if (count _weapons isNotEqualTo 0 and !_rebuild) exitWith {
    _weapons;
};

_weapons = createHashMapFromArray [
    ["DC15A", [QCLASS(DC15A),
    [
        [QCLASS(Mag_60Rnd_DC15A), 10]
    ]]],
    ["DC15S", [QCLASS(DC15S),
    [
        [QCLASS(Mag_80Rnd_DC15S), 10]
    ]]],
    ["DC15C", [QCLASS(DC15C),
    [
        [QCLASS(Mag_40Rnd_DC15C), 10]
    ]]]
];

missionNamespace setVariable [QGVAR(weapons), _weapons, true];
_weapons;