class CfgWeapons {
    class ls_greenforUniform_base;
    class CLASS(INDEP_Uniform_Base): ls_greenforUniform_base {
        class ItemInfo;
    };
    class FACTION(mandalorian_uniform_base): CLASS(INDEP_Uniform_Base) {
        SCOPE_PUBLIC;
    };

    class V_PlateCarrier1_rgr;
    class CLASS(vest_base): V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(mandalorian_vest_base): CLASS(vest_base) {
        class ItemInfo: ItemInfo {
            mass = 80;
            vestType = "Rebreather";
        };
    };

    class CLASS(mandalorian_vest_medium): CLASS(mandalorian_vest_base) {
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

    class CLASS(mandalorian_vest_medium_Dart): CLASS(mandalorian_vest_medium) {
        displayName = "[KC] Medium Mandalorian Armor ('Dart')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(mandalorians\data\vests\medium\Dart_camo1_co.paa),
            QPATHTOF(mandalorians\data\vests\medium\Dart_camo2_co.paa)
        };
    };
};