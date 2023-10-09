// Legacy classes to prevent missions from breaking
class CfgPatches
{
    class BNA_KC_Gear_Weapons
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Gear";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
    class BNA_KC_Vehicles_StaticShips: BNA_KC_Gear_Weapons {};
    class BNA_KC_Vehicles_Aviation: BNA_KC_Gear_Weapons {};
    class BNA_KC_Vehicles_Static: BNA_KC_Gear_Weapons {};
    class BNA_KC_Vehicles_Armored: BNA_KC_Gear_Weapons {};
};