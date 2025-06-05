class CfgPatches
{
    class BNA_KC_Vehicle_Skills
    {
        author = "JRY";
        name = "KC Aux Mod [Beta Test] - Vehicle Skills";
        url = "https://www.armahosts.com/";
        requiredAddons[] =
        {
            "BNA_KC_vehicles_gammoth",
            "3AS_Rebel_Armor_PX10","BNA_KC_vehicles_hermitaur",
            "BNA_KC_vehicles_hydra",
            "3AS_APC_Jug","BNA_KC_vehicles_juggernaut",
            "BNA_KC_vehicles_khezu",
            "BNA_KC_vehicles_reek",
            "3AS_SaberTank", "BNA_KC_vehicles_tx130",
            "Aux501_Patch_grenades_special_trench_shield"
        };
        requiredVersion = 0.1;
        units[] = 
        {
            "BNA_KC_Gammoth_Transport","BNA_KC_Gammoth_Covered","BNA_KC_Gammoth_Medical","BNA_KC_Gammoth_Repair",
            "BNA_KC_Hermitaur_Class_I","BNA_KC_Hermitaur_Class_E","BNA_KC_Hermitaur_Class_M",
            "BNA_KC_Hydra",
            "BNA_KC_Juggernaut",
            "BNA_KC_Khezu_Unarmed",
            "BNA_KC_Khezu_Armed",
            "BNA_KC_Reek",
            "BNA_KC_TX130_M1_Recon"
        };
        weapons[] = 
        {
            "BNA_Assault_Module","BNA_Shield_Module","BNA_Medical_Module","BNA_Repair_Module","BNA_Citadel_Module",
            "BNA_KC_Launcher_Datapad"
        };
    };
};

#include "CfgFunctions.hpp"

class Extended_PreInit_EventHandlers
{
    class BNA_KC_Vehicle_Skills
    {
        init = "call compileScript ['BNA_KC_Vehicle_Skills\functions\skills\scripts\XEH_preInit.sqf']";
    };
};

#include "CfgVehicles.hpp"

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgSFX.hpp"

#include "CfgDisplays.hpp"