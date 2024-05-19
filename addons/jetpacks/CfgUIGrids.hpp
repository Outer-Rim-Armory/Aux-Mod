class CfgUIGrids {
    class IGUI {
        class Variables {
            class GVAR(grid_fuelDisplay) {
                // Variable for saving the position of the UI control
                displayName = "Jetpack Fuel";
                description = "Fuel display for jetpacks.";
                preview = QPATHTOF(data\ui\FuelDisplay_preview_ca.paa);
                saveToProfile[] = {IGUI_SAVEX, IGUI_SAVEY};
            };
        };

        class Presets {
            class Arma3 {
                class Variables {
                    // Default values (roughly on the right side of the screen)
                    GVAR(grid_fuelDisplay)[]= {
                        {
                            "safeZoneX + 0.95 * safeZoneW",
                            "(safeZoneY + (safeZoneH / 2)) - (0.3 / 2)",
                            0.025,
                            0.3
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)",
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
                    };
                };
            };
        };
    };
};