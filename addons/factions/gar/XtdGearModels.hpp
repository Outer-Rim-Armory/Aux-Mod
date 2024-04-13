class XtdGearModels {
    class CfgWeapons {
        class CLASS(Helmets_Phase1_Units) {
            label = "Unit Helmets (P1)";
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeInGame = FALSE;
                values[] = {
                    "KC_CG",
                    "KC_DC",
                    "KC_GC",
                    "KC_Howzer",
                    "KC_HowzerBrown",
                    "KC_212th",
                    "KC_501st",
                    "KC_91st_Ponds"
                };

                class KC_CG { label = "CS Guard"; };
                class KC_DC { label = "Doom Comp"; };
                class KC_GC { label = "Green Comp"; };
                class KC_Howzer { label = "Howzer"; };
                class KC_HowzerBrown { label = "Howzer (KC)"; };
                class KC_212th { label = "212th"; };
                class KC_501st { label = "501st"; };
                class KC_91st_Ponds { label = "91st (Ponds)"; };
            };
        };

        class CLASS(Helmets_Phase2_Units): CLASS(Helmets_Phase1_Units) {
            label = "Unit Helmets (P2)";

            class camo {
                changeInGame = FALSE;
                values[] = {
                    "KC_CG",
                    "KC_CG_Stone",
                    "KC_DC",
                    "KC_Fil",
                    "KC_FilSquad",
                    "KC_GC",
                    "KC_Howzer",
                    "KC_HowzerBrown",
                    "KC_187th",
                    "KC_212th",
                    "KC_501st",
                    "KC_91st_Ponds"
                };

                class KC_CG { label = "CS Guard"; };
                class KC_CG_Stone { label = "CS (Stone)"; };
                class KC_DC { label = "Doom Comp"; };
                class KC_Fil { label = "Fil"; };
                class KC_FilSquad { label = "Fil Squad"; };
                class KC_GC { label = "Green Comp"; };
                class KC_Howzer { label = "Howzer"; };
                class KC_HowzerBrown { label = "Howzer (KC)"; };
                class KC_187th { label = "187th"; };
                class KC_212th { label = "212th"; };
                class KC_501st { label = "501st"; };
                class KC_91st_Ponds { label = "91st (Ponds)"; };
            };
        };

        class CLASS(Uniforms_Units): CLASS(Helmets_Phase1_Units) {
            label = "Unit Uniforms";

            class camo {
                changeInGame = FALSE;
                values[] = {
                    "KC_CG",
                    "KC_CG_Stone",
                    "KC_DC",
                    "KC_Fil",
                    "KC_FilSquad",
                    "KC_GC",
                    "KC_Howzer",
                    "KC_HowzerBrown",
                    "KC_104th",
                    "KC_187th",
                    "KC_212th",
                    "KC_501st",
                    "KC_91st_Ponds"
                };

                class KC_CG { label = "CS Guard"; };
                class KC_CG_Stone { label = "CS (Stone)"; };
                class KC_DC { label = "Doom Comp"; };
                class KC_Fil { label = "Fil"; };
                class KC_FilSquad { label = "Fil Squad"; };
                class KC_GC { label = "Green Comp"; };
                class KC_Howzer { label = "Howzer"; };
                class KC_HowzerBrown { label = "Howzer (KC)"; };
                class KC_104th { label = "104th"; };
                class KC_187th { label = "187th"; };
                class KC_212th { label = "212th"; };
                class KC_501st { label = "501st"; };
                class KC_91st_Ponds { label = "91st (Ponds)"; };
            };
        };
    };
};