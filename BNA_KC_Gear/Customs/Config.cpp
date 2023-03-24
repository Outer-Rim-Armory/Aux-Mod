#include "CfgPatches.hpp"

class CfgWeapons
{
    #include "Helmets.hpp"
    #include "Uniforms.hpp"


    // ┌─────────────────┐
    // │     NVGs     │
    // └─────────────────┘
    class BNA_KC_NVG_Visor;
    class BNA_KC_NVG_Officer;

    class BNA_KC_NVG_Visor_Keeli: BNA_KC_NVG_Visor
    {
        displayName = "[KC] Clone P2 NVG Visor ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Customs\Data\NVGs\BNA_KC_NVG_Visor_Keeli.paa"
        };
    };

    class BNA_KC_NVG_Officer_Keeli: BNA_KC_NVG_Officer
    {
        displayName = "[KC] Clone P2 Officer Visor ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Customs\Data\NVGs\BNA_KC_NVG_Officer_Keeli.paa"
        };
    };
};


class CfgVehicles
{
    #include "Units.hpp"


    // ┌───────────────────────┐
    // │     Backpacks     │
    // └───────────────────────┘
    class BNA_KC_Backpack;

    class BNA_KC_Backpack_Keeli: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Customs\Data\Backpacks\BNA_KC_Backpack_Keeli.paa", // Main Texture
            "BNA_KC_Gear\Customs\Data\Backpacks\BNA_KC_Backpack_Keeli.paa", // Cover
            "",                                                             // Heavy
            "",                                                             // Medic
            ""                                                              // RTO
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Customs
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Customs";
    };
};