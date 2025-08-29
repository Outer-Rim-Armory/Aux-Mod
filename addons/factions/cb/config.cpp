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
            QCLASS(Bel_Unit_Base),
            QCLASS(Officer_Mommy),
            QCLASS(Bel_Clansman),
            QCLASS(Bel_Vet_Clansman),
            QCLASS(Bel_Medium_Clansman),
            QCLASS(Bel_Medium_Vet_Clansman),
            QCLASS(Bel_Heavy_Clansman),
            QCLASS(Bel_Pilot_Clansman),
            QCLASS(Clan_Bel_JT12),
            QCLASS(Bel_Heavy_Jetpack)
        };
        weapons[] = {
            QCLASS(Bel_Helmet_Base),
            QCLASS(Mommy_Helmet),
            QCLASS(Mommy_Helmet_Lust),
            QCLASS(Bel_Helmet),
            QCLASS(Bel_Helmet_Bacta),
            QCLASS(Bel_Pilot_Helmet),
            QCLASS(Bel_Traditional_Helmet),
            QCLASS(Bel_Veteran_Helmet),
            QCLASS(Bel_Heavy_Helmet),
            QCLASS(Bel_Viper_Helmet),
            QCLASS(Bel_Viper_Vet_Helmet),
            QCLASS(Bel_Undersuit),
            QCLASS(Clan_Bel_Undersuit),
            QCLASS(Bel_Armour_Base),
            QCLASS(Mommy_Armour),
            QCLASS(Bel_Armour),
            QCLASS(Bel_Light_Armour),
            QCLASS(Bel_Medium_Armour),
            QCLASS(Bel_Heavy_Armour),
            QCLASS(Bel_Recon_Armour),
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWorlds.hpp"
