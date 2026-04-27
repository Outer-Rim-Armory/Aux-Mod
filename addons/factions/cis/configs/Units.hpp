class CLASS(OPFOR_Unit_Base);
class CLASS(CIS_Unit_Base): CLASS(OPFOR_Unit_Base) {
    SCOPE_HIDDEN;
    faction = QFACTION(CIS);
};
class CLASS(CIS_Unit_Droid_Base): CLASS(CIS_Unit_Base) {
    model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
    hiddenSelections[] = {"camo1"};

    armor = 2;
    armorStructural = 3;
    explosionShielding = 0.3;
    impactDamageMultiplier = 0.5;
    minTotalDamageThreshold = 0.001;

    genericNames = "JLTS_DroidsB1";
    identityTypes[] = {"ls_b1BattleDroid"};

    impactEffectsBlood = "ImpactMetal";
    impactEffectsNoBlood = "ImpactMetal";

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};

    class SoundBleeding {breath[] = {};};
    class SoundBreath {breath[] = {};};
    class SoundBurning {breath[] = {};};
    class SoundChoke {breath[] = {};};
    class SoundDrown {breath[] = {};};
    class SoundEnvironExt {
        generic[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 45}}
        };
    };
    class SoundEquipment {
        soldier[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step3.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b1\Step4.wss), 2, 1, 45}}
        };
    };
    class SoundInjured {breath[] = {};};
    class SoundRecovered {breath[] = {};};
};

class CLASS(CIS_Unit_Droid_B1): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1);

    editorSubcategory = QEDSUBCAT(CIS_B1s);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1);
};

class WBK_3AS_B1;
class CLASS(WBK_B1): WBK_3AS_B1 {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class WBK_3AS_B1_MG;
class CLASS(WBK_B1_MG): WBK_3AS_B1_MG {
    SCOPE_PUBLIC;
    displayName = "B1 Heavy Droid (WBK)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Heavy): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Heavy Droid";
    icon = "JLTS_iconManSupportGunner";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Heavy);

    weapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };
};

class CLASS(CIS_Unit_Droid_B1_AT): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Battle Droid (AT)";
    icon = "iconManAT";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AT);
    backpack = QCLASS(CIS_Backpack_Droid_B1_predef_AT);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };
};

class WBK_3AS_B1_AT;
class CLASS(WBK_B1_AT): WBK_3AS_B1_AT {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid (AT)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_AA): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Battle Droid (AA)";
    icon = "iconManAT";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AA);
    backpack = QCLASS(CIS_Backpack_Droid_B1_predef_AA);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AA),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AA),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AA_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AA_AI),
        "ls_mag_classC_thermalDet"
    };
};

class CLASS(CIS_Unit_Droid_B1_Sniper): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Sniper Droid";
    icon = "JLTS_iconManSniper";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Sniper);

    weapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
};

class WBK_3AS_B1_Sniper;
class CLASS(WBK_B1_Sniper): WBK_3AS_B1_Sniper {
    SCOPE_PUBLIC;
    displayName = "B1 Sniper Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
};

class CLASS(CIS_Unit_Droid_B1_Marine): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Marine Droid (HE)";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Marine);
    icon = "iconManAT";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Marine);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_marine_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_predef_HE);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_HE_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_HE_AI),
        "ls_mag_classC_thermalDet"
    };
};

class WBK_3AS_B1_Marine;
class CLASS(WBK_B1_Marine): WBK_3AS_B1_Marine {
    SCOPE_PUBLIC;
    displayName = "B1 Marine Droid (HE)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_HE_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_HE_AI),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_CQC): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Shotgun Droid";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_CQC);

    weapons[] = {
        QCLASS(SBB3),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(SBB3),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_25rnd_SBB3)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_25rnd_SBB3)),
        "ls_mag_classC_thermalDet"
    };
};

class WBK_3AS_B1_GL;
class CLASS(WBK_B1_GL): WBK_3AS_B1_GL {
    SCOPE_PUBLIC;
    displayName = "B1 Grenadier Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        "3AS_MPL_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "3AS_MPL_F",
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5("3AS_3Rnd_HE_Grenade_shell"),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5("3AS_3Rnd_HE_Grenade_shell"),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Security): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Security Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Security);

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Security);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"};
    backpack = "";
};

class WBK_3AS_B1_Security;
class CLASS(WBK_B1_Security): WBK_3AS_B1_Security {
    SCOPE_PUBLIC;
    displayName = "B1 Security Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Commander): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Commander Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Commander);
    icon = "iconManOfficer";

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Commander);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Antenna);
};

