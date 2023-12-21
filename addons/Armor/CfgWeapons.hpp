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

    class CLASS(Vest_Assault): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 01+ (Assault)";

        model = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",                // Suspenders
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Holster
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Grenadier): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 01+ (Grenadier)";

        model = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",                // Suspenders
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Holster
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
        };
    };

    class CLASS(Vest_Heavy): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 01+ (Heavy)";

        model = "\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Sling and Bag
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            "\SWLB_clones\data\light_accessories_co.paa",                 // Grenades
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
            hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
        };
    };

    class CLASS(Vest_Heavy_v2): CLASS(Vest_Heavy)
    {
        displayName = "[KC] INF Vest 01+ (Heavy, v2)";

        model = "\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavyAlt_vest.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Ammo
            "\SWLB_core\data\common_textures\accessories\light_accessories_co.paa", // Suspenders
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Hip Bag
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Holster
            "\SWLB_core\data\common_textures\equipment\bag_co.paa",                 // Belt Bag
            "\SWLB_core\data\common_textures\accessories\light_accessories_co.paa", // Back Grenade
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)            // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavyAlt_vest.p3d";
            hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
        };
    };

    class CLASS(Vest_Specialist): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 01+ (Specialist)";

        model = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",                // Suspenders
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Holster
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Recon): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest XX (Recon)";

        model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
        hiddenSelections[] = {"camo1", "holster", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            ""                                                            // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
            hiddenSelections[] = {"camo1", "holster", "pauldron"};
        };
    };

    class CLASS(Vest_Recon_Survival): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest XX (Recon Survival)";

        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Chest Strap
            "\SWLB_core\data\common_textures\accessories\light_accessories_co.paa", // Side bags / back containers
            "#(rgb,8,8,3)color(1,0,0,1)",                                           // ! Arm Strap, currently broken
            "#(rgb,8,8,3)color(0,1,0,1)",                                           // ! Holster, currently broken
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Ammo
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)            // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
        };
    };

    class CLASS(Vest_Hazard): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest XX (Hazard)";

        model = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",  // Suspenders
            "\SWLB_clones\data\officer_accessories_co.paa" // Kama
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_CLC): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 04 (CLC)";

        model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
        hiddenSelections[] = {"camo1", "holster", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            QPATHTOF(data\vests\infantry\heavy\CLC_camo1_co.paa)          // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
            hiddenSelections[] = {"camo1", "holster", "pauldron"};
        };
    };

    class CLASS(Vest_CPL): CLASS(Vest_CLC)
    {
        displayName = "[KC] INF Vest 05 (CPL)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            QPATHTOF(data\vests\infantry\heavy\CPL_camo1_co.paa)          // Pauldron
        };
    };

    class CLASS(Vest_CS): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 06 (CS)";
        model = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\CS_camo1_co.paa),       // Pauldron
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama
        };

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_CSS): CLASS(Vest_CS)
    {
        displayName = "[KC] INF Vest 07 (CSS)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\CSS_camo1_co.paa),
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
        };
    };

    class CLASS(Vest_CSFC): CLASS(Vest_CS)
    {
        displayName = "[KC] INF Vest 07 (CSFC)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\CSFC_camo1_co.paa),
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
        };
    };

    class CLASS(Vest_CSM): CLASS(Vest_CS)
    {
        displayName = "[KC] INF Vest 08 (CSM)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\CSM_camo1_co.paa),
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
        };
    };

    class CLASS(Vest_Officer): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF Vest 12+ (Officer)";

        model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama and Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
            hiddenSelections[] = {"camo1"};
            containerClass = "Supply200";

            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.20000001;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.10000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passThrough = 0.10000001;
                };
            };
        };
    };

    class CLASS(Vest_Officer_v2): CLASS(Vest_Officer)
    {
        displayName = "[KC] INF Vest 12+ (Officer, v2)";

        model = "\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa", // Kama and Pauldron
            "\SWLB_clones\data\light_accessories_co.paa"    // Suspenders
        };

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Pauldron): CLASS(Vest_Officer)
    {
        displayName = "[KC] INF Vest XX (Pauldron)";
        model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa" // Pauldron
        };

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
        };
    };

    class CLASS(Vest_WO): CLASS(Vest_Pauldron)
    {
        displayName = "[KC] INF Vest 11 (Warrant Officer)";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa" // TODO: Update to WO texture when merging
        };
    };

    class CLASS(Vest_Kama): CLASS(Vest_Officer)
    {
        displayName = "[KC] INF Vest XX (Kama)";
        model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
        hiddenSelections[] = {"camo1", "rank"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa", // Kama
            ""                                              // Rank
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
            hiddenSelections[] = {"camo1", "rank"};
        };
    };

    class CLASS(Vest_Tactical_Commander): CLASS(Vest_Officer)
    {
        displayName = "[KC] INF Vest XX (Tactical Commander)";
        model = "\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
        hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa",              // Kama
            "\SWLB_clones\data\light_accessories_co.paa",                // Suspenders
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
            hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        };
    };

    class CLASS(Vest_Commander): CLASS(Vest_Officer)
    {
        displayName = "[KC] INF Vest 18+ (Commander)";

        model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
        hiddenSelections[] = {"camo1", "rank"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa", // Kama and Pauldron
            ""                                              // Rank
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
            hiddenSelections[] = {"camo1", "rank"};
        };
    };

    class CLASS(Vest_Commander_v2): CLASS(Vest_Commander)
    {
        displayName = "[KC] INF Vest 18+ (Commander, v2)";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\SWLB_clones\data\rank_co.paa"
        };
    };

    class CLASS(Vest_Medic): CLASS(Vest_Basic)
    {
        displayName = "[KC] INF MED Vest 01 (Medic)";

        model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa), // Heavy Bag / Strap
            "",                                                     // Kama
            "",                                                     // Ammo
            ""                                                      // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
            hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
            containerClass = "Supply250";
        };
    };

    class CLASS(Vest_MedicSenior): CLASS(Vest_Medic)
    {
        displayName = "[KC] INF MED Vest 02 (Senior)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa),
            "",
            "",
            QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa)
        };
    };

    class CLASS(Vest_Medic_v2): CLASS(Vest_Medic)
    {
        displayName = "[KC] INF MED Vest 01 (Medic, v2)";

        model = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa), // Tablet
            QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa), // Chest Strap
            "",                                                        // Ammo
            ""                                                         // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        };
    };

    class CLASS(Vest_MedicSenior_v2): CLASS(Vest_Medic_v2)
    {
        displayName = "[KC] INF MED Vest 02 (Senior, v2)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
            QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
            "",
            ""
        };
    };

    class CLASS(Vest_MedicPlatoon): CLASS(Vest_Medic)
    {
        displayName = "[KC] INF MED Vest 06 (Platoon)";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa),   // Heavy Bag / Strap
            QPATHTOF(data\vests\infantry\officer\Medic_camo1_co.paa), // Kama
            "",                                                       // Ammo
            QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa)    // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";
    };
};