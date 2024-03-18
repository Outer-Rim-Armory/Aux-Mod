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

                class Standard {
                    label = "Standard";
                    image = "#(rgb,8,8,3)color(0.457,0.392,0.273,1)";
                };
                class Geonosis {
                    label = "Geonosis";
                    image = "#(rgb,8,8,3)color(0.122,0.035,0.016,1)";
                };
                class Training {
                    label = "Training";
                    image = "#(rgb,8,8,3)color(0.561,0.561,0.561,1)";
                };
            };
        };
    };

    class CfgVehicles {
        class CLASS(CIS_Backpacks_B1) {
            label = "B1 Battle Droid";
            author = AUTHOR;
            options[] = {"camo", "variant"};

            class camo {
                label = "Type";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Saboteur",
                    "Antenna"
                };

                class Standard { label = "Standard"; };
                class Saboteur { label = "Saboteur"; };
                class Antenna { label = "Antenna"; };
            };

            class variant {
                label = "Variant";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Geonosis",
                    "Training"
                };

                class Standard {
                    label = "Standard";
                    image = "#(rgb,8,8,3)color(0.457,0.392,0.273,1)";
                };
                class Geonosis {
                    label = "Geonosis";
                    image = "#(rgb,8,8,3)color(0.122,0.035,0.016,1)";
                };
                class Training {
                    label = "Training";
                    image = "#(rgb,8,8,3)color(0.561,0.561,0.561,1)";
                };
            };
        };
    };
};