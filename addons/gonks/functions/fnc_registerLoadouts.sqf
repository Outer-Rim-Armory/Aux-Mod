#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Registers loadouts to missionNamespace
 *
 * Arguments:
 * 0: Whether to rebuild the loadouts hashmap <BOOL>
 *
 * Return Value:
 * All registered loadouts <HASHMAP>
 *
 * Example:
 * call BNA_KC_objects_fnc_registerLoadouts;
 */

params [
    ["_rebuild", false, [false]]
];
private ["_loadouts"];
TRACE_1("fnc_registerLoadouts",_rebuild);

_loadouts = missionNamespace getVariable [QGVAR(loadouts), createHashMap];
if (count _loadouts isNotEqualTo 0 and !_rebuild) exitWith {
    _loadouts;
};

_loadouts = createHashMapFromArray [
    ["Rifleman", [
        "",                     // Launcher
        "",                     // Binoculars
        "",                     // Vest
        QCLASS(Backpack_Invis), // Backpack
        ["DC15A", "DC15S"], [
            // Magazines (Grenades)
            ["ls_mag_classC_thermalDet", 2],
            ["3AS_SmokeWhite", 2],
            ["3AS_SmokeBlue", 2],
            ["3AS_SmokeGreen", 2],
            ["ShieldGrenade_Mag", 3],
            ["Chemlight_blue", 5]
        ], [   // Items
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
    ]],
    ["Squad Leader", [
        "",
        "JLTS_CloneBinocular",
        "",
        QCLASS(Backpack_Invis),
        ["DC15A", "DC15S", "DC15C"], [
            ["ls_mag_classC_thermalDet", 4],
            ["3AS_SmokeWhite", 5],
            ["3AS_SmokeBlue", 3],
            ["3AS_SmokeGreen", 3],
            ["3AS_SmokeRed", 3],
            ["3AS_SmokePurple", 3],
            ["ShieldGrenade_Mag", 3],
            ["SquadShieldMagazine", 5],
            ["Chemlight_blue", 5],
            [QCLASS(Grenade_EMP), 3],
            [QCLASS(Mag_UGL_FlareBlue), 3],
            ["Laserbatteries", 2]
        ], [
            ["ACE_CableTie", 5],
            ["ACE_EntrenchingTool", 1],
            ["ACE_Flashlight_XL50", 1],
            ["ACE_MapTools", 1],
            ["JLTS_ids_gar_army", 1],
            ["ACE_IR_Strobe_Item", 2],
            ["ACE_elasticBandage", 20],
            ["ACE_tourniquet", 4],
            ["ACE_surgicalKit", 1],
            [QEGVAR(medical,Painkiller), 3],
            ["ItemcTab", 1],
            ["ItemcTabHCam", 1]
        ]
    ]]
];

missionNamespace setVariable [QGVAR(loadouts), _loadouts, true];
_loadouts;