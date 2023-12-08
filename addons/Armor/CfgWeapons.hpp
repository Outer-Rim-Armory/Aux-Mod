class CfgWeapons
{
    class ls_gar_phase2_helmet;
    class BNA_KC_Helmet_Base: ls_gar_phase2_helmet
    {
        SCOPE_PRIVATE;
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo;
    };

    class BNA_KC_Helmet_Phase1_Base: BNA_KC_Helmet_Base
    {
        SCOPE_PUBLIC;

        displayName = "[KC] INF P1 Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor", "illum"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor", "illum"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Phase2_Base: BNA_KC_Helmet_Base
    {
        SCOPE_PUBLIC;

        displayName = "[KC] INF P2 Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        };
    };

    #include "configs/Helmets_P1.hpp"
    #include "configs/Helmets_P2.hpp"
    #include "configs/Helmets_Airborne.hpp"
    #include "configs/Helmets_Engineer.hpp"

    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        SCOPE_PUBLIC;

        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] INF Armor (Base)";
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase1_Base";
            uniformType = "Neopren";
        };
    };

    #include "configs/Uniforms.hpp"

    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        SCOPE_PUBLIC;

        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] INF Vest 01 (Trooper)";

        class ItemInfo: ItemInfo
        {
            containerClass = "Supply100";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.3;
                };
            };
        };
    };
};