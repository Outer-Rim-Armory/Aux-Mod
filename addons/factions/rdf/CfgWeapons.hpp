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

    class SC_Vest_WD_Light_Guard;
    class CLASS(vest_base): SC_Vest_WD_Light_Guard {
        class ItemInfo;
    };
    class SC_Vest_WD_Medium_Guard;
    class CLASS(medium_vest_base): SC_Vest_WD_Medium_Guard {
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

    class CLASS(rdfArmor_vest_medium): CLASS(medium_vest_base) {
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
};
