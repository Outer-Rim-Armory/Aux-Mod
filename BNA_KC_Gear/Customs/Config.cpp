#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


class CfgWeapons
{
    #include "Helmets.hpp"
    #include "Uniforms.hpp"

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class BNA_KC_Vest_Basic;
    class BNA_KC_Vest_Officer: BNA_KC_Vest_Basic
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_Officer_Keeli: BNA_KC_Vest_Officer
    {
        displayName = "[KC] INF Vest 12+ ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Customs\Data\Textures\Vests\Vest_Officer_Keeli.paa"
        };

        BNA_KC_isCustom = 1;
    };
    class BNA_KC_Vest_Officer_Ponds: BNA_KC_Vest_Officer
    {
        displayName = "[KC] INF Vest 12+ ('Ponds')";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Customs\Data\Textures\Vests\Vest_Officer_Ponds.paa"
        };

        class ItemInfo: ItemInfo
        {
            containerClass = "Supply250"; // To match medic vests
        };

        BNA_KC_isCustom = 1;
    };
    class BNA_KC_Vest_Officer_Rat: BNA_KC_Vest_Officer
    {
        displayName = "[KC] INF Vest 12+ ('Rat')";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Customs\Data\Textures\Vests\Vest_Officer_Rat.paa"
        };

        BNA_KC_isCustom = 1;
    };


    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class BNA_KC_NVG_Officer;
    class BNA_KC_NVG_Officer_Keeli: BNA_KC_NVG_Officer
    {
        displayName = "[KC] Clone P2 Officer Visor ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Customs\Data\Textures\NVGs\NVG_Officer_Keeli.paa"
        };

        BNA_KC_isCustom = 1;
    };
};


class CfgVehicles
{
    #include "Units.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_Backpack;

    class BNA_KC_Backpack_Keeli: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Customs\Data\Textures\Backpacks\Backpack_Keeli.paa", // Main Texture
            "\BNA_KC_Gear\Customs\Data\Textures\Backpacks\Backpack_Keeli.paa", // Cover
            "",                                                                // Heavy
            "",                                                                // Medic
            ""                                                                 // RTO
        };

        BNA_KC_isCustom = 1;
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Customs
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Customs";
    };
};