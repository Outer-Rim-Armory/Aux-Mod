class ACEX_Fortify_Presets {
    class GVAR(disabled) {
        displayName = "Disabled";
        objects[] = {};
        presets[] = {};
    };

    class GVAR(all) {
        displayName = "All Presets";
        presets[] = {
            QGVAR(common),
            QGVAR(mines),
            QGVAR(fob),
            QGVAR(camouflage),
            QGVAR(weapons),
            QGVAR(fob2)
        };
    };

    class GVAR(common) {
        displayName = "Common";
        objects[] = {
            // Hesco Objects
            {"Land_lsb_fob_hBarrier_1", 1},                   // Block
            {"Land_lsb_fob_hBarrier_3", 13},                  // Barrier (3 Block)
            {"Land_lsb_fob_hBarrierBig_4", 23},               // Large Hesco Wall
            {"Land_lsb_fob_hBarrierWall_exvertedCorner", 15}, // Large Hesco Wall Corner
            {"Land_lsb_fob_hBarrier_ramp", 5},                // Hesco Ramp, ~2m
            {"Land_lsb_fob_hBarrierWall_ramp", 6},            // Hesco Wall Ramp

            // Sandbags
            {"Land_BagFence_Long_F", 5},  // Straight
            {"Land_BagFence_Round_F", 5}, // Round

            // Other
            {"Land_PierLadder_F", 10}, // Ladder
            {"Land_Plank_01_8m_F", 10}, // Plank, 8m
            {"Land_ClutterCutter_large_F", 0},
            {"Land_ClutterCutter_medium_F", 0},
            {"Land_ClutterCutter_small_F", 0}
        };
    };

    class GVAR(fob) {
        displayName = "FOB Building";
        objects[] = {
            {"Land_lsb_fob_hBarrier_tower", 30},
            {"3AS_Short_Wall_Bunker", 10},
            {"Land_OPTRE_watchtower_urban", 75},
            {"3AS_Barricade_2_C_Prop", 10},
            {"3AS_Barricade_Prop", 10},
            {"3AS_FOB_Hangar_Prop", 60},
            {"Land_OPTRE_hard_tent_urban", 40},
            {"Land_OPTRE_medical_tent_gry", 40},
            {"3AS_Pad_GAR_Prop", 50},
            {"fob_light_gar_tall", 5},
            {"light_s_cis", 5},
            {"3AS_Fusion_Turret_Base", 10},
            {"442_data_pad_pinup_prinz2", 5000}
        };
    };

    class GVAR(camouflage) {
        displayName = "Camouflage";
        objects[] = {
            {"CamoNet_INDP_F", 10},
            {"CamoNet_INDP_open_F", 10},
            {"CamoNet_BLUFOR_F", 10},
            {"CamoNet_BLUFOR_open_F", 10},
            {"CamoNet_wdl_open_F", 10},
            {"CamoNet_wdl_F", 10},
            {"Land_Campfire_F", 3}
        };
    };

    class GVAR(weapons) {
        displayName = "Weapons";
        objects[] = {
        {"OPTRE_Static_FG75",100}
        };
    };

    class GVAR(fob2) { // 3AS FOB Preset
        displayName = "FOB Building 2";
        objects[] = {
        {"3AS_Prop_FOB_modular_Bunker",28},
        {"3AS_Prop_FOB_modular_watchTower",58},
        {"3AS_Prop_FOB_modular_Wall_Bunker", 43},
        {"3AS_Prop_FOB_modular_Wall_Corner_Inversed", 43},
        {"3AS_Prop_FOB_modular_Wall_Corner", 43},
        {"3AS_Prop_FOB_modular_Wall_Door", 43},
        {"3AS_Prop_FOB_modular_Wall_gate", 58},
        {"3AS_Prop_FOB_modular_Wall_straight", 33},
        {"3AS_Prop_FOB_modular_Wall_straight_Long", 43},
        {"3AS_Prop_FOB_modular_Wall_watchTower", 58},
        {"land_3as_Imperial_Checkpoint_Long", 43},
        {"land_3as_Imperial_Checkpoint", 28},
        {"3AS_HoloTable_Octagon_prop", 28},
        {"3AS_HoloTable_Rectangle_prop", 28}
        };
    };
};
