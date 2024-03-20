class CfgVehicles {
    class CLASS(CIS_Unit_Droid_Base);
    class CLASS(CIS_Unit_Droid_B2): CLASS(CIS_Unit_Droid_Base) {
        weapons[] = {"WBK_B2_NormalMod"};
        respawnWeapons[] = {"WBK_B2_NormalMod"};
        magazines[] = {ITEM_10("SWLW_ZH73_Mag")};
        respawnMagazines[] = {ITEM_10("SWLW_ZH73_Mag")};
    };
};