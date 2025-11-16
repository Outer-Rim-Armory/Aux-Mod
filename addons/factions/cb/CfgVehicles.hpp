class CfgVehicles {
    class CLASS(OPFOR_Unit_Base);
    class CLASS(Bel_Unit_Base): CLASS(OPFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(CB);
        uniformClass = QCLASS(Clan_Bel_Undersuit);
        genericNames = QCLASS(CB_Clansman);
        identityTypes[] = {"LanguageENG_F", "Head_NATO", QCLASS(ClanBel)};

        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\undersuit\Bel_camo1_co.paa),
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
    class CLASS(Mommy_Unit_Base): CLASS(OPFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(CB);
        uniformClass = QCLASS(Clan_Bel_Undersuit);
        genericNames = QCLASS(CB_Mommy);
        identityTypes[] = {"LanguageENG_F", "Head_NATO", QCLASS(ClanBel)};

        model = "\z\tgf\addons\undersuit\undersuit_male.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(cb\data\undersuit\Bel_camo1_co.paa),
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
    class CLASS(Officer_Mommy): CLASS(Mommy_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "Officer Mommy";
        editorSubcategory = QEDSUBCAT(CB_CLANLEADS);
        genericNames = QCLASS(CB_Mommy);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Mommy_Helmet),QCLASS(Mommy_Armour),QCLASS(Bel_Rangefinder),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Mommy_Helmet),QCLASS(Mommy_Armour),QCLASS(Bel_Rangefinder),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(Bel_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "01: Traditional Clansman";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Bel_Traditional_Helmet),QCLASS(Bel_Light_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Traditional_Helmet),QCLASS(Bel_Light_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(Bel_Vet_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "02: Traditional Clansman (Veteran)";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Bel_Veteran_Helmet),QCLASS(Bel_Light_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Veteran_Helmet),QCLASS(Bel_Light_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(Bel_Medium_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "03: Medium Clansman";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Bel_Viper_Helmet),QCLASS(Bel_Medium_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Viper_Helmet),QCLASS(Bel_Medium_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(Bel_Medium_Vet_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "04: Medium Clansman (Veteran)";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Bel_Viper_Vet_Helmet),QCLASS(Bel_Medium_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Viper_Vet_Helmet),QCLASS(Bel_Medium_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(Bel_Heavy_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "05: Heavy Clansman";
        icon = "iconManMG";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Z6), QCLASS(Westar35SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(Z6), QCLASS(Westar35SA), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_400rnd_Z6_Yellow),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {
            ITEM_6(QCLASS(Mag_400rnd_Z6_Yellow))
        };

        linkedItems[] = {QCLASS(Bel_Heavy_Helmet), QCLASS(Bel_Heavy_Armour),QCLASS(Glasses_CB_Mask), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Heavy_Helmet), QCLASS(Bel_Heavy_Armour),QCLASS(Glasses_CB_Mask), LINKED_ITEMS_RADIO};
        backpack = QCLASS(Bel_Heavy_Jetpack_Predef);
    };

    class CLASS(Bel_Pilot_Clansman): CLASS(Bel_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "06: Pilot Clansman";
        editorSubcategory = QEDSUBCAT(CB_CLANSMAN);

        weapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};
        respawnWeapons[] = {QCLASS(Westar_Carbine),QCLASS(Westar35SA),"Throw","Put"};

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};
        respawnMagazines[] = {QCLASS(Mag_35Rnd_WestarCarbine),QCLASS(Mag_30Rnd_Westar35SA)};

        linkedItems[] = {QCLASS(Bel_Pilot_Helmet),QCLASS(Bel_Recon_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(Bel_Pilot_Helmet),QCLASS(Bel_Recon_Armour),QCLASS(Glasses_CB_Mask),LINKED_ITEMS_RADIO};
        backpack = QCLASS(Clan_Bel_JT12_Predef);
    };

    class CLASS(backpack_base);
    class CLASS(CBBackpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[CB] Backpack";

        model = "\sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_guard_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        maximumLoad = 600;
    };

    class CLASS(Mando_JT12_Base): CLASS(backpack_base) {
        SCOPE_PRIVATE;

        displayName = "[CB] JT12 (Base)";

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

    class CLASS(Clan_Bel_JT12): CLASS(Mando_JT12_Base) {
        SCOPE_PUBLIC;

        displayName = "[CB] Clan Bel JT-12 Jetpack";
        hiddenSelectionsTextures[] = {
            QPATHTOF(CB\data\backpacks\Bel_JT12_co.paa),
        };
    };

    class CLASS(Clan_Bel_JT12_Predef): CLASS(Clan_Bel_JT12) {
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
    class CLASS(Bel_Heavy_Jetpack): tgf_backpacks_heavy_jetpack {
        SCOPE_PUBLIC;

        displayName = "[CA] Clan Bel Heavy Jetpack";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(CB\data\backpacks\Bel_Heavy_Jetpack_co.paa)
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

    class CLASS(Bel_Heavy_Jetpack_Predef): CLASS(Bel_Heavy_Jetpack) {
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