class WBK_3AS_B1_Commander;
class CLASS(WBK_B1_Commander): WBK_3AS_B1_Commander {
    SCOPE_PUBLIC;
    displayName = "B1 Commander Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Crew): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Crew Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Crew);

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Crew);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1);
};

class CLASS(CIS_Unit_Droid_B1_Pilot): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Pilot Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Pilot);

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Pilot);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_pilot_co.paa"};
    backpack = "";
};

class WBK_3AS_B1_Pilot;
class CLASS(WBK_B1_Pilot): WBK_3AS_B1_Pilot {
    SCOPE_PUBLIC;
    displayName = "B1 Pilot Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Engineer): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Engineer Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Engineer);
    icon = "iconManEngineer";

    engineer = TRUE;

    weapons[] = {
        QCLASS(SBB3),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(SBB3),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_25rnd_SBB3)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_25rnd_SBB3)),
        "ls_mag_classC_thermalDet"
    };

    items[] = {"ToolKit"};
    respawnItems[] = {"ToolKit"};

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Engineer);
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\uniforms\B1_Engineer_camo1_co.paa)};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Engineer);
};

class CLASS(CIS_Unit_Droid_B1_Rocket): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Rocket Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Rocket);

    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Rocket);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_rocket_co.paa"};
    backpack = QCLASS(CIS_Jetpack_Droid_B1_Rocket);
};

class WBK_3AS_B1_Rocket;
class CLASS(WBK_B1_Rocket): WBK_3AS_B1_Rocket {
    SCOPE_PUBLIC;
    displayName = "B1 Rocket Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Saboteur): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Saboteur Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Rocket);

    editorSubcategory = QEDSUBCAT(Special);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Rocket);
    backpack = QCLASS(CIS_Backpack_Droid_B1_Saboteur);
};

class WBK_3AS_B1_UAV;
class CLASS(WBK_B1_UAV): WBK_3AS_B1_UAV {
    SCOPE_PUBLIC;
    displayName = "B1 UAV Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Prototype): CLASS(CIS_Unit_Droid_B1) {
    displayName = "B1 Prototype Droid";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Prototype);

    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Prototype);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_prototype_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Prototype);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_2("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_2("3AS_SmokeWhite")
    };
};

class WBK_3AS_B1_Prototype;
class CLASS(WBK_B1_Prototype): WBK_3AS_B1_Prototype {
    SCOPE_PUBLIC;
    displayName = "B1 Prototype Droid";
    editorSubcategory = QEDSUBCAT(CIS_B1s_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_2("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_2("3AS_SmokeWhite")
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_PrototypeCommander): CLASS(CIS_Unit_Droid_B1_Prototype) {
    displayName = "B1 Prototype Commander Droid";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_PrototypeCommander);
    icon = "iconManOfficer";

    uniformClass = QCLASS(CIS_Uniform_Droid_B1_PrototypeCommander);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_prototype_commander_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Prototype);
};

class CLASS(CIS_Unit_Droid_B1_Geonosis): CLASS(CIS_Unit_Droid_B1) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis);
};

class WBK_3AS_B1_g;
class CLASS(WBK_B1_Geonosis): WBK_3AS_B1_g {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid (Geonosis)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Heavy_Geonosis): CLASS(CIS_Unit_Droid_B1_Heavy) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Heavy_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis);
};

class WBK_3AS_B1_MG_g;
class CLASS(WBK_B1_Heavy_Geonosis): WBK_3AS_B1_MG_g {
    SCOPE_PUBLIC;
    displayName = "B1 Heavy Droid (Geonosis)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5C_Stock),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_150rnd_E5C)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_AT_Geonosis): CLASS(CIS_Unit_Droid_B1_AT) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AT_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AT);
};

class WBK_3AS_B1_AT_g;
class CLASS(WBK_B1_AT_Geonosis): WBK_3AS_B1_AT_g {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid (AT) (Geonosis)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        QCLASS(E60R_AT),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        QCLASS(Mag_1rnd_E60R_AT_AI),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_AA_Geonosis): CLASS(CIS_Unit_Droid_B1_AA) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AA_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AA);
};

class CLASS(CIS_Unit_Droid_B1_Sniper_Geonosis): CLASS(CIS_Unit_Droid_B1_Sniper) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Sniper_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis);
};

class WBK_3AS_B1_Sniper_g;
class CLASS(WBK_B1_Sniper_Geonosis): WBK_3AS_B1_Sniper_g {
    SCOPE_PUBLIC;
    displayName = "B1 Sniper Droid (Geonosis)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_CQC_Geonosis): CLASS(CIS_Unit_Droid_B1_CQC) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_CQC_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Geonosis);
};

