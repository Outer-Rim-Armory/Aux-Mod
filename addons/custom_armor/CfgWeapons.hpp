class CfgWeapons {
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
    #include "configs\Helmets_CFNintyNine.hpp"
    #include "configs\Helmets_Commando.hpp"

    #include "configs\Uniforms.hpp"
    #include "configs\Uniforms_Commando.hpp"

    class CLASS(Vest_Commander);
    class CLASS(Vest_Commander_Keeli): CLASS(Vest_Commander) {
        displayName = "[KC] INF Vest ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_camo1_co.paa),
            ""
        };

        GVAR(isCustom) = TRUE;
        class ItemInfo;
    };

    class CLASS(Vest_Kama_Keeli): CLASS(Vest_Commander_Keeli) {
        displayName = "[KC] INF Vest (Kama, 'Keeli')";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\uniforms\marshalCommander\data\camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Kama_Keeli_Worn): CLASS(Vest_Commander_Keeli) {
        displayName = "[KC] INF Vest (Kama, 'Keeli') (Worn)";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_Worn_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\uniforms\marshalCommander\data\camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Commander_Keeli_Worn): CLASS(Vest_Commander_Keeli) {
        displayName = "[KC] INF Vest ('Keeli') ('Worn')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_Worn_camo1_co.paa),
            ""
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(Vest_Kama_Keeli_Emp): CLASS(Vest_Commander_Keeli) {
        displayName = "[KC] INF Vest (Kama, 'Keeli') ('Empire')";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_Empire_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\uniforms\marshalCommander\data\camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Commander_Keeli_Emp): CLASS(Vest_Commander_Keeli) {
        displayName = "[KC] INF Vest ('Keeli') ('Empire')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_Empire_camo1_co.paa),
            ""
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Basic);
    class CLASS(Vest_Officer): CLASS(Vest_Basic) {
        class ItemInfo;
    };
    class CLASS(Vest_Officer_Ponds): CLASS(Vest_Officer) {
        displayName = "[KC] INF Vest ('Ponds')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Ponds_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;

        class ItemInfo: ItemInfo {
            containerClass = "Supply250"; // To match medic vests
        };
    };

    class CLASS(Vest_Officer_Rat): CLASS(Vest_Officer) {
        displayName = "[KC] INF Vest ('Rat')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Rat_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Officer_Bean): CLASS(Vest_Officer) {
        displayName = "[KC] INF Vest ('Bean')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Bean_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Kama_Rat): CLASS(Vest_Officer_Rat) {
        displayName = "[KC] INF Vest (Kama, 'Rat')";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Rat_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\uniforms\marshalCommander\data\camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_Kama_Drake): CLASS(Vest_Officer) {
        displayName = "[KC] INF Vest (Kama, 'Drake')";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Drake_camo1_co.paa),
            QPATHTOF(data\vests\officer\Drake_camo2_co.paa),
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };
    //class CLASS(Vest_Kama_Drake_Emp): CLASS(Vest_Officer) {
    //    displayName = "[KC] INF Vest (Kama, 'Drake') ('Empire')";
    //    model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
    //    hiddenSelections[] = {"camo1", "camo2"};
    //    hiddenSelectionsTextures[] = {
    //        QPATHTOF(data\vests\officer\Drake_Empire_camo1_co.paa),
    //        QPATHTOF(data\vests\officer\Drake_Empire_camo2_co.paa),
    //    };

    //    class ItemInfo: ItemInfo {
    //        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kamaAntenna_vest.p3d";
    //        hiddenSelections[] = {"camo1", "camo2"};
    //    };
    //};

    class CLASS(Vest_WO);
    class CLASS(Vest_WO_Howzer): CLASS(Vest_WO) {
        displayName = "[KC] INF Vest ('Howzer')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Howzer_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Heavy);
    class CLASS(cloneVest_heavy_Dexus): CLASS(Vest_Heavy) {
        displayName = "[KC] INF Heavy Vest ('Dexus')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\heavy\Dexus_accessories_co.paa),
            QPATHTOF(data\vests\heavy\Dexus_accessories_co.paa),
            QPATHTOF(data\vests\heavy\Dexus_accessories_co.paa),
            "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",
            ""
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_ARC);
    class CLASS(cloneVest_arc_Tyrant): CLASS(Vest_ARC) {
        displayName = "[KC] SF ARC Vest ('Tyrant')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\tyrant\camo1_co.paa),
            QPATHTOF(data\vests\tyrant\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneVest_arc_Sin): CLASS(Vest_ARC) {
        displayName = "[KC] SF ARC Vest ('Sin')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\sin\camo1_co.paa),
            QPATHTOF(data\vests\sin\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneVest_arc_Harry): CLASS(Vest_ARC) {
        displayName = "[KC] SF ARC Vest ('Harry')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\harry\camo1_co.paa),
            QPATHTOF(data\vests\harry\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneVest_arc_Hagrid): CLASS(Vest_ARC) {
        displayName = "[KC] SF ARC Vest ('Hagrid')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\hagrid\camo1_co.paa),
            QPATHTOF(data\vests\hagrid\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneVest_arc_Cough): CLASS(Vest_ARC) {
        displayName = "[KC] SF ARC Vest ('Cough')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\cough\camo1_co.paa),
            QPATHTOF(data\vests\cough\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneNvg_phase2_officerVisor);
    class CLASS(cloneNvg_phase2_officerVisor_Keeli): CLASS(cloneNvg_phase2_officerVisor) {
        displayName = "[KC] Clone P2 NV/TI Officer Visor ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nvgs\Officer_Keeli_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneNvg_phase2_officerVisor_Keeli_Worn): CLASS(cloneNvg_phase2_officerVisor_Keeli) {
        displayName = "[KC] Clone P2 NV/TI Officer Visor ('Keeli') ('Worn')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nvgs\Officer_Keeli_Worn_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
    class CLASS(cloneNvg_phase2_officerVisor_Keeli_Emp): CLASS(cloneNvg_phase2_officerVisor_Keeli) {
        displayName = "[KC] Clone P2 NV/TI Officer Visor ('Keeli') ('Empire')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nvgs\Officer_Keeli_Empire_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

class CLASS(Vest_CS) ;
class CLASS(Vest_Jaws): CLASS(Vest_CS) {
    displayName = "[KC] INF Vest (Jaws)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\jaws\camo1_co.paa),       // Pauldron
        QPATHTOF(data\vests\jaws\camo2_co.paa) // Kama
    };


        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_ForceRecon_Officer) ;
    class CLASS(Force_Recon_Sin): CLASS(Vest_ForceRecon_Officer) {
        displayName = "[KC] SF XX Vest ('Sin')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\sin\light_accessories_co.paa),
            QPATHTOF(data\vests\sin\camo2_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Tanker_CS);
    class CLASS(Vest_Grey): CLASS(Vest_Tanker_CS){
        displayName = "[KC] ARMR Vest ('Grey')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\grey\Grey_chestplate.paa),
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
            QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Pauldron
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(cloneCommando_SL_vest);
    class CLASS(cloneCommando_EOD_vest);
    class CLASS(cloneCommando_Tech_vest);
    class CLASS(Tugz_RC_Vest): CLASS(cloneCommando_SL_vest) {
        displayName = "[KC] SF Clone Commando SL Pauldron ('Tugz')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\tugz\Tugz_Pauldron_Shoulder sl_co.paa)
        };
    };
    class CLASS(Jaws_RC_Vest): CLASS(cloneCommando_EOD_vest) {
        displayName = "[KC] SF Clone Commando EOD Vest ('Jaws')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\jaws\Jaws_EOD_co.paa)
        };
    };
    class CLASS(Cutthroat_RC_Vest): CLASS(cloneCommando_Tech_vest) {
        displayName = "[KC] SF Commando Tech Vest ('Cutthroat')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\commando\Cutthroat_lower_co.paa)
        };
    };
};
