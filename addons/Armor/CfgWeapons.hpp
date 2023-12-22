class CfgWeapons
{
    class ls_gar_phase2_helmet;
    class CLASS(Helmet_Base): ls_gar_phase2_helmet
    {
        SCOPE_PRIVATE;
        dlc = QUOTE(PREFIX);
        author = "SweMonkey and DartRuffian";

        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo;
    };

    #include "configs/Helmets_P1.hpp"
    #include "configs/Helmets_P1_Pilot.hpp"
    #include "configs/Helmets_P1_SpecOp.hpp"
    #include "configs/Helmets_P2.hpp"
    #include "configs/Helmets_P2_Pilot.hpp"
    #include "configs/Helmets_P2_SpecOp.hpp"
    #include "configs/Helmets_Airborne.hpp"
    #include "configs/Helmets_Engineer.hpp"
    #include "configs/Helmets_Insulated.hpp"
    #include "configs/Helmets_ARC.hpp"
    #include "configs/Helmets_ARF.hpp"
    #include "configs/Helmets_BARC.hpp"
    #include "configs/Helmets_Commando.hpp"

    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(Uniform_Base): ls_gar_phase2_uniform
    {
        SCOPE_PUBLIC;

        dlc = QUOTE(PREFIX);
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] INF Armor (Base)";
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Phase1_Base);
            uniformType = "Neopren";
        };
    };

    #include "configs/Uniforms.hpp"
    #include "configs/Uniforms_Commando.hpp"
    #include "configs/Uniforms_Jedi.hpp"

    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class CLASS(Vest_Basic): SWLB_clone_basic_armor
    {
        SCOPE_PUBLIC;

        dlc = QUOTE(PREFIX);
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

    #include "configs\Vests_Infantry.hpp"
    #include "configs\Vests_Airborne.hpp"
    #include "configs\Vests_Engineer.hpp"
    #include "configs\Vests_ARC.hpp"

    class BNA_KC_Vest_ARF: CLASS(Vest_Basic)
    {
        displayName = "[KC] SF ARF Vest";

        model = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",                 // Suspender
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            "\SWLB_clones\data\officer_accessories_co.paa"                // ! Ammo, currently broken
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3"};
        };
    };

    class CLASS(Vest_ForceRecon): CLASS(Vest_Basic)
    {
        displayName = "[KC] SF XX Vest (Force Recon)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
        hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            "\SWLB_clones\data\light_accessories_co.paa",                 // Suspender and Holster
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
            hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        };
    };

    class CLASS(Vest_ForceRecon_NCO): CLASS(Vest_ForceRecon)
    {
        displayName = "[KC] SF XX Vest (Force Recon NCO)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",               // Suspender and Holster
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Kama
            "\SWLB_clones\data\light_accessories_co.paa",                // Chest Strap and Pauldron
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)                // Chest Strap and Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        };
    };

    class BNA_KC_Vest_ForceRecon_Officer: BNA_KC_Vest_ForceRecon
    {
        displayName = "[KC] SF XX Vest (Force Recon Officer)";

        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
        };
    };
};