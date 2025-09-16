class CfgWeapons {
    class ls_helmet_base;
    class CLASS(INDEP_Helmet_Base): ls_helmet_base {
        class ItemInfo;
    };
    class CLASS(SC_Helmet): CLASS(INDEP_Helmet_Base) {
        SCOPE_PUBLIC;

        displayName = "[SC] Helmet";

        model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
        hiddenSelectionsTextures[] = {
            "\optre_unsc_units\army\data\helmet_snow_co.paa",
            "\optre_unsc_units\army\data\helmet_visor_ca.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa"
        };
        picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_vac.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        };
    };

    class CLASS(SC_Helmet_SL): CLASS(SC_Helmet) {
        displayName = "[SC] Squad Leader Helmet";

        model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
        hiddenSelectionsTextures[] = {
            "\optre_unsc_units\army\data\helmet_snow_co.paa",
            "\optre_unsc_units\army\data\helmet_visor_co.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "\optre_unsc_units\army\data\soft_packs_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        };
    };

    class CLASS(SC_Helmet_T2): CLASS(SC_Helmet) {
        displayName = "[SC] Veteran Helmet";

        model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
        hiddenSelectionsTextures[] = {
            "\optre_unsc_units\army\data\custom\odst_helmet_leigh_co.paa",
            "\optre_unsc_units\army\data\odst_helmet_visor_co.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "\optre_unsc_units\army\data\soft_packs_co.paa"
        };
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
            uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
        };
    };

    class CLASS(SC_Helmet_T3): CLASS(SC_Helmet) {
        displayName = "[SC] Elite Helmet";

        model = "\MDF\MDFHelmet.p3d";
        hhiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MDF\MDFHelmet\Black\Material.001_CO.paa"};

        subItems[] = {QCLASS(cloneNvg_chip)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
            uniformModel = "\MDF\MDFHelmet.p3d";
        };
    };

    class ls_uniform_base;
    class CLASS(INDEP_Uniform_Base): ls_uniform_base {
        class ItemInfo;
    };
    class CLASS(SC_Uniform): CLASS(INDEP_Uniform_Base) {
        SCOPE_PUBLIC;

        displayName = "[SC] Uniform";
        picture = "\ls_armor_greenfor\uniform\mandalorian\_ui\icon_uniform_undersuit.paa";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(SC_Unit_Base);
        };
    };

    class CLASS(SC_Uniform_Vex): CLASS(SC_Uniform) {
        displayName = "[SC] General Vex's Armor";
        picture = "\armor_unit\Ui\Merc_Armor_Tayrus.paa";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(SC_Unit_Vex);
        };
    };

    class V_PlateCarrier1_rgr;
    class ls_vest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(INDEP_Vest_Base): ls_vest_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo;
        };
    };
    class CLASS(SC_Vest): CLASS(INDEP_Vest_Base) {
        SCOPE_PUBLIC;

        displayName = "[SC] Light Vest";
        descriptionShort = "Armor Level III";

        model = "\MDF\MDFTorso.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "\MDF\MDFTorso\White\DefaultMaterial_CO.paa",
            "\MDF\MDFLegs\White\DefaultMaterial_CO.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\MDF\MDFTorso.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen;
                class Chest;
                class Diaphragm;
            };
        };
    };

    class CLASS(SC_Vest_Medium): CLASS(SC_Vest) {
        displayName = "[SC] Medium Vest";
        descriptionShort = "Armor Level IV";
        model = "\MDF\MDFMedium.p3d";

        class ItemInfo: ItemInfo {
            uniformModel = "\MDF\MDFMedium.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 20;
                };
                class Chest: Chest {
                    armor = 20;
                };
                class Diaphragm: Diaphragm {
                    armor = 20;
                };
            };
        };
    };

    class CLASS(SC_Vest_Heavy): CLASS(SC_Vest) {
        displayName = "[SC] Heavy Vest";
        descriptionShort = "Armor Level V";
        model = "\MDF\MDFHeavy.p3d";
        hiddenSelectionsTextures[] = {"\MDF\MDFTorso\Black\DefaultMaterial_CO.paa", "MDF\MDFLegs\Black\DefaultMaterial_CO.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\MDF\MDFHeavy.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Abdomen: Abdomen {
                    armor = 25;
                };
                class Chest: Chest {
                    armor = 25;
                };
                class Diaphragm: Diaphragm {
                    armor = 25;
                };
            };
        };
    };
};
