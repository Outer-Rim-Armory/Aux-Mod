class CfgPatches
{
    class BNA_KC_Gear_Customs
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
            "BNA_KC_Gear_Infantry",
            "BNA_KC_Gear_Airborne",
            "BNA_KC_Gear_Engineers",
            "BNA_KC_Gear_Armored",
            "BNA_KC_Gear_Aviation",
            "BNA_KC_Gear_Commandos",
            "BNA_KC_Gear_SpecialForces",
            "BNA_KC_Gear_Jedi"
        };
        units[] =
        {
            // Standard Units
            "BNA_KC_Unit_Axel",
            "BNA_KC_Unit_Burnt",
            "BNA_KC_Unit_Dexus",
            "BNA_KC_Unit_Drake",
            "BNA_KC_Unit_Fil",
            "BNA_KC_Unit_FilSquad",
            "BNA_KC_Unit_Joe",
            "BNA_KC_Unit_Keeli",
            "BNA_KC_Unit_Ponds",
            "BNA_KC_Unit_PondsTrooper",
            "BNA_KC_Unit_Rat",
            "BNA_KC_Unit_Sin",
            "BNA_KC_Unit_Stone",
            "BNA_KC_Unit_Tyrant",

            // Insulated Units
            "BNA_KC_Unit_Insulated_Dexus",
            "BNA_KC_Unit_Insulated_Joe",
            "BNA_KC_Unit_Insulated_Keeli",

            // Backpacks
            "BNA_KC_Backpack_Keeli"
        };
        weapons[] =
        {
            // Phase 1 Helmets
            "BNA_KC_Helmet_Phase1_Axel",
            "BNA_KC_Helmet_Phase1_Burnt",
            "BNA_KC_Helmet_Phase1_Burnt_Bacta",
            "BNA_KC_Helmet_Phase1_Catholic",
            "BNA_KC_Helmet_Phase1_Catholic_Kyber",
            "BNA_KC_Helmet_Phase1_Defter",
            "BNA_KC_Helmet_Phase1_Defter_Bacta",
            "BNA_KC_Helmet_Phase1_Dexus",
            "BNA_KC_Helmet_Phase1_Dexus_Bacta",
            "BNA_KC_Helmet_Phase1_Drake",
            "BNA_KC_Helmet_Phase1_Drake_Bacta",
            "BNA_KC_Helmet_Phase1_Fil",
            "BNA_KC_Helmet_Phase1_Grey",
            "BNA_KC_Helmet_Phase1_Hazard",
            "BNA_KC_Helmet_Phase1_Howzer_Blue",
            "BNA_KC_Helmet_Phase1_Howzer_Brown",
            "BNA_KC_Helmet_Phase1_Jaws",
            "BNA_KC_Helmet_Phase1_Jester",
            "BNA_KC_Helmet_Phase1_Joe",
            "BNA_KC_Helmet_Phase1_Joe_Crimson",
            "BNA_KC_Helmet_Phase1_Keeli",
            "BNA_KC_Helmet_Phase1_Keeli_Crimson",
            "BNA_KC_Helmet_Phase1_Lou",
            "BNA_KC_Helmet_Phase1_Lou_Plasma",
            "BNA_KC_Helmet_Phase1_Ox",
            "BNA_KC_Helmet_Phase1_Patriot",
            "BNA_KC_Helmet_Phase1_Ponds",
            "BNA_KC_Helmet_Phase1_Rev",
            "BNA_KC_Helmet_Phase1_Rodger",
            "BNA_KC_Helmet_Phase1_Sin",
            "BNA_KC_Helmet_Phase1_Splashdown",
            "BNA_KC_Helmet_Phase1_Swoop",
            "BNA_KC_Helmet_Phase1_Woods",

            // Phase 2 Helmets
            "BNA_KC_Helmet_Phase2_Axel",
            "BNA_KC_Helmet_Phase2_Bob",
            "BNA_KC_Helmet_Phase2_Bob_Kyber",
            "BNA_KC_Helmet_Phase2_Burnt",
            "BNA_KC_Helmet_Phase2_Burnt_Bacta",
            "BNA_KC_Helmet_Phase2_Dexus",
            "BNA_KC_Helmet_Phase2_Dexus_Bacta",
            "BNA_KC_Helmet_Phase2_Evo",
            "BNA_KC_Helmet_Phase2_Fil",
            "BNA_KC_Helmet_Phase2_FilSquad",
            "BNA_KC_Helmet_Phase2_Grey",
            "BNA_KC_Helmet_Phase2_Harry",
            "BNA_KC_Helmet_Phase2_Hazard",
            "BNA_KC_Helmet_Phase2_Howzer_Blue",
            "BNA_KC_Helmet_Phase2_Howzer_Brown",
            "BNA_KC_Helmet_Phase2_Jackal",
            "BNA_KC_Helmet_Phase2_Jaws",
            "BNA_KC_Helmet_Phase2_Jester",
            "BNA_KC_Helmet_Phase2_Joe",
            "BNA_KC_Helmet_Phase2_Joe_Crimson",
            "BNA_KC_Helmet_Phase2_Keeli",
            "BNA_KC_Helmet_Phase2_Keeli_Crimson",
            "BNA_KC_Helmet_Phase2_Lou",
            "BNA_KC_Helmet_Phase2_Lou_Plasma",
            "BNA_KC_Helmet_Phase2_Leon",
            "BNA_KC_Helmet_Phase2_Ox",
            "BNA_KC_Helmet_Phase2_Patriot",
            "BNA_KC_Helmet_Phase2_Ponds",
            "BNA_KC_Helmet_Phase2_PondsTrooper",
            "BNA_KC_Helmet_Phase2_Rev",
            "BNA_KC_Helmet_Phase2_Rodger",
            "BNA_KC_Helmet_Phase2_Sage",
            "BNA_KC_Helmet_Phase2_Scvrpio",
            "BNA_KC_Helmet_Phase2_Sogi",
            "BNA_KC_Helmet_Phase2_Splashdown",
            "BNA_KC_Helmet_Phase2_Star",
            "BNA_KC_Helmet_Phase2_Stone",
            "BNA_KC_Helmet_Phase2_Swoop",
            "BNA_KC_Helmet_Phase2_Sytha",
            "BNA_KC_Helmet_Phase2_Tugz",
            "BNA_KC_Helmet_Phase2_Tyrant",
            "BNA_KC_Helmet_Phase2_Tyrant_Crimson",
            "BNA_KC_Helmet_Phase2_Vortex",
            "BNA_KC_Helmet_Phase2_Woods",

            // Engineer Helmets

            // Insulated Helmets
            "BNA_KC_Helmet_Insulated_Dexus",
            "BNA_KC_Helmet_Insulated_Joe",
            "BNA_KC_Helmet_Insulated_Keeli",

            // Phase 1 Pilot Helmets
            "BNA_KC_Helmet_Phase1_Pilot_Bailout",
            "BNA_KC_Helmet_Phase1_Pilot_Blue",
            "BNA_KC_Helmet_Phase1_Pilot_Blue_Bacta",
            "BNA_KC_Helmet_Phase1_Pilot_Mischief",

            // Phase 2 Pilot Helmets
            "BNA_KC_Helmet_Phase2_Pilot_Bailout",
            "BNA_KC_Helmet_Phase2_Pilot_Blue",
            "BNA_KC_Helmet_Phase2_Pilot_Blue_Bacta",
            "BNA_KC_Helmet_Phase2_Pilot_Mischief",

            // Phase 1 SpecOP Helmets
            "BNA_KC_Helmet_Phase1_Tanker_Grey",

            // Phase 2 SpecOP Helmets
            "BNA_KC_Helmet_Phase2_Tanker_Catholic",
            "BNA_KC_Helmet_Phase2_Tanker_Catholic_Kyber",
            "BNA_KC_Helmet_Phase2_Tanker_Grey",

            // Special Forces Helmets
            "BNA_KC_Helmet_ARC_Drake",
            "BNA_KC_Helmet_ARC_Drake_Bacta",
            "BNA_KC_Helmet_ARC_Hagrid",
            "BNA_KC_Helmet_ARC_Hagrid_Plasma",
            "BNA_KC_Helmet_ARC_Tyrant",
            "BNA_KC_Helmet_ARC_Tyrant_Crimson",
            "BNA_KC_Helmet_ARF_Patriot",
            "BNA_KC_Helmet_ARF_Sin",
            "BNA_KC_Helmet_ARF_Tugz",
            "BNA_KC_Helmet_BARC_Rat",
            "BNA_KC_Helmet_BARC_Rat_Crimson",

            // Standard Uniforms
            "BNA_KC_Uniform_Axel",
            "BNA_KC_Uniform_Burnt",
            "BNA_KC_Uniform_Dexus",
            "BNA_KC_Uniform_Drake",
            "BNA_KC_Uniform_Fil",
            "BNA_KC_Uniform_FilSquad",
            "BNA_KC_Uniform_Joe",
            "BNA_KC_Uniform_Keeli",
            "BNA_KC_Uniform_Ponds",
            "BNA_KC_Uniform_PondsTrooper",
            "BNA_KC_Uniform_Rat",
            "BNA_KC_Uniform_Sin",
            "BNA_KC_Uniform_Stone",
            "BNA_KC_Uniform_Tyrant",

            // Insulated Uniforms
            "BNA_KC_Uniform_Insulated_Dexus",
            "BNA_KC_Uniform_Insulated_Joe",
            "BNA_KC_Uniform_Insulated_Keeli",

            // Vests
            "BNA_KC_Vest_Officer_Keeli",
            "BNA_KC_Vest_Officer_Ponds",
            "BNA_KC_Vest_Officer_Rat",

            // NVGs
            "BNA_KC_NVG_Officer_Keeli"
        };
    };
};