class CLASS(CIS_Unit_Droid_B1_Commander_Geonosis): CLASS(CIS_Unit_Droid_B1_Commander) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Commander_Geonosis);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Commander_Geonosis);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1GeonosisCommander_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Antenna_Geonosis);
};

class WBK_3AS_B1_Commander_g;
class CLASS(WBK_B1_Commander_Geonosis): WBK_3AS_B1_Commander_g {
    SCOPE_PUBLIC;
    displayName = "B1 Commander Droid (Geonosis)";
    editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis_WBK);
    faction = QFACTION(CIS);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        "ls_mag_classC_thermalDet"
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_B1_Training): CLASS(CIS_Unit_Droid_B1) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training);
};

class CLASS(CIS_Unit_Droid_B1_Heavy_Training): CLASS(CIS_Unit_Droid_B1_Heavy) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Heavy_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training);
};

class CLASS(CIS_Unit_Droid_B1_AT_Training): CLASS(CIS_Unit_Droid_B1_AT) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AT_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training_predef_AT);
};

class CLASS(CIS_Unit_Droid_B1_AA_Training): CLASS(CIS_Unit_Droid_B1_AA) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AA_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training_predef_AA);
};

class CLASS(CIS_Unit_Droid_B1_Sniper_Training): CLASS(CIS_Unit_Droid_B1_Sniper) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Sniper_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training);
};

class CLASS(CIS_Unit_Droid_B1_CQC_Training): CLASS(CIS_Unit_Droid_B1_CQC) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_CQC_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Training);
};

class CLASS(CIS_Unit_Droid_B1_Commander_Training): CLASS(CIS_Unit_Droid_B1_Commander) {
    uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);
    editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Commander_Training);
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
    backpack = QCLASS(CIS_Backpack_Droid_B1_Antenna_Training);
};

class CLASS(Unit_Droid_B1): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid";
    uniformClass = QCLASS(Uniform_Droid_B1);

    faction = QFACTION(KC);
    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(Unit_Droid_B1);
    hiddenSelectionsTextures[] = {
        QPATHTOF(cis\data\textures\uniforms\KC_b1_co.paa)};

    backpack = QCLASS(Backpack_Droid_B1);
    side = BLUFOR;
    modelSides[] = {BLUFOR};
};

class CLASS(Unit_Droid_B1_Commander): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;
    displayName = "B1 Battle Droid Commander";
    uniformClass = QCLASS(Uniform_Droid_B1_Commander);

    faction = QFACTION(KC);
    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(Unit_Droid_B1_Commander);
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\uniforms\KC_b1_commander_co.paa)};
    backpack = QCLASS(Backpack_Droid_B1);
    side = BLUFOR;
    modelSides[] = {BLUFOR};
};

class CLASS(CIS_Unit_Droid_B2): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;

    editorSubcategory = QEDSUBCAT(CIS_B2s);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B2);
    genericNames = QCLASS(CIS_Droids_B2);

    displayName = "B2 Super Battle Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B2);

    model = "\ls\core\addons\characters_droid\uniforms\b2\ls_uniform_droid_b2.p3d";
    hiddenSelections[] = {"camo_arms", "legs", "torso"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_droid\uniforms\b2\data\arms_co.paa",
        "\ls\core\addons\characters_droid\uniforms\b2\data\legs_co.paa",
        "\ls\core\addons\characters_droid\uniforms\b2\data\torso_co.paa"
    };

    weapons[] = {
        QCLASS(B2Blaster)
    };
    respawnWeapons[] = {
        QCLASS(B2Blaster)
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};

    class SoundEnvironExt {
        generic[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 45}},
        };
    };
    class SoundEquipment {
        soldier[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 45}},
        };
    };
};

