class CfgWeapons {
    class ls_gar_phase2_helmet;
    class CLASS(cloneHelmet_base): ls_gar_phase2_helmet {
        SCOPE_PRIVATE;
        author = AUTHOR;

        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class HitpointsProtectionInfo
    {
        class Head
        {
            hitpointName = "HitHead";
            armor = 10;
            passThrough = 0.3;
        };
    };

        class ItemInfo;
    };

    class WM_P3ScoutHelmet;
    class CLASS(Scout_Helmet_base): WM_P3ScoutHelmet {
        SCOPE_PRIVATE;
        author = AUTHOR;

        picture = "\WarMantle\WM_Imperial_Core\data\ui\wm_scouthelmet_ca.paa";

        class HitpointsProtectionInfo
    {
        class Head
        {
            hitpointName = "HitHead";
            armor = 10;
            passThrough = 0.3;
        };
    };

        class ItemInfo;
    };

    #include "configs\Helmets_P1.hpp"
    #include "configs\Helmets_P1_Pilot.hpp"
    #include "configs\Helmets_P1_SpecOp.hpp"
    #include "configs\Helmets_P2.hpp"
    #include "configs\Helmets_P2_Pilot.hpp"
    #include "configs\Helmets_P2_SpecOp.hpp"
    #include "configs\Helmets_P12.hpp"
    #include "configs\Helmets_Sand.hpp"
    #include "configs\Helmets_Airborne.hpp"
    #include "configs\Helmets_Engineer.hpp"
    #include "configs\Helmets_Insulated.hpp"
    #include "configs\Helmets_ARC.hpp"
    #include "configs\Helmets_ARF.hpp"
    #include "configs\Helmets_BARC.hpp"
    #include "configs\Helmets_cloneCommando.hpp"
    #include "configs\Helmets_Scout.hpp"
    #include "configs\Helmets_CFNintyNine.hpp"
    #include "configs\Helmets_ATRT.hpp"

    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform: ls_blueforUniform_base {
        class ItemInfo;
    };
    class CLASS(Uniform_Base): ls_gar_phase2_uniform {
        SCOPE_PUBLIC;

        author = AUTHOR;

