class CfgWeapons {
    #include "configs\Helmets_P1.hpp"
    #include "configs\Helmets_P1_Pilot.hpp"
    #include "configs\Helmets_P1_SpecOp.hpp"
    #include "configs\Helmets_P2.hpp"
    #include "configs\Helmets_P2_Pilot.hpp"
    #include "configs\Helmets_P2_SpecOp.hpp"
    #include "configs\Helmets_P12.hpp"
    #include "configs\Helmets_Insulated.hpp"
    #include "configs\Helmets_Engineer.hpp"
    #include "configs\Helmets_ARC.hpp"
    #include "configs\Helmets_ARF.hpp"
    #include "configs\Helmets_BARC.hpp"

    #include "configs\Uniforms.hpp"

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
        model = "\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Keeli_camo1_co.paa),
            "SWLB_Clones\data\mc_camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
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

    class CLASS(Vest_Kama_Rat): CLASS(Vest_Officer_Rat) {
        displayName = "[KC] INF Vest (Kama, 'Rat')";
        model = "\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Rat_camo1_co.paa),
            "SWLB_Clones\data\mc_camo1_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Wolffe_Vest.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
        };
    };

    class CLASS(Vest_WO);
    class CLASS(Vest_WO_Howzer): CLASS(Vest_WO) {
        displayName = "[KC] INF Vest ('Howzer')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\officer\Howzer_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(NVG_phase2_Officer);
    class CLASS(NVG_phase2_Officer_Keeli): CLASS(NVG_phase2_Officer) {
        displayName = "[KC] Clone P2 Officer Visor ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\nvgs\Officer_Keeli_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };
};