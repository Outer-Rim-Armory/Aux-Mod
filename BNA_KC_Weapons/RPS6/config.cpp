#include "..\Macros.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CBA_DisposableLaunchers.hpp"


class CfgPatches
{
    class BNA_KC_Weapons_RPS6
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_RPS6",
                // RPS-6
            "ls_weapons",
                // RPS-6
            "cba_disposable"
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_RPS6_Base",
            "BNA_KC_RPS6_Disposable",
            "BNA_KC_RPS6_Loaded",
            "BNA_KC_RPS6_Used",
            "BNA_KC_RPS6_Fried",
            "BNA_KC_RPS7_Base",
            "BNA_KC_RPS7",
            "BNA_KC_RPS7_Fried"
        };
        magazines[] = {};
        ammo[] = {};
    };
};