class CLASS(CIS_Unit_Droid_B2_Aqua): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;

    editorSubcategory = QEDSUBCAT(CIS_B2s);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B2);
    genericNames = QCLASS(CIS_Droids_B2);

    displayName = "Aqua B2 Super Battle Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B2_Aqua);

    model = "\ls\core\addons\characters_droid\uniforms\b2\ls_uniform_droid_b2.p3d";
    hiddenSelections[] = {"camo_arms", "legs", "torso"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(cis\data\textures\uniforms\Aqua_B2_Arms_CO.paa),
        QPATHTOF(cis\data\textures\uniforms\Aqua_B2_Legs_CO.paa),
        QPATHTOF(cis\data\textures\uniforms\Aqua_B2_Torso_CO.paa)
    };

    weapons[] = {
        QCLASS(AquaB2Blaster)
    };
    respawnWeapons[] = {
        QCLASS(AquaB2Blaster)
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};

    class SoundEnvironExt {
        generic[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 45}},
        };
    };
    class SoundEquipment {
        soldier[] = {
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"walk", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 15}},
            {"tactical", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 15}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 30}},
            {"run", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 30}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step1.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step2.wss), 2, 1, 45}},
            {"sprint", {QPATHTOF(cis\data\audio\walk\b2\Step3.wss), 2, 1, 45}},
        };
    };
};

class WBK_LS_B2;
class CLASS(WBK_B2): WBK_LS_B2 {
    SCOPE_PUBLIC;
    displayName = "B2 Super Battle Droid";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_B2s_WBK);

    weapons[] = {
        QCLASS(B2Blaster)
    };
    respawnWeapons[] = {
        QCLASS(B2Blaster)
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
};

class WBK_LS_B2_Junk;
class CLASS(WBK_B2_Junk): WBK_LS_B2_Junk {
    SCOPE_PUBLIC;
    displayName = "Junk B2 Super Battle Droid";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_B2s_WBK);

    weapons[] = {
        QCLASS(B2Blaster)
    };
    respawnWeapons[] = {
        QCLASS(B2Blaster)
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_60rnd_B2Blaster)),
        QCLASS(Mag_3rnd_B2Blaster_rocket)
    };

    linkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", QCLASS(Vest_Basic), DROID_LINKED_ITEMS};
};

class CLASS(Unit_Droid_B2): CLASS(CIS_Unit_Droid_B2) {
    SCOPE_PUBLIC;

    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(Unit_Droid_B2);
    genericNames = QCLASS(CIS_Droids_B2);
    faction = QFACTION(KC);

    displayName = "B2 Super Battle Droid";
    uniformClass = QCLASS(KC_Uniform_Droid_B2);
    side = BLUFOR;
    modelSides[] = {BLUFOR};

    model = "\ls\core\addons\characters_droid\uniforms\b2\ls_uniform_droid_b2.p3d";
    hiddenSelections[] = {"camo_arms", "legs", "torso"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(cis\data\textures\uniforms\KC_B2_arms_co.paa),
        QPATHTOF(cis\data\textures\uniforms\KC_B2_legs_co.paa),
        QPATHTOF(cis\data\textures\uniforms\KC_B2_torso_co.paa)
    };
};



class CLASS(Unit_Droid_B2_Commander): CLASS(CIS_Unit_Droid_B2) {
    SCOPE_PUBLIC;

    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(Unit_Droid_B2_Commander);
    genericNames = QCLASS(CIS_Droids_B2);
    faction = QFACTION(KC);

    displayName = "B2 Super Battle Droid Commander";
    uniformClass = QCLASS(KC_Uniform_Droid_B2_Commander);
    side = BLUFOR;
    modelSides[] = {BLUFOR};

    model = "\ls\core\addons\characters_droid\uniforms\b2\ls_uniform_droid_b2.p3d";
    hiddenSelections[] = {"camo_arms", "legs", "torso"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(cis\data\textures\uniforms\KC_B2_Commander_arms_co.paa),
        QPATHTOF(cis\data\textures\uniforms\KC_B2_Commander_legs_co.paa),
        QPATHTOF(cis\data\textures\uniforms\KC_B2_Commander_torso_co.paa)
    };
};

class CLASS(CIS_Unit_Droid_B2_Jetpack): CLASS(CIS_Unit_Droid_B2) {
    displayName = "B2-RP Super Battle Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_B2_Jetpack);
    hiddenSelectionsTextures[] = {
        QPATHTOF(cis\data\textures\uniforms\B2_Jetpack_arms_co.paa),
        QPATHTOF(cis\data\textures\uniforms\B2_Jetpack_legs_co.paa),
        QPATHTOF(cis\data\textures\uniforms\B2_Jetpack_torso_co.paa)
    };
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B2_Jetpack);
    backpack = QCLASS(CIS_Jetpack_Droid_B1);
};

class CLASS(CIS_Unit_Droid_BX): CLASS(CIS_Unit_Droid_Base) {
    SCOPE_PUBLIC;

