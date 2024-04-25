class CfgWeapons {
    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base {
        class ItemInfo;
    };
    class CLASS(CIS_Uniform_Base): CLASS(OPFOR_Uniform_Base) {
        class ItemInfo: ItemInfo {};
    };
    class CLASS(CIS_Uniform_Droid_Base): CLASS(CIS_Uniform_Base) {
        JLTS_isDroid = TRUE;
        JLTS_hasEMPProtection = FALSE;
        JLTS_deathSounds = "DeathDroid";
        EGVAR(medical,canBleed) = FALSE;

        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";

        class ItemInfo: ItemInfo {
            mass = 40;
            uniformClass = QCLASS(CIS_Unit_Droid_Base);
            containerClass = "Supply150";
        };
    };

    class CLASS(CIS_Uniform_Droid_B1): CLASS(CIS_Uniform_Droid_Base) {
        SCOPE_PUBLIC;

        displayName = "[CIS] B1 Battle Droid";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_B1);
        };

        class XtdGearInfo {
            model = QCLASS(CIS_Uniforms_B1);
            type = "Standard";
            variant = "Standard";
        };
    };

    B1_UNIFORM(Marine);
    B1_UNIFORM(Security);
    B1_UNIFORM(Commander);
    B1_UNIFORM(Crew);
    B1_UNIFORM(Pilot);
    B1_UNIFORM(Engineer);
    B1_UNIFORM(Rocket);
    B1_UNIFORM(Prototype);

    class CLASS(CIS_Uniform_Droid_B1_Geonosis): CLASS(CIS_Uniform_Droid_B1) {
        displayName = "[CIS] B1 Battle Droid (Geonosis)";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_B1_Geonosis);
        };

        class XtdGearInfo: XtdGearInfo {
            variant = "Geonosis";
        };
    };

    B1_VARIANT_UNIFORM(Commander,Geonosis);

    class CLASS(CIS_Uniform_Droid_B1_Training): CLASS(CIS_Uniform_Droid_B1) {
        displayName = "[CIS] B1 Battle Droid (Training)";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_B1_Training);
        };

        class XtdGearInfo: XtdGearInfo {
            variant = "Training";
        };
    };

    class CLASS(CIS_Uniform_Droid_B2): CLASS(CIS_Uniform_Droid_Base) {
        SCOPE_PUBLIC;

        displayName = "[CIS] B2 Super Battle Droid";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_B2);
        };

        class XtdGearInfo {
            model = QCLASS(CIS_Uniforms_B2);
            type = "Standard";
        };
    };

    class CLASS(CIS_Uniform_Droid_B2_Jetpack): CLASS(CIS_Uniform_Droid_B2) {
        SCOPE_PUBLIC;

        displayName = "[CIS] B2-RP Super Battle Droid";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_B2_Jetpack);
        };

        class XtdGearInfo: XtdGearInfo {
            type = "Jetpack";
        };
    };

    class CLASS(CIS_Uniform_Droid_BX): CLASS(CIS_Uniform_Droid_Base) {
        SCOPE_PUBLIC;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(CIS_Unit_Droid_BX);
        };

        class XtdGearInfo {
            model = QCLASS(CIS_Uniforms_BX);
            type = "Standard";
        };
    };

    BX_UNIFORM(Captain);
    BX_UNIFORM(Diplomat);
    BX_UNIFORM(Security);
    BX_UNIFORM(Training);

    class ItemCore;
    class Vest_NoCamo_Base: ItemCore {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Abdomen;
                class Body;
                class Chest;
                class Diaphragm;
            };
        };
    };
    class ls_redforVest_base: V_PlateCarrier1_rgr {};
    class CLASS(OPFOR_Vest_Base): ls_redforVest_base {};
    class CLASS(CIS_Vest_Droid_BX): CLASS(OPFOR_Vest_Base) {
        SCOPE_PUBLIC;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
            };
        };
    };

    class CLASS(Vest_Basic);
    class CLASS(CIS_Vest_Droid_BX_Actor): CLASS(Vest_Basic) {
        displayName = "[CIS] BX Commando Droid (Actor)";
    };
};