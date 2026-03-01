class CfgVehicles {
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(TK_Unit_Base): CLASS(BLUFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(TK);
        uniformClass = "TK_trooper_armor_uniform";
        genericNames = QCLASS(TK_Trooper);
        identityTypes[] = {"LanguageENG_F", "Head_NATO", QCLASS(TK)};

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {
            "\armwars\gr_tktrooper\data\tk_trooper_helmet_vest_co.paa",
            "\armwars\gr_tktrooper\data\tk_trooper_arms_legs_co.paa"
        };

        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "Throw",
            "Put"
        };
        magazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
        };
        respawnItems[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet")
        };
    };

    class CLASS(TK_Trooper): CLASS(TK_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "01: TK Trooper";
        editorSubcategory = QEDSUBCAT(TK_Trooper);

        linkedItems[] = {"TK_trooper_helmet",QCLASS(Vest_Basic),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {"TK_trooper_helmet",QCLASS(Vest_Basic),LINKED_ITEMS_RADIO};
    };

    class CLASS(TK_AT_Trooper): CLASS(TK_Trooper) {
        displayName = "02: TK Trooper (AT)";

        magazines[] = {
            // Ammo
            ITEM_5(QCLASS(Mag_1Rnd_RPS7_AT)),
        };
        respawnMagazines[] = {
            // Ammo
            ITEM_5(QCLASS(Mag_1Rnd_RPS7_AT)),
        };

        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            QCLASS(RPS7),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            QCLASS(RPS7),
            "Throw",
            "Put"
        };
    };

    class CLASS(TK_Officer): CLASS(TK_Trooper) {
        displayName = "03: TK Trooper (Officer)";

        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "Throw",
            "Put"
        };

        linkedItems[] = {"TK_trooper_helmet","JLTS_CloneVestPurge_officer",LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {"TK_trooper_helmet","JLTS_CloneVestPurge_officer",LINKED_ITEMS_RADIO};
    };
};
