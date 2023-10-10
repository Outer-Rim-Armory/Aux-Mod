/*
 * Author: DartRuffian
 * Gets all attachment options for the player's current weapons and opens a limited ACE arsenal with those items.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_openAttachmentArsenal;
 */


private ["_weapons", "_compatibleItems"];

_weapons = [primaryWeapon ace_player, handgunWeapon ace_player, secondaryWeapon ace_player];
_compatibleItems = [];

{
    private ["_weapon", "_slots"];
    _weapon = _x;
    _slots = ["CowsSlot", "MuzzleSlot", "PointerSlot", "UnderBarrelSlot"];

    {
        _compatibleItems append
        ([
            configFile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> _x,
            "compatibleItems",
            []
        ] call BIS_fnc_returnConfigEntry);
    } forEach _slots;
} forEach _weapons;


[player, _compatibleItems] call ace_arsenal_fnc_addvirtualitems;
[player, player] call ace_arsenal_fnc_openBox;