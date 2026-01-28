class CfgVehicles {
    class ls_vehicle_agtRaptor;
    class CLASS(Raptor_Base): ls_vehicle_agtRaptor {
        SCOPE_HIDDEN;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Drones);

        displayName = "AGT 'Raptor'";
        crew = "O_UAV_AI";

        hiddenSelectionsTextures[] = {
            "\ls\core\addons\vehicles_agt\data\camo1_co.paa",
            "\ls\core\addons\vehicles_agt\data\camo2_co.paa"
        };

        textureList[] = {
            "CIS", 1,
            "Winter", 0,
            "Tan", 0,
            "TradeFederation", 0,
            "Urban", 0,
            "Woodland", 0
        };
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\camo2_co.paa"
                };
            };
            class Winter: CIS {
                author = AUTHOR;
                displayName = "Winter";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\textures\snow\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\textures\snow\camo2_co.paa"
                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\textures\tan\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\textures\tan\camo2_co.paa"
                };
            };
            class TradeFederation: CIS {
                author = AUTHOR;
                displayName = "Trade Federation";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\textures\tradefederation\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\textures\tradefederation\camo2_co.paa"
                };
            };
            class Urban: CIS {
                author = AUTHOR;
                displayName = "Urban";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\textures\urban\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\textures\urban\camo2_co.paa"
                };
            };
            class Woodland: CIS {
                author = AUTHOR;
                displayName = "Woodland";
                textures[] = {
                    "\ls\core\addons\vehicles_agt\data\textures\woodland\camo1_co.paa",
                    "\ls\core\addons\vehicles_agt\data\textures\woodland\camo2_co.paa"
                };
            };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
        };
    };
};
