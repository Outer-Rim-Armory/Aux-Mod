#define OVERLAY_P1 ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_ca.paa"; \
ACE_OverlayCracked = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p1_hud_dirty_ca.paa"

#define OVERLAY_P2 ACE_Overlay = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_ca.paa"; \
ACE_OverlayCracked = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\ls\core\addons\characters_clone\equipment\interiorHud\data\p2_hud_dirty_ca.paa"

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
};
