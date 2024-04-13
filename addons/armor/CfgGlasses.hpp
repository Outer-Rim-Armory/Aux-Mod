#define OVERLAY_P1 ACE_Overlay = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p1_hud_ca.paa"; \
ACE_OverlayCracked = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p1_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p1_hud_dirty_ca.paa"

#define OVERLAY_P2 ACE_Overlay = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p2_hud_ca.paa"; \
ACE_OverlayCracked = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p2_hud_cracked_ca.paa"; \
ACE_OverlayDirt = "\lsd_equipment_bluefor\accessories\gar\interiorHud\data\p2_hud_dirty_ca.paa"

class CfgGlasses {
    class ls_combatGoggles_base;
    class CLASS(Facewear_ARF_Flaps): ls_combatGoggles_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] ARF Helmet Flaps";

        model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] = {
            "", // Main Helmet
            "\ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa", // Flaps
            "" // Visor
        };
        picture = QPATHTOF(data\ui\Facewear_ARF_Flaps_ca.paa);
        OVERLAY_P2;
    };

    class CLASS(Facewear_phase1_Pauldron): CLASS(Facewear_ARF_Flaps) {
        displayName = "[KC] Pauldron (P1)";
        model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
        OVERLAY_P1;
    };

    class CLASS(Facewear_phase2_Pauldron): CLASS(Facewear_phase1_Pauldron) {
        displayName = "[KC] Pauldron (P2)";
        OVERLAY_P2;
    };
};