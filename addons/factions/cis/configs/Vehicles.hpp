class CLASS(AAT_Base);
class CLASS(CIS_AAT): CLASS(AAT_Base) {
    SCOPE_PUBLIC;

    faction = QFACTION(CIS);

    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
    editorPreview = EEDITOR_PREVIEW(vehicles\land\aat,AAT_Blue);
};

class CLASS(AAT_Heavy_Base);
class CLASS(CIS_AAT_Heavy): CLASS(AAT_Heavy_Base) {
    SCOPE_PUBLIC;

    faction = QFACTION(CIS);

    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};
};

class CLASS(AAT_King);
class CLASS(CIS_AAT_King): CLASS(AAT_King) {
    SCOPE_PUBLIC;

    faction = QFACTION(CIS);

    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};
};

class CLASS(Octuptarra_Combat_Base);
class CLASS(CIS_Octuptarra_Combat): CLASS(Octuptarra_Combat_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra (Combat)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Octuptarra_Static_Combat_Base);
class CLASS(CIS_Octuptarra_Static_Combat): CLASS(Octuptarra_Static_Combat_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra Combat (Static)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Octuptarra_Magna_Base);
class CLASS(CIS_Octuptarra_Magna): CLASS(Octuptarra_Magna_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra (Magna)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Octuptarra_Static_Magna_Base);
class CLASS(CIS_Octuptarra_Static_Magna): CLASS(Octuptarra_Static_Magna_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra Magna (Static)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Octuptarra_Torpedo_Base);
class CLASS(CIS_Octuptarra_Torpedo): CLASS(Octuptarra_Torpedo_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra (Torpedo)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Octuptarra_Static_Torpedo_Base);
class CLASS(CIS_Octuptarra_Static_Torpedo): CLASS(Octuptarra_Static_Torpedo_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Octuptarra Torpedo (Static)";
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    EGVAR(weapons,empCanBeDisabled) = TRUE;
};

class CLASS(Droideka_Base);
class CLASS(Droideka): CLASS(Droideka_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Droideka";
    crew = "O_UAV_AI";
};

class CLASS(Droideka_Sniper_Base);
class CLASS(Droideka_Sniper): CLASS(Droideka_Sniper_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    faction = QFACTION(CIS);

    displayName = "Droideka Sniper";
    crew = "O_UAV_AI";
};

class CLASS(CIS_Naval_Gun_Base);
class CLASS(CIS_Naval_Gun): CLASS(CIS_Naval_Gun_Base) {
    SCOPE_PUBLIC;
    displayName = "CIS Naval Gun";
    faction = QFACTION(CIS);
    crew = "O_UAV_AI";
};
class CLASS(CIS_Naval_Gun_180_Base);
class CLASS(CIS_Naval_Gun_180): CLASS(CIS_Naval_Gun_180_Base) {
    SCOPE_PUBLIC;
    displayName = "CIS Naval Gun (Inverted)";
    faction = QFACTION(CIS);
    crew = "O_UAV_AI";
};

class CLASS(CombatSpeeder_Base);
class CLASS(CombatSpeeder): CLASS(CombatSpeeder_Base) {
    SCOPE_PUBLIC;
    displayName = "Combat Speeder";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_B1);
};

