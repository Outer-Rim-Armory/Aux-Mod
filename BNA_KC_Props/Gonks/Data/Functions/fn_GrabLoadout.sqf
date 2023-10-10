/*
 * Author: SweMonkey, modified by DartRuffian
 * Assigns a specified loadout to the player
 *
 * Arguments:
 * loadoutName: String - Name of the loadout to grab ("Rifleman", "Medic", etc.)
 *
 * Return Value:
 * None
 *
 * Example:
 * "Rifleman" call BNAKC_fnc_grabLoadout;
 */


params [["_loadoutName", "", [""]]];
private ["_loadoutsMap", "_loadoutValues", "_uniform", "_vest", "_backpack"];

if (_loadoutName isEqualTo "") exitWith {};

_loadoutsMap = createHashMapFromArray
[
    [
        "Rifleman",
        [
            "",                  // Launcher
            "",                  // Binoculars
            "BNA_KC_Vest_Basic", // Vest
            "BNA_KC_Backpack",   // Backpack
            [
                // Key names from _weaponMap
                "DC15A",
                "DC15S"
            ],
            [
                // Magazines (Grenades)
                ["ls_mag_classC_thermalDet", 2]
                ["3AS_SmokeWhite", 2]
                ["3AS_SmokeBlue", 2]
                ["3AS_SmokeGreen", 2]
                ["ShieldGrenade_Mag", 3]
                ["Chemlight_blue", 5]
            ],
            [   // Items
                ["ACE_CableTie", 5],
                ["ACE_EntrenchingTool", 1],
                ["ACE_Flashlight_XL50", 1],
                ["ACE_MapTools", 1],
                ["JLTS_ids_gar_army", 1],
                ["ACE_IR_Strobe_Item", 2],
                ["ACE_elasticBandage", 20],
                ["ACE_tourniquet", 4],
                ["ItemcTabHCam", 1]
            ]
        ]
    ]
];

// -----------------------------   Assigning Loadout Script    -----------------------------

_loadoutValues = _loadoutsMap getOrDefaultCall [_loadoutName, {hint format ["Loadout '%1' does not exist.", _loadoutName];}];      // Grabs loadout from array above
//systemChat(format["%1", _loadoutValues]);

_loadoutValues params ["_launcher", "_binoculars", "_vest", "_backpack", "_weapons", "_magazines", "_items"];

_uniform = uniform player;     // Removes players uniform, vest and backpack then re-equips them to ensure no items are still in player inventory
removeUniform player;
player forceAddUniform _uniform;

removeVest player;
player addVest _vest;

removeBackpack player;
player addBackpack _backpack;

removeAllWeapons player;

player addWeapon _launcher;
player addWeapon _binoculars;

{
    for "_i" from 1 to ((_x #1) - 1) do    // Adds rest of magazines, the items and the grenades
    {
        player addMagazine (_x #0);
    };
} forEach _magazines;

{
    for "_i" from 1 to (_x #1) do
    {
        player addMagazine (_x #0);
    };
} forEach _grenades;

{
    for "_i" from 1 to (_x #1) do
    {
        player addItem (_x #0);
    };
} forEach _items;