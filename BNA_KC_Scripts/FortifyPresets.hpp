class ACEX_Fortify_Presets
{
    class BNA_KC_FortifyPreset_Default
    {
        displayName = "[KC] Default";
        objects[] =
        {
            // Hesco Objects
            {"Land_lsb_fob_hBarrier_1", 5},                   // Block
            {"Land_lsb_fob_hBarrier_3", 10},                  // Barrier (3 Block)
            {"Land_lsb_fob_hBarrierBig_4", 15},               // Large Hesco Wall
            {"Land_lsb_fob_hBarrierWall_exvertedCorner", 15}, // Large Hesco Wall Corner
            {"Land_lsb_fob_hBarrier_ramp", 5},                // Hesco Ramp, ~2m

            // Sandbags
            {"Land_BagFence_Long_F", 5},  // Straight
            {"Land_BagFence_Round_F", 5}, // Round

            // Other
            {"cwa_Wire", 10},          // Barbed Wire
            {"Land_PierLadder_F", 10}, // Ladder
            {"Land_Plank_01_8m_F", 10} // Plank, 8m
        };
    };
};