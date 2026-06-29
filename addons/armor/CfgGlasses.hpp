#define OVERLAY_P1 ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_ca.paa"; \
ACE_OverlayCracked = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_dirty_ca.paa"

#define OVERLAY_P2 ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa"; \
ACE_OverlayCracked = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_dirty_ca.paa"

#define OVERLAY_BLANK ACE_Overlay = ""; \
ACE_OverlayCracked = ""; \
ACE_OverlayDirt = ""

class CfgGlasses {
    class ls_combatGlasses_base;
    class CLASS(Facewear_ARF_Flaps): ls_combatGlasses_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] ARF Helmet Flaps";

        model = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] = {
            "", // Main Helmet
            "\ls\core\addons\characters_clone_legacy\helmets\arf\data\camo2_co.paa", // Flaps
            "" // Visor
        };
        picture = QPATHTOF(data\ui\Facewear_ARF_Flaps_ca.paa);
        OVERLAY_P2;
    };

    class CLASS(Facewear_phase1_Pauldron): CLASS(Facewear_ARF_Flaps) {
        displayName = "[KC] Pauldron (P1)";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_lieutenant_vest.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Pauldron
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";
        OVERLAY_P1;
    };

    class CLASS(Facewear_phase2_Pauldron): CLASS(Facewear_phase1_Pauldron) {
        displayName = "[KC] Pauldron (P2)";
        OVERLAY_P2;
    };

    class CLASS(Facewear_phase1_Pauldron_Empire): CLASS(Facewear_ARF_Flaps) {
        displayName = "[KC] Pauldron (P1, Empire)";
        model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_lieutenant_vest.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\infantry\officer\Imperial_camo1_co.paa) // Pauldron
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";
        OVERLAY_P1;
    };

    class CLASS(Facewear_phase2_Pauldron_Empire): CLASS(Facewear_phase1_Pauldron_Empire) {
        displayName = "[KC] Pauldron (P2, Empire)";
        OVERLAY_P2;
    };

    class CLASS(Facewear_Poncho_Crocea): CLASS(Facewear_ARF_Flaps) {
        SCOPE_HIDDEN;
        displayName = "[KC] Poncho ('Crocea')";
        model = "\ls\core\addons\characters\vests\poncho\ls_vest_poncho.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\poncho\Crocea_Poncho_co.paa)};
    };

    class CLASS(Facewear_Poncho_KC): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Poncho";
        model = "\ls\core\addons\characters\vests\poncho\ls_vest_poncho.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\poncho\KC_Poncho_co.paa)};
        OVERLAY_BLANK;
    };

    class CLASS(Facewear_Poncho_Brown): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Poncho ('Brown Camo')";
        model = "\ls\core\addons\characters\vests\poncho\ls_vest_poncho.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\poncho\Brown_Poncho_co.paa)};
        OVERLAY_BLANK;
    };

    class CLASS(Facewear_Poncho_Gray): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Poncho ('Gray Camo')";
        model = "\ls\core\addons\characters\vests\poncho\ls_vest_poncho.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\poncho\Gray_Poncho_co.paa)};
        OVERLAY_BLANK;
    };

    class CLASS(Facewear_Hood_KC): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Hood";
        model = "\ls\core\addons\characters\equipment\hood\ls_glasses_hood.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\KC_Scarf_co.paa),
            QPATHTOF(data\hood\KC_Hood_co.paa)
        };
        OVERLAY_BLANK;
    };
    class CLASS(Facewear_Hood_Brown): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Hood ('Brown Camo')";
        model = "\ls\core\addons\characters\equipment\hood\ls_glasses_hood.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\Brown_Scarf_co.paa),
            QPATHTOF(data\hood\Brown_Hood_co.paa)
        };
        OVERLAY_BLANK;
    };
    class CLASS(Facewear_Hood_Gray): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Hood ('Gray Camo')";
        model = "\ls\core\addons\characters\equipment\hood\ls_glasses_hood.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\Gray_Scarf_co.paa),
            QPATHTOF(data\hood\Gray_Hood_co.paa)
        };
        OVERLAY_BLANK;
    };

    class CLASS(Facewear_Scarf_KC): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Scarf";
        model = "\ls\core\addons\characters\equipment\scarf\ls_glasses_scarf.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\KC_Scarf_co.paa)
        };
        OVERLAY_BLANK;
    };
    class CLASS(Facewear_Scarf_Brown): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Scarf ('Brown Camo')";
        model = "\ls\core\addons\characters\equipment\scarf\ls_glasses_scarf.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\Brown_Scarf_co.paa)
        };
        OVERLAY_BLANK;
    };
    class CLASS(Facewear_Scarf_Gray): CLASS(Facewear_ARF_Flaps) {
        SCOPE_PUBLIC;
        displayName = "[KC] Scarf ('Gray Camo')";
        model = "\ls\core\addons\characters\equipment\scarf\ls_glasses_scarf.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scarf\Gray_Scarf_co.paa)
        };
        OVERLAY_BLANK;
    };
};
