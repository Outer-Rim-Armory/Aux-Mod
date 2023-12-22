#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(Core),
            QCLASS(Armor)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Helmet_Phase1_Axel),
            QCLASS(Helmet_Phase1_Burnt),
            QCLASS(Helmet_Phase1_BurntBacta),
            QCLASS(Helmet_Phase1_Catholic),
            QCLASS(Helmet_Phase1_CatholicKyber),
            QCLASS(Helmet_Phase1_Defter),
            QCLASS(Helmet_Phase1_DefterBacta),
            QCLASS(Helmet_Phase1_Dexus),
            QCLASS(Helmet_Phase1_DexusBacta),
            QCLASS(Helmet_Phase1_Drake),
            QCLASS(Helmet_Phase1_DrakeBacta),
            QCLASS(Helmet_Phase1_Grey),
            QCLASS(Helmet_Phase1_Hazard),
            QCLASS(Helmet_Phase1_Jaws),
            QCLASS(Helmet_Phase1_Jester),
            QCLASS(Helmet_Phase1_Joe),
            QCLASS(Helmet_Phase1_JoeCrimson),
            QCLASS(Helmet_Phase1_Keeli),
            QCLASS(Helmet_Phase1_KeeliCrimson),
            QCLASS(Helmet_Phase1_Lou),
            QCLASS(Helmet_Phase1_LouPlasma),
            QCLASS(Helmet_Phase1_Ox),
            QCLASS(Helmet_Phase1_Patriot),
            QCLASS(Helmet_Phase1_Ponds),
            QCLASS(Helmet_Phase1_Rev),
            QCLASS(Helmet_Phase1_Rodger),
            QCLASS(Helmet_Phase1_Sin),
            QCLASS(Helmet_Phase1_Splashdown),
            QCLASS(Helmet_Phase1_Swoop),
            QCLASS(Helmet_Phase1_Woods),
            QCLASS(Helmet_Phase1_Pilot_Bailout),
            QCLASS(Helmet_Phase1_Pilot_Blue),
            QCLASS(Helmet_Phase1_Pilot_BlueBacta),
            QCLASS(Helmet_Phase1_Pilot_Mischief),
            QCLASS(Helmet_Phase2_Axel),
            QCLASS(Helmet_Phase2_Bob),
            QCLASS(Helmet_Phase2_BobKyber),
            QCLASS(Helmet_Phase2_Burnt),
            QCLASS(Helmet_Phase2_BurntBacta),
            QCLASS(Helmet_Phase2_Dexus),
            QCLASS(Helmet_Phase2_DexusBacta),
            QCLASS(Helmet_Phase2_Evo),
            QCLASS(Helmet_Phase2_Fil),
            QCLASS(Helmet_Phase2_FilSquad),
            QCLASS(Helmet_Phase2_Grey),
            QCLASS(Helmet_Phase2_Harry),
            QCLASS(Helmet_Phase2_Hazard),
            QCLASS(Helmet_Phase2_Jackal),
            QCLASS(Helmet_Phase2_Jaws),
            QCLASS(Helmet_Phase2_Jester),
            QCLASS(Helmet_Phase2_Joe),
            QCLASS(Helmet_Phase2_JoeCrimson),
            QCLASS(Helmet_Phase2_Keeli),
            QCLASS(Helmet_Phase2_KeeliCrimson),
            QCLASS(Helmet_Phase2_Keeli_CamoBrown),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown),
            QCLASS(Helmet_Phase2_Keeli_CamoGrey),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey),
            QCLASS(Helmet_Phase2_Leon),
            QCLASS(Helmet_Phase2_Lou),
            QCLASS(Helmet_Phase2_LouPlasma),
            QCLASS(Helmet_Phase2_Ox),
            QCLASS(Helmet_Phase2_Patriot),
            QCLASS(Helmet_Phase2_Ponds),
            QCLASS(Helmet_Phase2_PondsTrooper),
            QCLASS(Helmet_Phase2_Rev),
            QCLASS(Helmet_Phase2_Rodger),
            QCLASS(Helmet_Phase2_Sage),
            QCLASS(Helmet_Phase2_Scvrpio),
            QCLASS(Helmet_Phase2_Sogi),
            QCLASS(Helmet_Phase2_Splashdown),
            QCLASS(Helmet_Phase2_Star),
            QCLASS(Helmet_Phase2_Stone),
            QCLASS(Helmet_Phase2_Swoop),
            QCLASS(Helmet_Phase2_Sytha),
            QCLASS(Helmet_Phase2_Tugz),
            QCLASS(Helmet_Phase2_Tyrant),
            QCLASS(Helmet_Phase2_TyrantCrimson),
            QCLASS(Helmet_Phase2_Vortex),
            QCLASS(Helmet_Phase2_Woods),
            QCLASS(Helmet_Phase2_Insulated_Dexus),
            QCLASS(Helmet_Phase2_Insulated_Joe),
            QCLASS(Helmet_Phase2_Insulated_Keeli),
            QCLASS(Helmet_ARC_Drake),
            QCLASS(Helmet_ARC_DrakeBacta),
            QCLASS(Helmet_ARC_Hagrid),
            QCLASS(Helmet_ARC_HagridPlasma),
            QCLASS(Helmet_ARC_Tyrant),
            QCLASS(Helmet_ARC_TyrantCrimson),
            QCLASS(Helmet_ARF_Patriot),
            QCLASS(Helmet_ARF_Sin),
            QCLASS(Helmet_ARF_Tugz),
            QCLASS(Helmet_BARC_Rat),
            QCLASS(Helmet_BARC_RatCrimson)
        };
        VERSION_CONFIG;
    };
};