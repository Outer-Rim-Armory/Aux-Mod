class XtdGearModels {
    class CfgWeapons {
        class CLASS(CIS_Uniforms_B1) {
            label = "B1 Battle Droid";
            author = AUTHOR;
            options[] = {"camo", "variant"};

            class camo {
                label = "Role";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Marine",
                    "Security",
                    "Commander",
                    "Crew",
                    "Pilot",
                    "Saboteur"
                };

                class Standard { label = "Standard"; };
                class Marine { label = "Marine"; };
                class Security { label = "Security"; };
                class Commander { label = "Commander"; };
                class Crew { label = "Crew"; };
                class Pilot { label = "Pilot"; };
                class Saboteur { label = "Saboteur"; };
            };

            class variant {
                label = "Variant";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Geonosis",
                    "Training"
                };

                class Standard { label = "Standard"; };
                class Geonosis { label = "Geonosis"; };
                class Training { label = "Training"; };
            };
        };
    };
};