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
        "Rifleman",                   // Hashmap key
        [                             // Start of values
            "BNA_KC_DC15A",           // Primary Weapon
            "BNA_KC_DC17",            // Secondary Weapon
            "",                       // Tertiary
            "",                       // Binoculars
            "BNA_KC_Vest_Basic",      // Vest
            "BNA_KC_Backpack",        // Backpack
            [                         // Magazines ["Magazine classname", number of mags]
                ["Aux12thFleet_Mag_DC15A", 16],
                ["Aux12thFleet_Mag_DC17", 4],
                ["Aux12thFleet_Mag_StunLong", 3],
                ["Aux12thFleet_Mag_StunShort", 3]
            ],
            [                         // Grenades/Explosives ["Grenade classname", number of nades]
                ["ls_mag_classC_thermalDet", 2],
                ["3AS_SmokeWhite", 2],
                ["3AS_SmokeBlue", 2],
                ["3AS_SmokeGreen", 2],
                ["ShieldGrenade_Mag", 3],
                ["Chemlight_blue", 5]
            ],
            [                         // Items ["Item classname", number of Items]
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
    ],
    [
        "RiflemanAlt",
        [
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "",
            "",
            "BNA_KC_Vest_Basic",
            "BNA_KC_Backpack",
            [
                ["Aux12thFleet_Mag_DC15S", 16],
                ["Aux12thFleet_Mag_DC17", 4],
                ["Aux12thFleet_Mag_StunLong", 3],
                ["Aux12thFleet_Mag_StunShort", 3]
            ],
            [
                ["ls_mag_classC_thermalDet", 2],
                ["3AS_SmokeWhite", 2],
                ["3AS_SmokeBlue", 2],
                ["3AS_SmokeGreen", 2],
                ["ShieldGrenade_Mag", 3],
                ["Chemlight_blue", 5]
            ],
            [
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

_loadoutValues params ["_primary", "_secondary", "_tertiary", "_binos", "_vest", "_backpack", "_magazines", "_grenades", "_items"];

_uniform = uniform player;     // Removes players uniform, vest and backpack then re-equips them to ensure no items are still in player inventory
removeUniform player;
player forceAddUniform _uniform;

removeVest player;
player addVest _vest;

removeBackpack player;
player addBackpack _backpack;

removeAllWeapons player;

{
    player addMagazine (_x #0);            // Adds one of each magazine to players inventory, so that when weapons are added just below they are reloaded and not empty
} forEach _magazines;

player addWeapon _primary;
player addWeapon _secondary;               // Equips weapons and binoculars
player addWeapon _tertiary;
player addWeapon _binos;

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