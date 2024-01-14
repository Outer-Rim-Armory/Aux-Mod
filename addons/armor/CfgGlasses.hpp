class CfgGlasses
{
    class ls_combatGoggles_base;
    class CLASS(Facewear_ARF_Flaps): ls_combatGoggles_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

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

        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
        ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
        ACE_OverlayDirt = "\A3\Ui_f\data\IGUI\RscTitles\HealthTextures\dust_upper_ca.paa";
    };
};