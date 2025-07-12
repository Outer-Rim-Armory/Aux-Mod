class CfgWeapons {
    class ls_helmet_base;
    class CLASS(OPFOR_Helmet_Base): ls_helmet_base {
        class ItemInfo;
    };
    class CLASS(EPF_Helmet): CLASS(OPFOR_Helmet_Base) {
        SCOPE_PUBLIC;

        displayName = "[EPF] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_olive_co.paa"};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
        };
    };

    class CLASS(EPF_Helmet_Assault): CLASS(EPF_Helmet) {
        displayName = "[EPF] Assault Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\ranger\textures\helmet_green_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class CLASS(EPF_Helmet_Visor): CLASS(EPF_Helmet) {
        displayName = "[EPF] Visor Helmet";

        model = "\sc_equipment\data\wasp\wp_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\helmet_green_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\wasp\wp_helmet.p3d";
        };
    };

    class CLASS(EPF_Helmet_Visor_Goggles): CLASS(EPF_Helmet_Visor) {
        displayName = "[EPF] Visor Helmet (Goggles)";

        model = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\wasp\textures\helmet_green_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        };
    };

    class CLASS(EPF_Helmet_Heavy): CLASS(EPF_Helmet) {
        displayName = "[EPF] Heavy Helmet";

        model = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        };
    };

    class CLASS(EPF_Helmet_Pilot): CLASS(EPF_Helmet) {
        displayName = "[EPF] Pilot Helmet";

        model = "\sc_equipment\data\ronin\ro_helmet.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\ronin\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\ronin\ro_helmet.p3d";
        };
    };

    class CLASS(EPF_Helmet_Guard): CLASS(EPF_Helmet) {
        displayName = "[EPF] Guard Helmet";

        model = "MDF\MDFHelmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"MDFEA_Equipment\Helmet\MDF_Helm_OD.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "MDF\MDFHelmet.p3d";
        };
    };

    class CLASS(EPF_Helmet_Presidente): CLASS(EPF_Helmet) {
        displayName = "[EPF] El Presidente Cap";
        model = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_US_F_CA.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        };
    };

    class CLASS(EPF_Helmet_General): CLASS(EPF_Helmet_Presidente) {
        displayName = "[EPF] El General Cap";
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_AAF_F_CA.paa";
    };

    class ls_uniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_uniform_base {
        class ItemInfo;
    };
    class CLASS(EPF_Uniform): CLASS(OPFOR_Uniform_Base) {
        SCOPE_PUBLIC;

        displayName = "[EPF] Uniform";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(EPF_Unit_Base);
        };
    };

    class CLASS(EPF_Uniform_Presidente): CLASS(EPF_Uniform) {
        displayName = "[EPF] El Presidente Uniform";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(EPF_Unit_Presidente);
        };
    };

    class CLASS(EPF_Uniform_General): CLASS(EPF_Uniform) {
        displayName = "[EPF] El General Uniform";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(EPF_Unit_General);
        };
    };

    class ls_vest_base;
    class CLASS(OPFOR_Vest_Base): ls_vest_base {
        class ItemInfo;
    };
    class CLASS(EPF_Vest): CLASS(OPFOR_Vest_Base) {
        SCOPE_PUBLIC;

        displayName = "[EPF] Light Vest";

        model = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";

            SC_VEST_HITPOINTS_LIGHT;
        };
    };

    class CLASS(EPF_Vest_Medium): CLASS(EPF_Vest) {
        displayName = "[EPF] Medium Vest";
        descriptionShort = "Armor Level IV";

        model = "\sc_equipment\data\marine\mr_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\marine\textures\vest_green_co.paa",
            "\sc_equipment\data\marine\textures\legs_green_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\marine\mr_vest.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(EPF_Vest_AssaultMedium): CLASS(EPF_Vest) {
        displayName = "[EPF] Medium Assault Vest";
        descriptionShort = "Armor Level IV";

        model = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(EPF_Vest_AssaultHeavy): CLASS(EPF_Vest) {
        displayName = "[EPF] Heavy Assault Vest";
        descriptionShort = "Armor Level V";

        model = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";

            SC_VEST_HITPOINTS_HEAVY;
        };
    };

    class CLASS(EPF_Vest_General): CLASS(EPF_Vest) {
        displayName = "[EPF] El General Vest";
        model = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\samurai\textures\torso_black_co.paa",
            "\sc_equipment\data\samurai\textures\legs_black_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        };
    };

    class CLASS(EPF_Vest_Guard): CLASS(EPF_Vest) {
        displayName = "[EPF] Guard Vest";
        descriptionShort = "Armor Level V";

        model = "MDF\MDFHeavy.p3d";
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {
            "MDFEA_Equipment\Vest\MDF_Torso_OD.paa",
            "MDFEA_Equipment\Legs\MDF_Legs_OD.paa"
            };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo","camo1"};
            uniformModel = "MDF\MDFHeavy.p3d";

            SC_VEST_HITPOINTS_HEAVY;
        };
    };
};
