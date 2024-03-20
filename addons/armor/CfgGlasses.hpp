class CfgGlasses {
    class ls_combatGoggles_base;
    class CLASS(Facewear_ARF_Flaps): ls_combatGoggles_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] ARF Helmet Flaps";

        model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] =
        {
            "", // Main Helmet
            "\ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa", // Flaps
            "" // Visor
        };
        picture = QPATHTOF(data\ui\Facewear_ARF_Flaps_ca.paa);

        ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
        ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
        ACE_OverlayDirt = "\A3\Ui_f\data\IGUI\RscTitles\HealthTextures\dust_upper_ca.paa";
        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
    };

    class CLASS(Facewear_phase2_Pauldron): CLASS(Facewear_ARF_Flaps) {
        displayName = "[KC] Pauldron";
        model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Pauldron
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
    };
};