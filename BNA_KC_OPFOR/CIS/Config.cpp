#include "CfgPatches.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_OPFOR_Uniform_Base: ls_redforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Uniform_Droid_Base: BNA_KC_OPFOR_Uniform_Base
    {

    };
    class BNA_KC_CIS_Uniform_B1_Droid: BNA_KC_CIS_Uniform_Droid_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] B1 Battle Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_B1_Droid";
        };
    };

    class BNA_KC_CIS_Uniform_BX_Droid: BNA_KC_CIS_Uniform_Droid_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_BX_Droid";
        };
    };

    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Uniform_BX_Droid_Actor: BNA_KC_Uniform_Base
    {
        displayName = "[CIS] BX Commando Droid (Actor)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_CIS_Unit_BX_Droid_Actor";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class ls_redforVest_base: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        };
    };
    class BNA_KC_CIS_Vest_BX_Droid: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[CIS] BX Commando Droid [Gun Vest]";
        model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";

        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
            };
            uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
        };
    };
    class BNA_KC_CIS_Vest_BX_Droid_Melee: BNA_KC_CIS_Vest_BX_Droid
    {
        displayName = "[CIS] BX Commando Droid [Melee Vest]";
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };

    class SWLB_clone_basic_armor;
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class BNA_KC_CIS_Vest_BX_Droid_Actor: BNA_KC_Vest_Basic
    {
        displayName = "[CIS] BX Commando Droid (Actor)";
        picture = "\ls_data\icons\LS_logo_ca.paa";
    };
    class BNA_KC_CIS_Vest_BX_Droid_Melee_Actor: BNA_KC_CIS_Vest_BX_Droid_Actor
    {
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_CIS_Unit_Droid_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_CIS";

        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        genericNames = "ls_droid_b1";
        identityTypes[] = {"lsd_voice_b1Droid"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";
        canBleed = 0;

        weapons[] =
        {
            "BNA_KC_E5",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "BNA_KC_E5",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };

        linkedItems[] = {"JLTS_NVG_droid_chip_1", "SWLB_comlink_droid"};
        respawnLinkedItems[] = {"JLTS_NVG_droid_chip_1", "SWLB_comlink_droid"};

        class SoundBleeding {breath[] = {};};
        class SoundBreath {breath[] = {};};
        class SoundBurning {breath[] = {};};
        class SoundChoke {breath[] = {};};
        class SoundDrown {breath[] = {};};
        class SoundEnvironExt
        {
            generic[] =
            {
                {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
        };
        class SoundEquipment
        {
            generic[] =
            {
                {"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}},
                {"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}},
                {"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}},
                {"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}
            };
        };
        class SoundInjured {breath[] = {};};
        class SoundRecovered {breath[] = {};};

        class HitPoints
        {
            class ACE_HDBracket
            {
                armor = 1;
                depends = "HitHead";
                explosionShielding = 1;
                material = -1;
                minimalHit = 0;
                name = "head";
                passThrough = 0;
                radius = 1;
                visual = "";
            };
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 8;
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 6;
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 6;
                material = -1;
                name = "spine2";
                passThrough = 0.33;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 8;
                material = -1;
                name = "spine3";
                passThrough = 0.33;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 6;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 6;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 6;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 3;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm
            {
                armor = 6;
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 6;
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
        };
    };

    class BNA_KC_CIS_Unit_B1_Droid: BNA_KC_CIS_Unit_Droid_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "B1 Battle Droid";

        // Editor Properties
        editorSubcategory = "BNA_KC_SubCat_CIS_Infantry";
        editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";

        uniformClass = "BNA_KC_CIS_Uniform_B1_Droid";
        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"};

        backpack = "JLTS_B1_backpack";
    };

    class BNA_KC_CIS_Unit_BX_Droid: BNA_KC_CIS_Unit_Droid_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] BX Commando Droid";

        // Editor Properties
        editorSubcategory = "BNA_KC_SubCat_CIS_SpecOps";
        editorPreview = "\BNA_KC_OPFOR\CIS\Data\Textures\Previews\BX_Droid.jpg";

        uniformClass = "BNA_KC_CIS_Uniform_BX_Droid";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};

        weapons[] =
        {
            "BNA_KC_E5",
            "SWLW_RG4D",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "BNA_KC_E5",
            "SWLW_RG4D",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            ITEM_2("SWLW_RG4D_Mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_E5"),
            ITEM_2("SWLW_RG4D_Mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
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

        linkedItems[] = {"BNA_KC_CIS_Vest_BX_Droid", "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid"};
        respawnLinkedItems[] = {"BNA_KC_CIS_Vest_BX_Droid", "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid"};
    };

    class BNA_KC_Unit_Base;
    class BNA_KC_CIS_Unit_BX_Droid_Actor: BNA_KC_Unit_Base
    {
        scope = 1;
        scopeCurator = 0;

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        uniformClass = "BNA_KC_CIS_Uniform_BX_Droid_Actor";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};
    };
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_CIS
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] CIS";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_CIS_Infantry
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry";
    };

    class BNA_KC_SubCat_CIS_SpecOps: BNA_KC_SubCat_CIS_Infantry
    {
        displayName = "Spec Ops";
    };

    class BNA_KC_SubCat_CIS_Tanks: BNA_KC_SubCat_CIS_Infantry
    {
        displayName = "Tanks";
    };
};