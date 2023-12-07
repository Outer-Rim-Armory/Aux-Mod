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

_loadoutsMap = missionNamespace getVariable ["BNA_KC_Loadouts", []];
if (_loadoutsMap isEqualTo []) then
{
    _loadoutsMap = createHashMapFromArray
    [
        [
            "Rifleman",
            [
                "",                  // Launcher
                "",                  // Binoculars
                "",                  // Vest
                "BNA_KC_Backpack",   // Backpack
                [
                    // Key names from _weaponMap
                    "DC15A",
                    "DC15S"
                ],
                [
                    // Magazines (Grenades)
                    ["ls_mag_classC_thermalDet", 2],
                    ["3AS_SmokeWhite", 2],
                    ["3AS_SmokeBlue", 2],
                    ["3AS_SmokeGreen", 2],
                    ["ShieldGrenade_Mag", 3],
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
        ],
        [
            "Squad Leader",
            [
                "",
                "JLTS_CloneBinocular",
                "",
                "BNA_KC_Backpack",
                [
                    "DC15A",
                    "DC15S",
                    "DC15C"
                ],
                [
                    ["ls_mag_classC_thermalDet", 4],
                    ["3AS_SmokeWhite", 5],
                    ["3AS_SmokeBlue", 3],
                    ["3AS_SmokeGreen", 3],
                    ["3AS_SmokeRed", 3],
                    ["3AS_SmokePurple", 3],
                    ["ShieldGrenade_Mag", 3],
                    ["SquadShieldMagazine", 5],
                    ["Chemlight_blue", 5],
                    ["BNA_KC_Grenade_DroidPopper", 3],
                    ["BNA_KC_UGL_FlareBlue", 3],
                    ["Laserbatteries", 2]
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
                    ["ACE_surgicalKit", 1],
                    ["RD501_Painkiller", 3],
                    ["ItemcTab", 1],
                    ["ItemcTabHCam", 1]
                ]
            ]
        ]
    ];
    missionNamespace setVariable ["BNA_KC_Loadouts", _loadoutsMap, true];
};

// -----------------------------   Assigning Loadout Script    -----------------------------

_loadoutValues = _loadoutsMap getOrDefaultCall [_loadoutName, {hint format ["Loadout '%1' does not exist.", _loadoutName];}];
_loadoutValues params ["_launcher", "_binoculars", "_vest", "_backpack", "_weapons", "_magazines", "_items"];

// Clear inventory
{ player removeItems _x; } forEach items player;
{ player removeMagazines _x; } forEach magazines player;

// Overwrite vest if given
if (_vest != "") then
{
    player addVest _vest;
};

if (_binoculars != "") then
{
    player addWeapon _binoculars;
    player addMagazine "Laserbatteries";
};

removeBackpack player; // Prevents dropping the player's current backpack (if one is equipped)
player addBackpack _backpack;
player addWeapon _launcher;

{
    for "_i" from 1 to (_x#1) do
    {
        player addMagazine (_x#0);
    };
} forEach _magazines;

{
    for "_i" from 1 to (_x#1) do
    {
        player addItem (_x#0);
    };
} forEach _items;