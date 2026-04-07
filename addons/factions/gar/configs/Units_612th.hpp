class CLASS(Unit_612th_Ganch): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "01: Commander Ganch";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass= "ls_cloneUniform_612th_ganch";

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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_ganch", QCLASS(Vest_ARC_Ganch), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_ganch", QCLASS(Vest_ARC_Ganch), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_15S): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "02: Clone Trooper (15S)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_15A): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "03: Clone Trooper (15A)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

    weapons[] = {
        QCLASS(DC15A),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(DC15A),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_60Rnd_DC15A)),
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
        ITEM_11(QCLASS(Mag_60Rnd_DC15A)),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_15C): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "04: Clone Trooper (15C)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

    weapons[] = {
        QCLASS(DC15C),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(DC15C),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_70Rnd_DC15C)),
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
        ITEM_11(QCLASS(Mag_70Rnd_DC15C)),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_AT): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "05: Clone Trooper (AT)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

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
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
        ITEM_2(QCLASS(Mag_20Rnd_DC17)),
        ITEM_5(QCLASS(Mag_1Rnd_RPS7_AT)),
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
        ITEM_5(QCLASS(Mag_1Rnd_RPS7_AT)),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    backpack = QCLASS(Backpack_Rocket_Base);
};

class CLASS(Unit_612th_AA): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "06: Clone Trooper (AA)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

    weapons[] = {
        QCLASS(DC15S),
        QCLASS(DC17),
        QCLASS(PLX1),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(DC15S),
        QCLASS(DC17),
        QCLASS(PLX1),
        "Throw",
        "Put"
    };
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
        ITEM_2(QCLASS(Mag_20Rnd_DC17)),
        ITEM_5("3AS_JLTS_MK39_AA"),
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
        ITEM_5("3AS_JLTS_MK39_AA"),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    backpack = QCLASS(Backpack_Rocket_Base);
};

class CLASS(Unit_612th_15X): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "07: Clone Sniper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

    weapons[] = {
        QCLASS(DC15X),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(DC15X),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_25Rnd_DC15X)),
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
        ITEM_11(QCLASS(Mag_25Rnd_DC15X)),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_Medic): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "09: Clone Medic";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

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
            ITEM_10("ACE_packingBandage"),
            ITEM_10("ACE_quickclot"),

            // Fluid
            ITEM_10("ACE_salineIV"),
            ITEM_10("ACE_salineIV_500"),
            ITEM_10("ACE_salineIV_250"),

            // Drugs
            ITEM_10("ACE_morphine"),
            ITEM_10("ACE_epinephrine"),
            ITEM_10(QCLASS(Painkiller)),

            // Misc
            ITEM_10("ACE_tourniquet"),
            ITEM_10("ACE_Splint"),
            ITEM_10("ACE_Banana")
        };
        respawnItems[] = {
            // Medical
            // Bandages
            ITEM_10("ACE_elasticBandage"),
            ITEM_10("ACE_packingBandage"),
            ITEM_10("ACE_quickclot"),

            // Fluid
            ITEM_10("ACE_salineIV"),
            ITEM_10("ACE_salineIV_500"),
            ITEM_10("ACE_salineIV_250"),

            // Drugs
            ITEM_10("ACE_morphine"),
            ITEM_10("ACE_epinephrine"),
            ITEM_10(QCLASS(Painkiller)),

            // Misc
            ITEM_10("ACE_tourniquet"),
            ITEM_10("ACE_Splint"),
            ITEM_10("ACE_Banana")
        };

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Medic_Blank), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", QCLASS(Vest_Medic_Blank), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_612th_Z6): CLASS(Unit_Phase2_Base) {
    SCOPE_PUBLIC;
    displayName = "08: Heavy Gunner";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(612th);
    uniformClass = "ls_cloneUniform_612th_trooper";

    weapons[] = {
        QCLASS(Z6),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(Z6),
        QCLASS(DC17),
        "Throw",
        "Put"
    };
    magazines[] = {
        // Ammo
        ITEM_11(QCLASS(Mag_400Rnd_Z6)),
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
        ITEM_11(QCLASS(Mag_400Rnd_Z6)),
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

    linkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase2_612th_trooper", "ls_gar_heavy_vest", QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
