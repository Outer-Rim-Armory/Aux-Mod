class XtdGearModels {
    class CfgWeapons {
        class CLASS(CIS_Uniforms_B1) {
            label = "B1 Battle Droid";
            author = AUTHOR;
            options[] = {"type", "variant"};

            class type {
                label = "Type";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Standard",
                    "Marine",
                    "Security",
                    "Commander",
                    "Crew",
                    "Pilot",
                    "Engineer",
                    "Rocket",
                    "Prototype"
                };

                class Standard { label = "Standard"; };
                class Marine { label = "Marine"; };
                class Security { label = "Security"; };
                class Commander { label = "Commander"; };
                class Crew { label = "Crew"; };
                class Pilot { label = "Pilot"; };
                class Engineer { label = "Engineer"; };
                class Rocket { label = "Rocket"; };
                class Prototype { label = "Prototype"; };
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

        class CLASS(CIS_Uniforms_B2) {
            label = "B2 Super Battle Droid";
            author = AUTHOR;
            options[] = {"type"};

            class type {
                label = "Type";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Jetpack"
                };

                class Standard { label = "Standard"; };
                class Jetpack { label = "Jetpack"; };
            };
        };

        class CLASS(CIS_Uniforms_BX) {
            label = "BX Commando Droid";
            author = AUTHOR;
            options[] = {"role"};

            class role {
                label = "Role";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Captain",
                    "Diplomat",
                    "Security",
                    "Training",
                };

                class Standard { label = "Standard"; };
                class Captain { label = "Captain"; };
                class Diplomat { label = "Diplomat"; };
                class Security { label = "Security"; };
                class Training { label = "Training"; };
            };
        };
    };

    class CfgVehicles {
        class CLASS(CIS_Backpacks_B1) {
            label = "B1 Battle Droid";
            author = AUTHOR;
            options[] = {"type", "variant"};

            class type {
                label = "Type";
                changeInGame = FALSE;
                alwaysSelectable = TRUE;
                values[] = {
                    "Standard",
                    "Engineer",
                    "Saboteur",
                    "Prototype",
                    "Antenna"
                };

                class Standard { label = "Standard"; };
                class Engineer { label = "Engineer"; };
                class Saboteur { label = "Saboteur"; };
                class Prototype { label = "Prototype"; };
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

        class CLASS(CIS_Jetpacks): CLASS(CIS_Backpacks_B1) {
            label = "B1 Jetpacks";
            options[] = {"type"};

            class type {
                label = "Type";
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Rocket"
                };

                class Standard { label = "Standard"; };
                class Rocket { label = "Rocket"; };
            };
        };
    };
};