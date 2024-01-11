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


params [["_weaponName", "", [""]]];
private ["_weaponMap", "_weapon", "_magazines"];

if (_weaponName isEqualTo "") exitWith {};

_weaponMap = createHashMapFromArray
[
    [
        "DC15A",
        [
            "BNA_KC_DC15A",
            [
                ["Aux12thFleet_Mag_DC15A", 10]
            ]
        ]
    ],
    [
        "DC15S",
        [
            "BNA_KC_DC15S",
            [
                ["Aux12thFleet_Mag_DC15S", 10]
            ]
        ]
    ],
    [
        "DC15C",
        [
            "BNA_KC_DC15C",
            [
                ["Aux12thFleet_Mag_DC15C", 10]
            ]
        ]
    ]
];

_weaponValues = _weaponMap getOrDefaultCall [_weaponName, {hint format ["Weapon kit '%1' does not exist.", _weaponName];}];
_weaponvalues params ["_weapon", "_magazines"];

{
    for "_i" from 0 to (_x#1) do
    {
        player addMagazine (_x#0);
    };
} forEach _magazines;

player addWeapon _weapon;