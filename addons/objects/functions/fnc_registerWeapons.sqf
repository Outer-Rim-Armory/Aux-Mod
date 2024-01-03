#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Assigns a specified loadout to the player
 *
 * Arguments:
 * weapon: String - Name of the weapon to load
 *
 * Return Value:
 * None
 *
 * Example:
 * "Rifleman" call BNAKC_fnc_grabLoadout;
 */

params [
    ["_rebuild", false, [false]]
];
private ["_weapons"];
TRACE_1("fnc_registerWeapons",_rebuild);

_weapons = missionNamespace getVariable [QGVAR(_weapons), createHashmap];
if (count _weapons isNotEqualTo 0 and !_rebuild) exitWith {
    _weapons;
};

_weapons = createHashMapFromArray [
    ["DC15A", [QCLASS(DC15A),
    [
        [QCLASS(Mag_60rnd_DC15A), 10]
    ]]],
    ["DC15S", [QCLASS(DC15S),
    [
        [QCLASS(Mag_80rnd_DC15S), 10]
    ]]],
    ["DC15C", [QCLASS(DC15C),
    [
        [QCLASS(Mag_40rnd_DC15C), 10]
    ]]]
];

missionNamespace setVariable [QGVAR(weapons), _weapons, true];
_weapons;