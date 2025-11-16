#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(armor),
            "tgf_helmets",
            "tgf_armour",
            "tgf_undersuit",
            "tgf_backpacks"
        };
        units[] = {
            QCLASS(Arctic_Unit_Base),
            QCLASS(Governor_Arctic),
            QCLASS(Arctic_Clansman),
            QCLASS(Arctic_Medium_Clansman),
            QCLASS(Arctic_Medium_Vet_Clansman),
            QCLASS(Arctic_Heavy_Clansman),
            QCLASS(Arctic_Pilot_Clansman),
            QCLASS(Arctic_JT12),
            QCLASS(Clan_Arctic_JT12),
            QCLASS(Arctic_Heavy_Jetpack)
        };
        weapons[] = {
            QCLASS(Arctic_Helmet_Base),
            QCLASS(Arctic_Helmet),
            QCLASS(Arctic_Helmet_Bacta),
            QCLASS(Arctic_Pilot_Helmet),
            QCLASS(Arctic_Traditional_Helmet),
            QCLASS(Arctic_Heavy_Helmet),
            QCLASS(Arctic_Viper_Helmet),
            QCLASS(Arctic_Viper_Vet_Helmet),
            QCLASS(Arctic_Undersuit),
            QCLASS(Clan_Arctic_Undersuit),
            QCLASS(Arctic_Armour_Base),
            QCLASS(Arctic_Armour),
            QCLASS(Arctic_Light_Armour),
            QCLASS(Arctic_Medium_Armour),
            QCLASS(Arctic_Heavy_Armour),
            QCLASS(Arctic_Recon_Armour),
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWorlds.hpp"
