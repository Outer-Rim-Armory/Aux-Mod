class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class CLASS(helmet_base): H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    class CLASS(Bel_Helmet_Base): CLASS(helmet_base) {
        SCOPE_PRIVATE;

        displayName = "[CB] Bel Helmet (Base)";

        model = "\ls\core\addons\characters_mandalorian\helmets\nightowl\ls_helmet_mandalorian_nightowl.p3d";
        hiddenSelections[] = {"camo1","visor","neckTex"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_mandalorian\helmets\nightowl\data\helmet_co.paa",
            "\ls\core\addons\characters_mandalorian\helmets\nightowl\data\visor_co.paa",
            ""
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1","visor","neckTex"};
            uniformModel = "\ls\core\addons\characters_mandalorian\helmets\nightowl\ls_helmet_mandalorian_nightowl.p3d";
            mass = 22;
        };
    };

    class CLASS(Mommy_Helmet): CLASS(Bel_Helmet_Base) {
        SCOPE_PUBLIC;
        displayName = "[CB] Officer Mommy's Helmet";
        hiddenSelections[] = {"camo1","visor","neckTex"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Mommy_Helmet_camo1_co.paa),
            "\ls\core\addons\characters_mandalorian\helmets\nightowl\data\visor_co.paa",
            ""
        };

        EGVAR(armor,nvHelmetOff) = QCLASS(Mommy_Helmet);
        EGVAR(armor,nvHelmetOn) = QCLASS(Mommy_Helmet_Lust);
    };

    class CLASS(Mommy_Helmet_Lust): CLASS(Mommy_Helmet) {
        SCOPE_HIDDEN;
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Mommy_Helmet_camo1_co.paa),
            QPATHTOF(cb\data\visors\Lust_Visor_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            "",
            "\a3\characters_f_bootcbmp\common\data\vrarmoremmisive.rvmat"
        };
    };

    class tgf_helmets_pilot;
    class CLASS(Bel_Pilot_Helmet): tgf_helmets_pilot {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Pilot Helmet";
        hiddenSelections[] = {"camo1","camo2","camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Pilot_camo1_co.paa),
            "\z\tgf\addons\helmets\pilot\data\camo2_co.paa",
            "\z\tgf\addons\helmets\pilot\data\camo_co.paa"
        };
    };

    class tgf_helmets_traditional;
    class CLASS(Bel_Traditional_Helmet): tgf_helmets_traditional {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Traditional Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Traditional_camo1_co.paa),
            "\z\tgf\addons\helmets\traditional\data\camo2_co.paa"
        };
    };

    class tgf_helmets_heavy;
    class CLASS(Bel_Heavy_Helmet): tgf_helmets_heavy {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Heavy Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Heavy_camo1_co.paa),
            "\z\tgf\addons\helmets\heavy\data\camo2_co.paa"
        };
    };

    class tgf_helmets_Veteran;
    class CLASS(Bel_Veteran_Helmet): tgf_helmets_Veteran {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Veteran Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Veteran_camo1_co.paa),
            "\z\tgf\addons\helmets\veteran\data\camo2_co.paa"
        };
    };

    class tgf_helmets_viper;
    class CLASS(Bel_Viper_Helmet): tgf_helmets_viper {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Viper Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Viper_camo1_co.paa),
            "\z\tgf\addons\helmets\viper\data\camo2_co.paa"
        };
    };

    class tgf_helmets_viper_vet;
    class CLASS(Bel_Viper_Vet_Helmet): tgf_helmets_viper_vet {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Viper Helmet (Veteran)";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_Viper_Vet_camo1_co.paa),
            "\z\tgf\addons\helmets\viper_vet\data\camo2_co.paa"
        };
    };

    class tgf_helmets_war_chief;
    class CLASS(Bel_War_Chief_Helmet): tgf_helmets_war_chief {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel War Chief Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\helmets\Bel_War_Chief_camo1_co.paa),
        };
    };

    // TODO: Update when clone armor names are updated
    class ls_gar_phase2_uniform;
    class CLASS(uniform_base): ls_gar_phase2_uniform {
        class ItemInfo;
    };

    class CLASS(Clan_Bel_Undersuit): CLASS(uniform_base) {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Undersuit";
        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"cbmo1","cbmo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\undersuit\Bel_cbmo1_co.paa),
            "\z\tgf\addons\undersuit\data\camo2_co.paa"
            };

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Bel_Unit_Base);
            uniformType = "Neopren";
        };
    };

    class V_Platecbrrier1_rgr;
    class CLASS(vest_base): V_Platecbrrier1_rgr {
        class ItemInfo;
    };
    class CLASS(Bel_Armour_Base): CLASS(vest_base) {
        SCOPE_PRIVATE;

        displayName = "[CB] Bel Armour (Base)";

        model = "\z\tgf\addons\armour\super_light_armour\super_light_armour.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\armour\super_light_armour\data\camo1_co.paa",
            "\z\tgf\addons\armour\super_light_armour\data\camo2_co.paa"
            };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1","camo2"};
            uniformModel = "\z\tgf\addons\armour\super_light_armour\super_light_armour.p3d";
            containerClass = "Supply250";
            mass = 60;

            SC_VEST_HITPOINTS_HEAVY;
        };
    };

    class tgf_armour_heavy_armour;
    class CLASS(Bel_Heavy_Armour): tgf_armour_heavy_armour {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Heavy Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\armour\heavy\Bel_Heavy_Armour_co.paa),
            QPATHTOF(cb\data\armour\heavy\Bel_Heavy_Bracer_co.paa)
        };
    };

    class tgf_armour_light_armour;
    class CLASS(Bel_Light_Armour): tgf_armour_light_armour {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Light Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\armour\light\Bel_Light_Armour_co.paa),
            QPATHTOF(cb\data\armour\light\Bel_Light_Bracer_co.paa)
        };
    };

    class tgf_armour_medium_armour;
    class CLASS(Bel_Medium_Armour): tgf_armour_medium_armour {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Medium Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\armour\med\Bel_Medium_Armour_co.paa),
            QPATHTOF(cb\data\armour\med\Bel_Medium_Bracer_co.paa)
        };
    };

    class tgf_armour_super_light_armour;
    class CLASS(Bel_Recon_Armour): tgf_armour_super_light_armour {
        SCOPE_PUBLIC;
        displayName = "[CB] Clan Bel Recon Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\armour\recon\Bel_Recon_Armour_co.paa),
            QPATHTOF(cb\data\armour\recon\Bel_Recon_Bracer_co.paa)
        };
    };

    class CLASS(Mommy_Armour): tgf_armour_super_light_armour {
        SCOPE_PUBLIC;
        displayName = "[CB] Officer Mommy's Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\armour\mommy\Mommy_camo1_co.paa),
            QPATHTOF(cb\data\armour\mommy\Mommy_camo2_co.paa)
        };
    };
};
