class CfgVehicles {
    class All;
    class AllVehicles: All {
        class NewTurret;
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Tank: LandVehicle {};
    class Tank_F: Tank {
        class Turrets;
    };
    class 3AS_AAT_base_F: Tank_F {
        class Turrets;
    };
    class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets;
            };
        };
    };
    class 3AS_AAT: 3AS_CIS_AAT_F {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                };
            };
        };
        class HitPoints;
    };
    class ls_vehicle_aat_base: Tank_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class ls_vehicle_aat: ls_vehicle_aat_base {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                };
            };
        };
        class HitPoints;
    };
    class CLASS(AAT_Base): 3AS_AAT {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,AAT_Blue);

        displayName = "AAT";

        EGVAR(weapons,empCanBeDisabled) = TRUE;

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};

        textureList[] = {
            "CIS", 1,
            "TradeFederation", 0,
            "EPF", 0,
            "Red", 0,
            "Desert", 0,
            "Geonosis", 0,
            "Woodland", 0,
            "Tropical", 0,
            "Arid", 0,
            "Winter", 0,
            "Aqua", 0,
            "King", 0
        };
        class TextureSources {
            class CIS {
                displayName = "CIS";
                author = "$STR_3AS_Studio";
                factions[] = {QFACTION(CIS)};
                textures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
            };
            class TradeFederation: CIS {
                displayName = "Trade Federation";
                factions[] = {QFACTION(TU)};
                textures[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
            };
            class EPF: CIS {
                displayName = "El Presidente Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {"\3AS\3AS_AAT\data\Green_AAT_CO.paa"};
            };
            class BlackSuns: CIS {
                displayName = "Black Suns Crime Syndicate";
                factions[] = {QFACTION(BS)};
                textures[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
            };
            class Red: CIS {
                displayName = "Red";
                factions[] = {};
                textures[] = {"\3AS\3AS_AAT\data\Red_AAT_CO.paa"};
            };
            class KC: Red {
                displayName = "KC";
                factions[] = {QFACTION(KC)};
                textures[] = {QPATHTOF(land\aat\data\textures\KC_AAT_co.paa)};
            };
            class Desert: Red {
                displayName = "Camo - Desert";
                textures[] = {"\3AS\3AS_AAT\data\Desert_AAT_CO.paa"};
            };
            class Geonosis: Red {
                displayName = "Camo - Geonosis";
                textures[] = {"\3AS\3AS_AAT\data\Geonosis_AAT_CO.paa"};
            };
            class Woodland: Red {
                displayName = "Camo - Woodland";
                textures[] = {"\3AS\3AS_AAT\data\Woodland_AAT_CO.paa"};
            };
            class Tropical: Red {
                displayName = "Camo - Tropical";
                textures[] = {"\3AS\3AS_AAT\data\Tropical_AAT_CO.paa"};
            };
            class Arid: Red {
                displayName = "Camo - Arid";
                textures[] = {"\3AS\3AS_AAT\data\Arid_AAT_CO.paa"};
            };
            class Winter: Red {
                displayName = "Camo - Winter";
                textures[] = {"\3AS\3AS_AAT\data\Winter_AAT_CO.paa"};
            };
            class Aqua: Red {
                displayName = "Camo - Aqua";
                textures[] = {"\3AS\3AS_AAT\data\Aqua_AAT_CO.paa"};
            };
            class King: Red {
                displayName = "Camo - King";
                textures[] = {QPATHTOF(land\aat\data\textures\King_AAT_co.paa)};
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"3AS_AATCannon", "SmokeLauncher"};
                magazines[] = {
                    "3AS_24Rnd_AAT_AP",
                    "3AS_24Rnd_AAT_AP",
                    "SmokeLauncherMag"
                };

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
                        magazines[] = {
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };

        class AnimationSources {
            class recoil_source {
                source = "reload";
                weapon = "3AS_AATCannon";
            };
            class muzzle_rot_cannon {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
            class muzzle_rot_coax {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
        };
    };

    class CLASS(AAT_captured): CLASS(AAT_Base) {
    side = BLUFOR;
    faction = QFACTION(KC);
    textureList[] = {
        "CIS", 0,
        "TradeFederation", 0,
        "EPF", 0,
        "Red", 0,
        "KC", 1,
        "Desert", 0,
        "Geonosis", 0,
        "Woodland", 0,
        "Tropical", 0,
        "Arid", 0,
        "Winter", 0,
        "Aqua", 0,
        "King", 0
    };

        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,AAT_Blue);

        displayName = "AAT (Captured)";
        SCOPE_PUBLIC;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\aat\data\textures\KC_AAT_co.paa)};

    };

    class CLASS(AAT_Heavy_Base): CLASS(AAT_Base) {
        displayName = "AAT (Heavy)";
        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\Red_AAT_CO.paa"};
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,AAT_Red);
        accuracy = 1000;
        armor = 1250;

        textureList[] = {};
        class TextureSources {};
        animationList[] = {
            "HideArmorCIS",0,
            "HideArmorRebel",1
        };
    };

    class CLASS(AAT_King): ls_vehicle_aat {
        SCOPE_PRIVATE;

        displayName = "King AAT";
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,AAT_King_Base);

        weapons[] = {"SmokeLauncher"};
        magazines[] = {
            "SmokeLauncherMag",
            "SmokeLauncherMag",
            "SmokeLauncherMag"
        };

        armor = 2000;
        armorStructural = 10;
        hiddenSelections[] = {"body1","body2","gun"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\vehicles_aat\data\textures\black\body1_co.paa",
            "\ls\core\addons\vehicles_aat\data\textures\black\body2_co.paa",
            "\ls\core\addons\vehicles_aat\data\textures\black\gun_co.paa"
        };

        class ACE_SelfActions: ACE_SelfActions {
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"3AS_AATCannon", "SmokeLauncher"};
                magazines[] = {
                    "3AS_24Rnd_AAT_AP",
                    "3AS_24Rnd_AAT_AP",
                    "SmokeLauncherMag"
                };

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
                        magazines[] = {
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };

        class HitPoints: HitPoints {
            class HitHull {
                armor = 800;
                explosionshielding = 2;
                material = -1;
                minimalhit = 0.14;
                name = "hull_hit";
                passthrough = 0.03;
                radius = 0.25;
                visual = "zbytek";
            };
            class HitEngine: HitHull {
                explosionShielding = 1;
                minimalHit = 0.24;
                name = "engine_hit";
                passThrough = 0.08;
                radius = 0.33;
                visual = "motor";
            };
            class HitAmmo_L: HitEngine {
                name = "ammo_l_hit";
            };
            class HitAmmo_R: HitEngine {
                name = "ammo_r_hit";
            };
        };
    };
    class CLASS(AAT_King_Captured): CLASS(AAT_King) {
        SCOPE_PUBLIC;

        displayName = "King AAT (Captured)";
        side = 1;
        faction = QFACTION(KC);
        crew = QCLASS(Unit_Phase2_ARMR_CT);

        hiddenSelections[] = {"body1","body2","gun"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\aat\data\textures\KC_body1_co.paa),
            QPATHTOF(land\aat\data\textures\KC_body2_co.paa),
            QPATHTOF(land\aat\data\textures\KC_gun_co.paa)
        };
    };

    class 3AS_Heavy_AAT_Defoliator_F;
    class CLASS(Defoliator_AAT_Base): 3AS_Heavy_AAT_Defoliator_F {
        SCOPE_HIDDEN;
        displayName = "Heavy AAT (Defoliator)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_cis_armor\heavyaat\data\hull_co.paa",
            "3as\3as_cis_armor\heavyaat\data\defoliator_co.paa",
            "3as\3AS_CIS_Armor\HeavyAAT\data\Defoliator_Displays_co.paa",
            "3as\3as_cis_armor\heavyaat\data\shield_co.paa"
        };
    };

    class 3AS_Heavy_AAT_Flamer_F;
    class CLASS(Flamer_AAT_Base): 3AS_Heavy_AAT_Flamer_F {
        SCOPE_HIDDEN;
        displayName = "Heavy AAT (Flamer)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_cis_armor\heavyaat\data\hull_co.paa",
            "3as\3as_cis_armor\heavyaat\data\Flame_co.paa"
        };
    };

    class 3AS_Heavy_AAT_Shield_F;
    class CLASS(Shield_AAT_Base): 3AS_Heavy_AAT_Shield_F {
        SCOPE_HIDDEN;
        displayName = "Heavy AAT (Shield)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_cis_armor\heavyaat\data\hull_co.paa",
            "3as\3as_cis_armor\heavyaat\data\Shield_co.paa"
        };
    };
};
