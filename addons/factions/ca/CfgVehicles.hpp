class CfgVehicles {
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(Arctic_Unit_Base): CLASS(BLUFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(CA);
        uniformClass = QCLASS(Clan_Arctic_Undersuit);
        genericNames = QCLASS(CA_Clansman);

        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\undersuit\data\tex\camo1_white_co.paa",
            "\z\tgf\addons\undersuit\data\camo2_co.paa"
        };

        items[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
        };
        respawnItems[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
        };
    };
    class CLASS(Arctic_Base): CLASS(BLUFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(CA);
        uniformClass = QCLASS(Arctic_Undersuit);
        genericNames = QCLASS(CA_Arctic);

        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(ca\data\undersuit\arctic\Arctic_camo1_co.paa),
            "\z\tgf\addons\undersuit\data\camo2_co.paa"
        };

        items[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
        };
        respawnItems[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
        };
    };
    class CLASS(Governor_Arctic): CLASS(Arctic_Base) {
        SCOPE_PUBLIC;
        displayName = "Governor Arctic";
        editorSubcategory = QEDSUBCAT(CA_CLANLEADS);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Arctic_Helmet),QCLASS(Arctic_Armour),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Helmet),QCLASS(Arctic_Armour),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Arctic_JT12_Predef);
    };

    class CLASS(Arctic_Clansman): CLASS(Arctic_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "01: Traditional Clansman";
        editorSubcategory = QEDSUBCAT(CA_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Arctic_Traditional_Helmet),QCLASS(Arctic_Light_Armour),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Traditional_Helmet),QCLASS(Arctic_Light_Armour),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Arctic_JT12_Predef);
    };

    class CLASS(Arctic_Medium_Clansman): CLASS(Arctic_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "02: Medium Clansman";
        editorSubcategory = QEDSUBCAT(CA_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Arctic_Viper_Helmet),QCLASS(Arctic_Medium_Armour),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Viper_Helmet),QCLASS(Arctic_Medium_Armour),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Arctic_JT12_Predef);
    };

    class CLASS(Arctic_Medium_Vet_Clansman): CLASS(Arctic_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "03: Medium Clansman (Veteran)";
        editorSubcategory = QEDSUBCAT(CA_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Arctic_Viper_Vet_Helmet),QCLASS(Arctic_Medium_Armour),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Viper_Vet_Helmet),QCLASS(Arctic_Medium_Armour),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Arctic_JT12_Predef);
    };

    class CLASS(Arctic_Heavy_Clansman): CLASS(Arctic_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "04: Heavy Clansman";
        icon = "iconManMG";
        editorSubcategory = QEDSUBCAT(CA_CLANSMAN);

        weapons[] = {QCLASS(Z6), QCLASS(Westar35SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(Z6), QCLASS(Westar35SA), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_400rnd_Z6_Yellow),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {
            ITEM_6(QCLASS(Mag_400rnd_Z6_Yellow))
        };

        linkedItems[] = {QCLASS(Arctic_Heavy_Helmet), QCLASS(Arctic_Heavy_Armour), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Heavy_Helmet), QCLASS(Arctic_Heavy_Armour), LINKED_ITEMS_RADIO};
        backpack = QCLASS(Arctic_Heavy_Jetpack_Predef);
    };

    class CLASS(Arctic_Pilot_Clansman): CLASS(Arctic_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "05: Pilot Clansman";
        editorSubcategory = QEDSUBCAT(CA_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(DC15SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(DC15SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Arctic_Pilot_Helmet),QCLASS(Arctic_Recon_Armour),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Arctic_Pilot_Helmet),QCLASS(Arctic_Recon_Armour),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Arctic_JT12_Predef);
    };

    class CLASS(backpack_base);
    class CLASS(CABackpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[CA] Backpack";

        model = "\sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_guard_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        maximumLoad = 600;
    };

    class CLASS(Mando_JT12_Base): CLASS(backpack_base) {
        SCOPE_PRIVATE;

        displayName = "[CA] JT12 (Base)";

        model = "\z\tgf\addons\backpacks\jt12\jt12_jetpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"z\tgf\addons\backpacks\jt12\data\camo1_co.paa"};
        picture = "z\tgf\addons\backpacks\jt12\data\JT12.paa";

        maximumLoad = 600;

        EGVAR(jetpacks,isJetpack) = TRUE;
        EGVAR(jetpacks,speed) = JETPACK_SPEED_DEFAULT;
        EGVAR(jetpacks,strength) = JETPACK_STRENGTH_DEFAULT;
        EGVAR(jetpacks,fuel) = JETPACK_FUEL_DEFAULT;
        EGVAR(jetpacks,canHover) = TRUE;

        // Effects
        EGVAR(jetpacks,effectPoints)[] = {
            {-0.13251, -0.219357, -0.247619},
            { 0.15051, -0.219357, -0.247619}
        };
        EGVAR(jetpacks,effects)[] = {
            QCLASS(cloudlet_jetpackFire_blue),
            QCLASS(cloudlet_jetpackSmoke)
        };
        EGVAR(jetpacks,effectSound) = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
        EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

        EGVAR(jetpacks,freefallHeight) = 500;

        EGVAR(custom_armor,isCustom) = FALSE;
    };

    class tgf_backpacks_war_chief;
    class CLASS(Arctic_JT12): tgf_backpacks_war_chief {
        SCOPE_PUBLIC;
        displayName = "[CA] Arctic's JT-12 Jetpack";

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(CA\data\backpacks\arctic\Arctics_JT12_co.paa)
            };
    };

    class CLASS(Clan_Arctic_JT12): CLASS(Mando_JT12_Base) {
        SCOPE_PUBLIC;

        displayName = "[CA] Clan Arctic JT-12 Jetpack";
        hiddenSelectionsTextures[] = {
            QPATHTOF(CA\data\backpacks\Arctic_JT12_co.paa),
        };
    };

    class CLASS(Arctic_JT12_Predef): CLASS(Arctic_JT12) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_35Rnd_WestarCarbine),5);
            MAG_XX(CLASS(Mag_30Rnd_Westar35SA),10);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };

    class CLASS(Clan_Arctic_JT12_Predef): CLASS(Clan_Arctic_JT12) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_35Rnd_WestarCarbine),5);
            MAG_XX(CLASS(Mag_30Rnd_Westar35SA),10);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };

    class tgf_backpacks_heavy_jetpack;
    class CLASS(Arctic_Heavy_Jetpack): tgf_backpacks_heavy_jetpack {
        SCOPE_PUBLIC;

        displayName = "[CA] Clan Arctic Heavy Jetpack";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(CA\data\backpacks\Arctic_Heavy_Jetpack_co.paa)
        };

        EGVAR(jetpacks,isJetpack) = TRUE;
        EGVAR(jetpacks,speed) = JETPACK_SPEED_DEFAULT;
        EGVAR(jetpacks,strength) = JETPACK_STRENGTH_DEFAULT;
        EGVAR(jetpacks,fuel) = JETPACK_FUEL_DEFAULT;
        EGVAR(jetpacks,canHover) = TRUE;

        // Effects
        EGVAR(jetpacks,effectPoints)[] = {
            {-0.13251, -0.219357, -0.247619},
            { 0.15051, -0.219357, -0.247619}
        };
        EGVAR(jetpacks,effects)[] = {
            QCLASS(cloudlet_jetpackFire_blue),
            QCLASS(cloudlet_jetpackSmoke)
        };
        EGVAR(jetpacks,effectSound) = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
        EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

        EGVAR(jetpacks,freefallHeight) = 500;

        EGVAR(custom_armor,isCustom) = FALSE;
    };

    class CLASS(Arctic_Heavy_Jetpack_Predef): CLASS(Arctic_Heavy_Jetpack) {
        SCOPE_HIDDEN;
        class TransportMagazines {
            MAG_XX(CLASS(Mag_400rnd_Z6_Yellow),15);
            MAG_XX(CLASS(Mag_30Rnd_Westar35SA),10);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(CLASS(Grenade_Bacta),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ShieldGrenadePersonal_Mag,1);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };
};
