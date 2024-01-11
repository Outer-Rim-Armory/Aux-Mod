class CfgVehicles
{
    class CLASS(OPFOR_Unit_Base);
    class CLASS(CIS_Unit_Base): CLASS(OPFOR_Unit_Base)
    {
        faction = QCLASS(Faction_CIS);
    };
    class CLASS(CIS_Unit_Droid_Base): CLASS(CIS_Unit_Base)
    {
        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        hiddenSelections[] = {"camo1"};

        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = {"", "Head_NATO"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        weapons[] =
        {
            QCLASS(E5),
            "",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            QCLASS(E5),
            "",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            ITEM_5(QCLASS(Mag_100rnd_E5))/*,
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")*/
        };
        respawnMagazines[] =
        {
            ITEM_5(QCLASS(Mag_100rnd_E5))/*,
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")*/
        };

        linkedItems[] =
        {
            "JLTS_NVG_droid_chip_1", "SWLB_comlink_droid", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "JLTS_NVG_droid_chip_1", "SWLB_comlink_droid", LINKED_ITEMS
        };

        class SoundBleeding {breath[] = {};};
        class SoundBreath {breath[] = {};};
        class SoundBurning {breath[] = {};};
        class SoundChoke {breath[] = {};};
        class SoundDrown {breath[] = {};};
        class SoundEnvironExt
        {
            generic[] =
            {
                {"walk", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 30}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 45}}
            };
        };
        class SoundEquipment
        {
            soldier[] =
            {
                {"walk", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 30}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 45}}
            };
        };
        class SoundInjured {breath[] = {};};
        class SoundRecovered {breath[] = {};};
    };

    class CLASS(CIS_Unit_Droid_B1): CLASS(CIS_Unit_Droid_Base)
    {
        SCOPE_PUBLIC;

        displayName = "B1 Battle Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1);

        editorSubcategory = QCLASS(EdSubCat_Infantry);
        editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";

        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"};

        backpack = "JLTS_B1_backpack";
    };

    class CLASS(CIS_Unit_Droid_B1_Crew): CLASS(CIS_Unit_Droid_Base)
    {
        SCOPE_PUBLIC;

        displayName = "B1 Crew Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Crew);

        editorSubcategory = QCLASS(EdSubCat_Crewmen);
        editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Crew.jpg";

        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"};

        backpack = "JLTS_B1_backpack";
    };

    class CLASS(CIS_Unit_Droid_BX): CLASS(CIS_Unit_Droid_Base)
    {
        SCOPE_PUBLIC;

        editorSubcategory = QCLASS(EdSubCat_SpecialForces);
        editorPreview = QPATHTOF(cis\data\previews\CLASS(CIS_Unit_Droid_BX).jpg);

        displayName = "BX Commando Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_BX);

        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};

        magazines[] =
        {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        items[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };
        respawnItems[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };

        linkedItems[] =
        {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
    };

    class CLASS(AAT_Base);
    class CLASS(AAT_CIS): CLASS(AAT_Base)
    {
        SCOPE_PUBLIC;

        faction = QCLASS(Faction_CIS);

        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
        typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
        editorPreview = QPATHTOEF(vehicles,land\aat\data\previews\CLASS(AAT_Blue).jpg);
    };
};