        displayName = "[KC] INF Armor (Base)";
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Phase1_Base);
            uniformType = "Neopren";
        };
    };

    class WM_P3Scout;
    class CLASS(Uniform_Scout_Base): WM_P3Scout {
        SCOPE_PUBLIC;

        author = AUTHOR;
        displayName = "[KC] SF Scout Armor (Base)";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Scout_Base);
            uniformType = "Neopren";
        };
    };

    #include "configs\Uniforms.hpp"
    #include "configs\Uniforms_cloneCommando.hpp"
    #include "configs\Uniforms_Jedi.hpp"
    #include "configs\Uniforms_Scout.hpp"

    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(Vest_Basic): SWLB_clone_basic_armor {
        SCOPE_PUBLIC;

        author = AUTHOR;

        displayName = "[KC] INF Vest 01 (Trooper)";

        class ItemInfo: ItemInfo {
            containerClass = "Supply100";
            vestType = "Rebreather";

            class HitpointsProtectionInfo {
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.3;
                };
            };
        };
    };

    #include "configs\Vests_Infantry.hpp"
    #include "configs\Vests_Airborne.hpp"
    #include "configs\Vests_Engineer.hpp"
    #include "configs\Vests_Tanker.hpp"
    #include "configs\Vests_ARC.hpp"
    #include "configs\Vests_cloneCommando.hpp"

    class BNA_KC_Vest_ARF: CLASS(Vest_Basic) {
        displayName = "[KC] SF ARF Vest";

        model = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones\data\light_accessories_co.paa",                 // Suspender
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            "\SWLB_clones\data\officer_accessories_co.paa"                // ! Ammo, currently broken
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3"};
        };
    };

    class CLASS(Vest_ForceRecon): CLASS(Vest_Basic) {
        displayName = "[KC] SF XX Vest (Force Recon)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
        hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            "\SWLB_clones\data\light_accessories_co.paa",                 // Suspender and Holster
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
            hiddenSelections[] = {"camo1", "camo2", "pauldron"};
        };
    };

    class CLASS(Vest_ForceRecon_NCO): CLASS(Vest_ForceRecon) {
        displayName = "[KC] SF XX Vest (Force Recon NCO)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones\data\light_accessories_co.paa",               // Suspender and Holster
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Kama
            "\SWLB_clones\data\light_accessories_co.paa",                // Chest Strap and Pauldron
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)                // Chest Strap and Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
            hiddenSelections[] = {"camo1", "camo2", "camo3", "pauldron"};
        };
    };

    class CLASS(Vest_ForceRecon_Officer): CLASS(Vest_ForceRecon) {
        displayName = "[KC] SF XX Vest (Force Recon Officer)";

        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
        hiddenSelectionsTextures[] = {
            "\SWLB_clones\data\light_accessories_co.paa",
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
        };
    };

    class NVGoggles;
    class CLASS(nvg_base): NVGoggles {
        class ItemInfo;
    };
    class CLASS(cloneNvg_base): CLASS(nvg_base) {
        visionMode[] = {"Normal", "NVG", "TI"};
        class ItemInfo: ItemInfo {
            mass = 10;
        };
    };
    class CLASS(cloneNvg_chip): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone NV/TI Chip";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {};
            uniformModel = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
            modelOff = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
        };
    };

    class CLASS(cloneNvg_phase1_visor): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone P1 NV/TI Visor";

        model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_p1Visor_nvg_on.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa"};
        picture = "\lsd_equipment_bluefor\nvg\gar\_ui\icon_SWLB_clone_nvg_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_p1Visor_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_p1Visor_nvg_off.p3d";
        };
    };

    class CLASS(cloneNvg_phase2_visor): CLASS(cloneNvg_phase1_visor) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone P2 NV/TI Visor";

        model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\visor_camo1_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
        };
    };
    class CLASS(cloneNvg_phase2_visor_v2): CLASS(cloneNvg_phase2_visor) {
        displayName = "[KC] Clone P2 NV/TI Visor (v2)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nvgs\visor_v2_camo1_co.paa)
        };
    };

    class CLASS(cloneNvg_phase1_rangefinder): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone P1 NV/TI Rangefinder";

        model = "\lsd_equipment_bluefor\accessories\gar\lsd_gar_p1Rangefinder_nvg_on.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\lsd_equipment_bluefor\accessories\gar\visor\data\swlb_clone_nvg_co.paa"};
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
        };
    };

    class CLASS(cloneNvg_phase2_rangefinder): CLASS(cloneNvg_phase1_rangefinder) {
        displayName = "[KC] Clone P2 NV/TI Rangefinder";

        model = "\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\rangefinder_camo1_co.paa)};

        class ItemInfo: ItemInfo {
            uniformModel = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
        };
    };

    class CLASS(cloneNvg_phase1_officerVisor): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone P1 NV/TI Officer Visor";

        model = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p1Commander_nvg";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa",
            "\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa",
            ""
        };
        picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_cc_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1", "camo2", "camo3"};
            uniformModel = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p1Commander_nvg";
            modelOff = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p1Commander_nvg";
        };
    };

    class CLASS(cloneNvg_phase2_officerVisor): CLASS(cloneNvg_phase1_officerVisor) {
        displayName = "[KC] Clone P2 NV/TI Officer Visor";

        model = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
        hiddenSelectionsTextures[] = {QPATHTOF(data\nvgs\officer_camo1_co.paa)};

        class ItemInfo: ItemInfo {
            uniformModel = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
            modelOff = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
        };
    };

    class CLASS(cloneNvg_engineerComms): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone NV/TI Engineer Comms";

        model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones\data\SWLB_clone_nvg_co.paa",
            "\SWLB_clones\data\SWLB_clone_nvg_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
            modelOff = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
        };
    };

    class CLASS(cloneNvg_commandoVisor): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone Commando NV/TI Visor";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones_spec\data\helmet_co.paa",
            "\SWLB_clones_spec\data\helmet_co.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        };
    };

    class CLASS(cloneNvg_commandoAntenna): CLASS(cloneNvg_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Clone Commando NV/TI Antenna";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\SWLB_clones_spec\data\helmet_co.paa"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_antenna_ca.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        };
    };
};