class CfgPatches
{
    class BNA_KC_Props_PlaceableHelmets
    {
        addonRootClass= "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
            "BNA_KC_Gear_Armored",
            "BNA_KC_Gear_Aviation",
            "BNA_KC_Gear_SpecialForces",
            "BNA_KC_Gear_Customs"
            // All KC Helmets required
        };
        units[] =
		{
            // Infantry
            // Phase 1
            "BNA_KC_HelmetHolder_P1_CR",
            "BNA_KC_HelmetHolder_P1_CT",
            "BNA_KC_HelmetHolder_P1_CT_v2",
            "BNA_KC_HelmetHolder_P1_CT_v3",
            "BNA_KC_HelmetHolder_P1_CT_v4",
            "BNA_KC_HelmetHolder_P1_SCT",
            "BNA_KC_HelmetHolder_P1_VCT",
            "BNA_KC_HelmetHolder_P1_LCPL",
            "BNA_KC_HelmetHolder_P1_CPL",
            "BNA_KC_HelmetHolder_P1_CS",
            "BNA_KC_HelmetHolder_P1_CSS",
            "BNA_KC_HelmetHolder_P1_CSFC",
            "BNA_KC_HelmetHolder_P1_CMS",
            "BNA_KC_HelmetHolder_P1_CSM",
            // Phase 2
            "BNA_KC_HelmetHolder_P2_CR",
            "BNA_KC_HelmetHolder_P2_CR_Legacy",
            "BNA_KC_HelmetHolder_P2_CT",
            "BNA_KC_HelmetHolder_P2_CT_v2",
            "BNA_KC_HelmetHolder_P2_CT_Legacy",
            "BNA_KC_HelmetHolder_P2_SCT",
            "BNA_KC_HelmetHolder_P2_SCT_Legacy",
            "BNA_KC_HelmetHolder_P2_VCT",
            "BNA_KC_HelmetHolder_P2_VCT_Legacy",
            "BNA_KC_HelmetHolder_P2_LCPL",
            "BNA_KC_HelmetHolder_P2_LCPL_Legacy",
            "BNA_KC_HelmetHolder_P2_CPL",
            "BNA_KC_HelmetHolder_P2_CS",
            "BNA_KC_HelmetHolder_P2_CS_Legacy",
            "BNA_KC_HelmetHolder_P2_CSS",
            "BNA_KC_HelmetHolder_P2_CSFC",
            "BNA_KC_HelmetHolder_P2_CMS",
            "BNA_KC_HelmetHolder_P2_CMS_Legacy",
            "BNA_KC_HelmetHolder_P2_CSM",
            "BNA_KC_HelmetHolder_P2_Officer",
            // Misc.
            "BNA_KC_HelmetHolder_AB",
            "BNA_KC_HelmetHolder_AB_v2",
            "BNA_KC_HelmetHolder_ENG",
            "BNA_KC_HelmetHolder_Insulated",

            // Armored
            "BNA_KC_HelmetHolder_P1_Tanker",
            "BNA_KC_HelmetHolder_P1_Tanker_v2",
            "BNA_KC_HelmetHolder_P2_Tanker",
            "BNA_KC_HelmetHolder_P2_Tanker_v2",

            // Aviation
            "BNA_KC_HelmetHolder_P1_Pilot",
            "BNA_KC_HelmetHolder_P2_Pilot",

            // Special Forces
            "BNA_KC_HelmetHolder_ARC",
            "BNA_KC_HelmetHolder_ARF",
            "BNA_KC_HelmetHolder_BARC",

            // Customs
            // Phase 1
            "BNA_KC_HelmetHolder_P1_Axel",
            "BNA_KC_HelmetHolder_P1_Burnt",
            "BNA_KC_HelmetHolder_P1_Burnt_Bacta",
            "BNA_KC_HelmetHolder_P1_Catholic",
            "BNA_KC_HelmetHolder_P1_Defter",
            "BNA_KC_HelmetHolder_P1_Defter_Bacta",
            "BNA_KC_HelmetHolder_P1_Dexus",
            "BNA_KC_HelmetHolder_P1_Dexus_Bacta",
            "BNA_KC_HelmetHolder_P1_Drake",
            "BNA_KC_HelmetHolder_P1_Drake_Bacta",
            "BNA_KC_HelmetHolder_P1_Grey",
            "BNA_KC_HelmetHolder_P1_Hazard",
            "BNA_KC_HelmetHolder_P1_Jaws",
            "BNA_KC_HelmetHolder_P1_Jester",
            "BNA_KC_HelmetHolder_P1_Joe",
            "BNA_KC_HelmetHolder_P1_Joe_Crimson",
            "BNA_KC_HelmetHolder_P1_Keeli",
            "BNA_KC_HelmetHolder_P1_Keeli_Crimson",
            "BNA_KC_HelmetHolder_P1_Lou",
            "BNA_KC_HelmetHolder_P1_Lou_Plasma",
            "BNA_KC_HelmetHolder_P1_Ox",
            "BNA_KC_HelmetHolder_P1_Patriot",
            "BNA_KC_HelmetHolder_P1_Ponds",
            "BNA_KC_HelmetHolder_P1_Rev",
            "BNA_KC_HelmetHolder_P1_Rodger",
            "BNA_KC_HelmetHolder_P1_Sin",
            "BNA_KC_HelmetHolder_P1_Splashdown",
            "BNA_KC_HelmetHolder_P1_Swoop",
            "BNA_KC_HelmetHolder_P1_Woods",
            // Phase 2
            "BNA_KC_HelmetHolder_P2_Axel",
            "BNA_KC_HelmetHolder_P2_Burnt",
            "BNA_KC_HelmetHolder_P2_Burnt_Bacta",
            "BNA_KC_HelmetHolder_P2_Dexus",
            "BNA_KC_HelmetHolder_P2_Dexus_Bacta",
            "BNA_KC_HelmetHolder_P2_Fil",
            "BNA_KC_HelmetHolder_P2_FilSquad",
            "BNA_KC_HelmetHolder_P2_Grey",
            "BNA_KC_HelmetHolder_P2_Harry",
            "BNA_KC_HelmetHolder_P2_Hazard",
            "BNA_KC_HelmetHolder_P2_Jaws",
            "BNA_KC_HelmetHolder_P2_Jester",
            "BNA_KC_HelmetHolder_P2_Joe",
            "BNA_KC_HelmetHolder_P2_Joe_Crimson",
            "BNA_KC_HelmetHolder_P2_Keeli",
            "BNA_KC_HelmetHolder_P2_Keeli_Crimson",
            "BNA_KC_HelmetHolder_P2_Ox",
            "BNA_KC_HelmetHolder_P2_Patriot",
            "BNA_KC_HelmetHolder_P2_Ponds",
            "BNA_KC_HelmetHolder_P2_Rodger",
            "BNA_KC_HelmetHolder_P2_Splashdown",
            "BNA_KC_HelmetHolder_P2_Stone",
            "BNA_KC_HelmetHolder_P2_Swoop",
            "BNA_KC_HelmetHolder_P2_Taun",
            "BNA_KC_HelmetHolder_P2_Woods",
            // Snow
            "BNA_KC_HelmetHolder_Insulated_Dexus",
            "BNA_KC_HelmetHolder_Insulated_Joe",
            "BNA_KC_HelmetHolder_Insulated_Keeli",
            // Pilot P1
            "BNA_KC_HelmetHolder_P1_Pilot_Bailout",
            "BNA_KC_HelmetHolder_P1_Pilot_Blue",
            "BNA_KC_HelmetHolder_P1_Pilot_Blue_Bacta",
            "BNA_KC_HelmetHolder_P1_Pilot_Mischief",
            // Pilot P2
            "BNA_KC_HelmetHolder_P2_Pilot_Bailout",
            "BNA_KC_HelmetHolder_P2_Pilot_Blue",
            "BNA_KC_HelmetHolder_P2_Pilot_Blue_Bacta",
            "BNA_KC_HelmetHolder_P2_Pilot_Mischief",
            // Armored P1
            "BNA_KC_HelmetHolder_P1_Tanker_Grey",
            // Armored P2
            "BNA_KC_HelmetHolder_P2_Tanker_Catholic",
            "BNA_KC_HelmetHolder_P2_Tanker_Grey",
            // Special Forces
            "BNA_KC_HelmetHolder_ARC_Burnt",
            "BNA_KC_HelmetHolder_ARC_Burnt_Bacta",
            "BNA_KC_HelmetHolder_ARC_Drake",
            "BNA_KC_HelmetHolder_ARC_Drake_Bacta",
            "BNA_KC_HelmetHolder_ARC_Hagrid",
            "BNA_KC_HelmetHolder_ARC_Tyrant",
            "BNA_KC_HelmetHolder_ARF_Patriot",
            "BNA_KC_HelmetHolder_ARF_Sin",
            "BNA_KC_HelmetHolder_BARC_Rat"
		};
        weapons[] = {};
    };
};