    editorSubcategory = QEDSUBCAT(CIS_BXs);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX);
    genericNames = QCLASS(CIS_Droids_BX);

    displayName = "BX Commando Droid";
    uniformClass = QCLASS(CIS_Uniform_Droid_BX);

    model = "\ls\core\addons\characters_droid\uniforms\bx\ls_uniform_droid_bx.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\body_co.paa"};

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    items[] = {
        // Other
        ITEM_5("ACE_CableTie")
    };
    respawnItems[] = {
        // Other
        ITEM_5("ACE_CableTie")
    };

    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class WBK_LS_BX;
class CLASS(WBK_BX): WBK_LS_BX {
    SCOPE_PUBLIC;
    displayName = "BX Commando Droid";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_BXs_WBK);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    items[] = {
        // Other
        ITEM_5("ACE_CableTie")
    };
    respawnItems[] = {
        // Other
        ITEM_5("ACE_CableTie")
    };

    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_BX_Shielded): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid (Shield)";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Shielded);

    weapons[] = {
        QCLASS(E5_Shielded),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5_Shielded),
        "Throw",
        "Put"
    };
};

class CLASS(CIS_Unit_Droid_BX_Captain): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid Captain";
    icon = "iconManLeader";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Captain);

    uniformClass = QCLASS(CIS_Uniform_Droid_BX_Captain);
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\captain_body_co.paa"};
};

class WBK_LS_BX_Command;
class CLASS(WBK_BX_Command): WBK_LS_BX_Command {
    SCOPE_PUBLIC;
    displayName = "BX Commando Droid Captain";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_BXs_WBK);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };

    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_BX_Diplomat): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid Diplomat";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Diplomat);

    uniformClass = QCLASS(CIS_Uniform_Droid_BX_Diplomat);
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\diplomat_body_co.paa"};
};

class WBK_LS_BX_Diplomat;
class CLASS(WBK_BX_Diplomat): WBK_LS_BX_Diplomat {
    SCOPE_PUBLIC;
    displayName = "BX Commando Droid Diplomat";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_BXs_WBK);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };

    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_BX_Security): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid Security";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Security);

    uniformClass = QCLASS(CIS_Uniform_Droid_BX_Security);
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\security_body_co.paa"};
};

class WBK_LS_BX_Security;
class CLASS(WBK_BX_Security): WBK_LS_BX_Security {
    SCOPE_PUBLIC;
    displayName = "BX Commando Droid Security";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_BXs_WBK);

    weapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };
    respawnMagazines[] = {
        ITEM_5(QCLASS(Mag_100rnd_E5)),
        ITEM_2("ls_mag_classC_thermalDet"),
        ITEM_3("3AS_SmokeWhite")
    };

    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class WBK_LS_BX_Sniper;
class CLASS(WBK_BX_Sniper): WBK_LS_BX_Sniper {
    SCOPE_PUBLIC;
    displayName = "BX Commando Droid Sniper";
    faction = QFACTION(CIS);
    editorSubcategory = QEDSUBCAT(CIS_BXs_WBK);

    weapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5S),
        "Throw",
        "Put"
    };

    magazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
    respawnMagazines[] = {
        ITEM_10(QCLASS(Mag_20rnd_E5S)),
        "ls_mag_classC_thermalDet"
    };
    linkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", DROID_LINKED_ITEMS};
};

class CLASS(CIS_Unit_Droid_BX_Security_Shielded): CLASS(CIS_Unit_Droid_BX_Security) {
    displayName = "BX Commando Droid Security (Shield)";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Security_Shielded);

    weapons[] = {
        QCLASS(E5_Shielded),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(E5_Shielded),
        "Throw",
        "Put"
    };
};

class CLASS(CIS_Unit_Droid_BX_Training): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid Training";
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Training);

    uniformClass = QCLASS(CIS_Uniform_Droid_BX_Training);
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\training_body_co.paa"};
};

class CLASS(Unit_Droid_BX): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid";
    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX);
    faction = QFACTION(KC);
    side = BLUFOR;
    modelSides[] = {BLUFOR};

    uniformClass = QCLASS(KC_Uniform_Droid_BX);
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\uniforms\KC_body_co.paa)};
};

class CLASS(Unit_Droid_BX_Captain): CLASS(CIS_Unit_Droid_BX) {
    displayName = "BX Commando Droid Captain";
    icon = "iconManLeader";
    editorSubcategory = QEDSUBCAT(INF_Droids);
    editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX_Captain);
    faction = QFACTION(KC);
    side = BLUFOR;
    modelSides[] = {BLUFOR};

    uniformClass = QCLASS(KC_Uniform_Droid_BX_Captain);
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\uniforms\KC_bx_captain_co.paa)};
};
