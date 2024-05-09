class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class CLASS(helmet_base): H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    class CLASS(mandalorianHelmet_base): CLASS(helmet_base) {
        class ItemInfo: ItemInfo {};
    };

    class CLASS(mandalorianHelmet_traditional): CLASS(mandalorianHelmet_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Traditional Mandalorian Helmet";

        model = "\z\tgf\addons\helmets\traditional\traditional_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\helmets\traditional\data\camo1_co.paa",
            "\z\tgf\addons\helmets\traditional\data\camo2_co.paa"
        };
        picture = "\z\tgf\addons\helmets\traditional\data\traditional_helmet.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\z\tgf\addons\helmets\traditional\traditional_helmet.p3d";
        };
    };

    class CLASS(mandalorianHelmet_traditional_Dart): CLASS(mandalorianHelmet_traditional) {
        displayName = "[KC] Traditional Mandalorian Helmet ('Dart')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(mandalorians\data\helmets\traditional\Dart_camo1_co.paa),
            QPATHTOF(mandalorians\data\helmets\traditional\Dart_camo2_co.paa)
        };
    };

    class ls_greenforUniform_base;
    class CLASS(INDEP_Uniform_Base): ls_greenforUniform_base {
        class ItemInfo;
    };
    class CLASS(mandalorianUniform_base): CLASS(INDEP_Uniform_Base) {
        SCOPE_PUBLIC;
    };

    class V_PlateCarrier1_rgr;
    class CLASS(vest_base): V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(mandalorianVest_base): CLASS(vest_base) {
        class ItemInfo: ItemInfo {
            mass = 80;
            vestType = "Rebreather";
        };
    };

    class CLASS(mandalorianVest_medium): CLASS(mandalorianVest_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Medium Mandalorian Armor";
        descriptionShort = "Armor Level III";

        model = "\z\tgf\addons\armour\medium_armour\medium_armour.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\armour\medium_armour\data\camo1_co.paa",
            "\z\tgf\addons\armour\medium_armour\data\camo2_co.paa"
        };
        picture = "\z\tgf\addons\armour\medium_armour\data\Medium_Armour.paa";

        class ItemInfo: ItemInfo {
            uniformModel = "\z\tgf\addons\armour\medium_armour\medium_armour.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
            class HitpointsprotectionInfo {
                class Neck {
                    hitPointName = "HitNeck";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Chest {
                    hitPointName = "HitChest";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Diaphragm {
                    hitPointName = "HitDiaphragm";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Abdomen {
                    hitPointName = "HitAbdomen";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Pelvis {
                    hitPointName = "HitPelvis";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Arms {
                    hitPointName = "HitArms";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Hands {
                    hitPointName = "HitHands";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };

                class Legs {
                    hitPointName = "HitLegs";
                    armor = 10;
                    explosionshielding = 10;
                    passThrough = 0.3;
                };
            };
        };
    };

    class CLASS(mandalorianVest_medium_Dart): CLASS(mandalorianVest_medium) {
        displayName = "[KC] Medium Mandalorian Armor ('Dart')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(mandalorians\data\vests\medium\Dart_camo1_co.paa),
            QPATHTOF(mandalorians\data\vests\medium\Dart_camo2_co.paa)
        };
    };

    class NVGoggles;
    class CLASS(nvg_base): NVGoggles {
        class ItemInfo;
    };
    class CLASS(mandalorianNvg_base): CLASS(nvg_base) {
        class ItemInfo: ItemInfo {
            mass = 10;
        };
    };

    class CLASS(mandalorianNvg_rangefinder): CLASS(mandalorianNvg_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Mandalorian Rangefinder";

        visionMode[] = {"Normal", "NVG", "TI"};

        model = "\z\tgf\addons\nvg\rangefinder_r\rangefinder_off_r.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\nvg\rangefinder_r\data\camo1_co.paa"
        };
        picture = "\z\tgf\addons\nvg\rangefinder_r\data\mando_range.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\z\tgf\addons\nvg\rangefinder_r\rangefinder_on_r.p3d";
            modelOff = "\z\tgf\addons\nvg\rangefinder_r\rangefinder_off_r.p3d";
        };
    };

    class CLASS(mandalorianNvg_rangefinder_Dart): CLASS(mandalorianNvg_rangefinder) {
        SCOPE_PUBLIC;
        displayName = "[KC] Mandalorian Rangefinder ('Dart')";

        hiddenSelectionsTextures[] = {
            QPATHTOF(mandalorians\data\nvgs\rangefinder\Dart_camo1_co.paa)
        };
    };
};