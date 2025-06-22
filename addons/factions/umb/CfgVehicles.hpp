class CfgVehicles {
    class CLASS(OPFOR_Unit_Base);
    class CLASS(UMB_Unit_Base): CLASS(OPFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(UMB);
        identityTypes[] = {"LanguageENG_F", "Head_NATO"};

        genericNames = QCLASS(UMB_Militia);

        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        uniformClass = "tgf_undersuit_uniform_grey_seal";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\z\tgf\addons\undersuit\data\tex\camo1_grey_co.paa","\z\tgf\addons\undersuit\data\camo2_co.paa"};
    };

    class CLASS(UMB_Unit_Rifleman): CLASS(UMB_Unit_Base) {
        SCOPE_PUBLIC;

        displayName = "Rifleman";

        weapons[] = {QCLASS(UMB36), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(UMB36), "", "Throw", "Put"};

        magazines[] = {ITEM_11(QCLASS(Mag_120Rnd_UMB36))};
        respawnMagazines[] = {ITEM_11(QCLASS(Mag_120Rnd_UMB36))};
        items[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        linkedItems[] = {"RN_SFlat_Helmet_V", "RN_SFlat_Armor", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {"RN_SFlat_Helmet_V", "RN_SFlat_Armor", LINKED_ITEMS_RADIO};
        backpack = QCLASS(UMB_Backpack_Predef_Rifleman);
    };

    class CLASS(backpack_base);
    class CLASS(UMB_Backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[UMB] Backpack";

        model = "";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        picture = "";
        maximumLoad = 600;
    };
    class CLASS(UMB_Backpack_Predef_Rifleman): CLASS(UMB_Backpack) {
        SCOPE_PRIVATE;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_120Rnd_UMB36),10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };
};