class CLASS(MTT_Base);
class CLASS(MTT): CLASS(MTT_Base) {
    SCOPE_PUBLIC;
    displayName = "MTT";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(HAG_Base);
class CLASS(CIS_HAG): CLASS(HAG_Base) {
    SCOPE_PUBLIC;
    displayName = "HAG-M Artillery Tank";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(Hailfire_AT_Base);
class CLASS(CIS_Hailfire_AT): CLASS(Hailfire_AT_Base) {
    SCOPE_PUBLIC;
    displayName = "Hailfire (AT)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(Hailfire_SAM_Base);
class CLASS(CIS_Hailfire_SAM): CLASS(Hailfire_SAM_Base) {
    SCOPE_PUBLIC;
    displayName = "Hailfire (SAM)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(Hailfire_Rocket_Base);
class CLASS(CIS_Hailfire_Rocket): CLASS(Hailfire_Rocket_Base) {
    SCOPE_PUBLIC;
    displayName = "Hailfire (Rocket)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(Fliknot_Base);
class CLASS(CIS_Fliknot): CLASS(Fliknot_Base) {
    SCOPE_PUBLIC;
    displayName = "Fliknot";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(GAT_Heavy_Base);
class CLASS(CIS_GAT_Heavy): CLASS(GAT_Heavy_Base) {
    SCOPE_PUBLIC;
    displayName = "GAT Heavy";
    faction = QFACTION(CIS);
};

class CLASS(GAT_Light_Base);
class CLASS(CIS_GAT_Light): CLASS(GAT_Light_Base) {
    SCOPE_PUBLIC;
    displayName = "GAT Light";
    faction = QFACTION(CIS);
};

class CLASS(PAC_Base);
class CLASS(CIS_PAC): CLASS(PAC_Base) {
    SCOPE_PUBLIC;
    displayName = "Platoon Assault Craft";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(SAC_Base);
class CLASS(CIS_SAC): CLASS(SAC_Base) {
    SCOPE_PUBLIC;
    displayName = "Squad Assault Craft";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(J1_Static_Base);
class CLASS(CIS_J1): CLASS(J1_Static_Base) {
    SCOPE_PUBLIC;
    displayName = "J-1 Proton Cannon";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(J1_Legged_Static_Base);
class CLASS(CIS_J1_Legged): CLASS(J1_Legged_Static_Base) {
    SCOPE_PUBLIC;
    displayName = "J-1 Proton Cannon (Legged)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(J10s_Static_Base);
class CLASS(CIS_J10s): CLASS(J10s_Static_Base) {
    SCOPE_PUBLIC;
    displayName = "J-10s Blaster Turret";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1);
};

class CLASS(OG9_Static_Base);
class CLASS(CIS_OG9_Static): CLASS(OG9_Static_Base) {
    SCOPE_PUBLIC;
    displayName = "OG-9 Turret (Static)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(ParticleCannon_Base);
class CLASS(CIS_Particle_Cannon): CLASS(ParticleCannon_Base) {
    SCOPE_PUBLIC;
    displayName = "Particle Cannon";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(ProtonCannon_Base);
class CLASS(CIS_Proton_Cannon): CLASS(ProtonCannon_Base) {
    SCOPE_PUBLIC;
    displayName = "Proton Cannon";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(Flak_Cannon_Base);
class CLASS(CIS_Flak_Cannon): CLASS(Flak_Cannon_Base) {
    SCOPE_PUBLIC;
    displayName = "Flak Cannon";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
};

class CLASS(HMP_Base);
class CLASS(CIS_HMP): CLASS(HMP_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] HMP Gunship (Gunship)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
};

class CLASS(HMP_Transport_Base);
class CLASS(CIS_HMP_Transport): CLASS(HMP_Transport_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] HMP Gunship (Transport)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
};

class CLASS(MAF_Gunship_Base);
class CLASS(CIS_MAF_Gunship): CLASS(MAF_Gunship_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] MAF (Gunship)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
};

class CLASS(MAF_Transport_Base);
class CLASS(CIS_MAF_Transport): CLASS(MAF_Transport_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] MAF (Transport)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
};

class CLASS(Tri_Fighter_Base);
class CLASS(CIS_Tri_Fighter): CLASS(Tri_Fighter_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Tri Fighter";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
};

class CLASS(Vulture_Base);
class CLASS(CIS_Vulture_Droid): CLASS(Vulture_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (CIS)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_Droid_Tan): CLASS(Vulture_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Tan)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 1, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_Droid_Brown): CLASS(Vulture_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Brown)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 0, "Brown", 1};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};

class CLASS(Vulture_AA_Base);
class CLASS(CIS_Vulture_AA): CLASS(Vulture_AA_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (CIS, AA)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_AA_Tan): CLASS(Vulture_AA_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Tan, AA)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 1, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_AA_Brown): CLASS(Vulture_AA_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Brown, AA)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 0, "Brown", 1};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};

class CLASS(Vulture_CAS_Base);
class CLASS(CIS_Vulture_CAS): CLASS(Vulture_CAS_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (CIS, CAS)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_CAS_Tan): CLASS(Vulture_CAS_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Tan, CAS)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 1, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};
class CLASS(CIS_Vulture_CAS_Brown): CLASS(Vulture_CAS_Base) {
    SCOPE_PUBLIC;
    displayName = "[CIS] Vulture Droid (Brown, CAS)";
    faction = QFACTION(CIS);
    crew = QCLASS(CIS_Unit_Droid_B1_Pilot);
    textureList[] = {"CIS", 0, "Tan", 0, "Brown", 1};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
            };
        };
    };
};

class CLASS(Raptor_Base);
class CLASS(CIS_Raptor): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor'";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);
};
class CLASS(CIS_Raptor_Winter): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor' (Winter)";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);

    hiddenSelectionsTextures[] = {
        "\ls\core\addons\vehicles_agt\data\textures\snow\camo1_co.paa",
        "\ls\core\addons\vehicles_agt\data\textures\snow\camo2_co.paa"
    };
};
class CLASS(CIS_Raptor_Tan): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor' (Tan)";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);

    hiddenSelectionsTextures[] = {
        "\ls\core\addons\vehicles_agt\data\textures\tan\camo1_co.paa",
        "\ls\core\addons\vehicles_agt\data\textures\tan\camo2_co.paa"
    };
};
class CLASS(CIS_Raptor_TradeFederation): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor' (Trade Federation)";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);

    hiddenSelectionsTextures[] = {
        "\ls\core\addons\vehicles_agt\data\textures\tradefederation\camo1_co.paa",
        "\ls\core\addons\vehicles_agt\data\textures\tradefederation\camo2_co.paa"
    };
};
class CLASS(CIS_Raptor_Urban): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor' (Urban)";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);

    hiddenSelectionsTextures[] = {
        "\ls\core\addons\vehicles_agt\data\textures\urban\camo1_co.paa",
        "\ls\core\addons\vehicles_agt\data\textures\urban\camo2_co.paa"
    };
};
class CLASS(CIS_Raptor_Woodland): CLASS(Raptor_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "AGT 'Raptor' (Woodland)";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Drones);

    hiddenSelectionsTextures[] = {
        "\ls\core\addons\vehicles_agt\data\textures\woodland\camo1_co.paa",
        "\ls\core\addons\vehicles_agt\data\textures\woodland\camo2_co.paa"
    };
};

class CLASS(N99Tank_Base);
class CLASS(N99_Tank): CLASS(N99Tank_Base) {
    SCOPE_PUBLIC;
    author = AUTHOR;

    displayName = "N99 Snail Tank";

    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(Tanks);
};
