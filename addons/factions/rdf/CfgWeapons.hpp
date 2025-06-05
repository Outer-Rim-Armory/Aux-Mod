class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class CLASS(helmet_base): H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    class CLASS(rdfArmor_helmet): CLASS(helmet_base) {
        SCOPE_PUBLIC;

        displayName = "[RDF] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\enforcer\textures\helmet_urban_co.paa"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
            mass = 22;
        };
    };

    class CLASS(Arctic_Helmet_Base): CLASS(helmet_base) {
        SCOPE_PRIVATE;

        displayName = "[RDF] Arctic Helmet (Base)";

        model = "\z\tgf\addons\helmets\war_chief\war_chief.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\helmets\war_chief\data\camo1_co.paa",
            "\z\tgf\addons\helmets\war_chief\data\camo2_co.paa"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1","camo2"};
            uniformModel = "\z\tgf\addons\helmets\war_chief\war_chief.p3d";
            mass = 22;
        };
    };

    class CLASS(rdfArmor_helmet_marksman): CLASS(rdfArmor_helmet) {
        displayName = "[RDF] Marksman Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\ranger\textures\helmet_urban_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class CLASS(Arctic_Helmet): CLASS(Arctic_Helmet_Base) {
        SCOPE_PUBLIC;
        displayName = "[RDF] Arctic's Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_camo1_co.paa),
            "\z\tgf\addons\helmets\war_chief\data\camo2_co.paa"
        };

        EGVAR(armor,nvHelmetOff) = QCLASS(Arctic_Helmet);
        EGVAR(armor,nvHelmetOn) = QCLASS(Arctic_Helmet_Bacta);
    };

    class CLASS(Arctic_Helmet_Bacta): CLASS(Arctic_Helmet) {
        SCOPE_HIDDEN;
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_camo1_co.paa),
            QPATHTOF(rdf\data\visors\Bacta_camo2_co.paa)
        };
        hiddenSelectionsMaterials[] = {
            "",
            "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
        };
    };

    class tgf_helmets_pilot;
    class CLASS(Arctic_Pilot_Helmet): tgf_helmets_pilot {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Pilot Helmet";
        hiddenSelections[] = {"camo1","camo2","camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_Pilot_camo1_co.paa),
            "\z\tgf\addons\helmets\pilot\data\camo2_co.paa",
            "\z\tgf\addons\helmets\pilot\data\camo_co.paa"
        };
    };

    class tgf_helmets_traditional;
    class CLASS(Arctic_Traditional_Helmet): tgf_helmets_traditional {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Traditional Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_Traditional_camo1_co.paa),
            "\z\tgf\addons\helmets\traditional\data\camo2_co.paa"
        };
    };

    class tgf_helmets_heavy;
    class CLASS(Arctic_Heavy_Helmet): tgf_helmets_heavy {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Heavy Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_Heavy_camo1_co.paa),
            "\z\tgf\addons\helmets\heavy\data\camo2_co.paa"
        };
    };

    class tgf_helmets_viper;
    class CLASS(Arctic_Viper_Helmet): tgf_helmets_viper {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Viper Helmet";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_Viper_camo1_co.paa),
            "\z\tgf\addons\helmets\viper\data\camo2_co.paa"
        };
    };

    class tgf_helmets_viper_vet;
    class CLASS(Arctic_Viper_Vet_Helmet): tgf_helmets_viper_vet {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Viper Helmet (Veteran)";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\helmets\Arctic_Viper_Vet_camo1_co.paa),
            "\z\tgf\addons\helmets\viper_vet\data\camo2_co.paa"
        };
    };

    // TODO: Update when clone armor names are updated
    class ls_gar_phase2_uniform;
    class CLASS(uniform_base): ls_gar_phase2_uniform {
        class ItemInfo;
    };
    class CLASS(rdfArmor_uniform): CLASS(uniform_base) {
        SCOPE_PUBLIC;

        displayName = "[RDF] Uniform";
        picture = "\ls_armor_greenfor\uniform\mandalorian\_ui\icon_uniform_undersuit.paa";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(rdfArmor_unit_base);
            uniformType = "Neopren";
        };
    };

    class CLASS(Arctic_Undersuit): CLASS(uniform_base) {
        SCOPE_PUBLIC;
        displayName = "[RDF] Arctic's Undersuit";
        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\undersuit\arctic\Arctic_camo1_co.paa),
            "\z\tgf\addons\undersuit\data\camo2_co.paa"
            };

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Governor_Arctic);
            uniformType = "Neopren";
        };
    };

    class CLASS(Clan_Arctic_Undersuit): CLASS(uniform_base) {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Undersuit";
        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\undersuit\data\tex\camo1_white_co.paa",
            "\z\tgf\addons\undersuit\data\camo2_co.paa"
            };

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Arctic_Unit_Base);
            uniformType = "Neopren";
        };
    };

    class V_PlateCarrier1_rgr;
    class CLASS(vest_base): V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(rdfArmor_vest_light): CLASS(vest_base) {
        SCOPE_PUBLIC;

        displayName = "[RDF] Light Vest";

        model = "\sc_equipment\data\watchdog\wd_vest_light.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_guard_co.paa"};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_light.p3d";
            containerClass = "Supply250";
            mass = 60;

            SC_VEST_HITPOINTS_LIGHT;
        };
    };

    class CLASS(Arctic_Armour_Base): CLASS(vest_base) {
        SCOPE_PRIVATE;

        displayName = "[RDF] Arctic Armour (Base)";

        model = "\z\tgf\addons\armour\war_chief_armour\war_chief_armour.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\armour\war_chief_armour\data\camo1_co.paa",
            "\z\tgf\addons\armour\war_chief_armour\data\camo2_co.paa"
            };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo1","camo2"};
            uniformModel = "\z\tgf\addons\armour\war_chief_armour\war_chief_armour.p3d";
            containerClass = "Supply250";
            mass = 60;

            SC_VEST_HITPOINTS_HEAVY;
        };
    };

    class CLASS(rdfArmor_vest_medium): CLASS(rdfArmor_vest_light) {
        displayName = "[RDF] Medium Vest";
        model = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";
            containerClass = "Supply300";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(rdfArmor_vest_swat): CLASS(rdfArmor_vest_medium) {
        displayName = "[RDF] SWAT Vest";
        model = "\sc_equipment\data\marine\mr_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\marine\textures\vest_mp_co.paa",
            "\sc_equipment\data\marine\textures\legs_mp_co.paa"
        };

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\marine\mr_vest.p3d";
            hiddenSelections[] = {"camo", "camo1"};
        };
    };

    class CLASS(Arctic_Armour): CLASS(Arctic_Armour_Base) {
        SCOPE_PUBLIC;
        displayName = "[RDF] Arctic's Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\armour\arctic\Arctic_camo1_co.paa),
            QPATHTOF(rdf\data\armour\arctic\Arctic_camo2_co.paa)
        };
    };

    class tgf_armour_heavy_armour;
    class CLASS(Arctic_Heavy_Armour): tgf_armour_heavy_armour {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Heavy Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\armour\heavy\Arctic_Heavy_Armour_co.paa),
            QPATHTOF(rdf\data\armour\heavy\Arctic_Heavy_Bracer_co.paa)
        };
    };

    class tgf_armour_light_armour;
    class CLASS(Arctic_Light_Armour): tgf_armour_light_armour {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Light Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\armour\light\Arctic_Light_Armour_co.paa),
            QPATHTOF(rdf\data\armour\light\Arctic_Light_Bracer_co.paa)
        };
    };

    class tgf_armour_medium_armour;
    class CLASS(Arctic_Medium_Armour): tgf_armour_medium_armour {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Medium Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\armour\med\Arctic_Medium_Armour_co.paa),
            QPATHTOF(rdf\data\armour\med\Arctic_Medium_Bracer_co.paa)
        };
    };

    class tgf_armour_super_light_armour;
    class CLASS(Arctic_Recon_Armour): tgf_armour_super_light_armour {
        SCOPE_PUBLIC;
        displayName = "[RDF] Clan Arctic Recon Armour";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(rdf\data\armour\recon\Arctic_Recon_Armour_co.paa),
            QPATHTOF(rdf\data\armour\recon\Arctic_Recon_Bracer_co.paa)
        };
    };
};