class CfgWeapons {
    class ls_redforHelmet_base;
    class CLASS(OPFOR_Helmet_Base): ls_redforHelmet_base {
        class ItemInfo;
    };
    class CLASS(TU_Helmet): CLASS(OPFOR_Helmet_Base) {
        SCOPE_PUBLIC;

        displayName = "[TU] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_desert_co.paa"};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
        };
    };

    class CLASS(TU_Helmet_Assault): CLASS(TU_Helmet) {
        displayName = "[TU] Assault Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\ranger\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class CLASS(TU_Helmet_Visor): CLASS(TU_Helmet) {
        displayName = "[TU] Visor Helmet";

        model = "\sc_equipment\data\wasp\wp_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\wasp\wp_helmet.p3d";
        };
    };

    class CLASS(TU_Helmet_Visor_Goggles): CLASS(TU_Helmet_Visor) {
        displayName = "[TU] Visor Helmet (Goggles)";
        model = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\wasp\textures\helmet_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        };
    };

    class CLASS(TU_Helmet_Heavy): CLASS(TU_Helmet) {
        displayName = "[TU] Heavy Helmet";

        model = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\helmet_desert_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        };
    };

    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base {
        class ItemInfo;
    };
    class CLASS(TU_Uniform): CLASS(OPFOR_Uniform_Base) {
        SCOPE_PUBLIC;

        displayName = "[TU] Uniform";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(TU_Unit_Base);
        };
    };

    class ls_redforVest_base;
    class CLASS(OPFOR_Vest_Base): ls_redforVest_base {
        class ItemInfo;
    };
    class CLASS(TU_Vest): CLASS(OPFOR_Vest_Base) {
        SCOPE_PUBLIC;

        displayName = "[TU] Light Vest";

        model = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_desert_co.paa"};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";

            SC_VEST_HITPOINTS_LIGHT;
        };
    };

    class CLASS(TU_Vest_Medium): CLASS(TU_Vest) {
        displayName = "[TU] Medium Vest";
        descriptionShort = "Armor Level IV";

        model = "\sc_equipment\data\marine\mr_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\marine\textures\vest_co.paa",
            "\sc_equipment\data\marine\textures\legs_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\marine\mr_vest.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(TU_Vest_AssaultMedium): CLASS(TU_Vest) {
        displayName = "[TU] Medium Assault Vest";
        descriptionShort = "Armor Level IV";
        model = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(TU_Vest_AssaultHeavy): CLASS(TU_Vest) {
        displayName = "[TU] Heavy Assault Vest";
        descriptionShort = "Armor Level V";
        model = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";

            SC_VEST_HITPOINTS_HEAVY;
        };
    };
};