class Mode_SemiAuto;
class CowsSlot_Rail;

class CfgWeapons {
    class CLASS(Muzzle_Stun);
    class CLASS(Muzzle_Stun_Fried);

    class CLASS(Muzzle_FakeUGL);

    class Pistol_Base_F;
    class hgun_P07_F: Pistol_Base_F {
        class Single;
    };
    class JLTS_DC17SA: hgun_P07_F {
        class WeaponSlotsInfo;

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
        class Stun;
    };
    class CLASS(DC17_base): JLTS_DC17SA {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-17 (Base)";
        baseWeapon = QCLASS(DC17_Base);

        modes[] = {"Single"};
        muzzles[] = {"this", "Stun", "Launcher"};
        magazines[] = {QCLASS(Mag_20Rnd_DC17), "Aux12thFleet_Mag_DC17"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot_Rail {
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;

                class CompatibleItems {
                    ATTACHMENTS_OPTIC_PISTOL;
                };
            };
            class UnderBarrelSlot;
        };

        class Single: Single {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC17Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17Shot)};
            };
        };

        class Stun: CLASS(Muzzle_Stun) {
            reloadAction = "GestureReloadPistol";
            reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
        };

        class Launcher: CLASS(Muzzle_FakeUGL) {
            displayName = "Flare Launcher";
            magazineWell[] = {QCLASS(MagWell_3Rnd_UGL_Flares)};
        };
    };

    class CLASS(DC17): CLASS(DC17_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-17";
        baseWeapon = QCLASS(DC17);
        JLTS_shieldedWeapon = QCLASS(DC17_riotShield);
        JLTS_friedItem = QCLASS(DC17_fried);
    };
    class CLASS(DC17_fried): CLASS(DC17) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-17 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC17_Fried);

        JLTS_shieldedWeapon = QCLASS(DC17_RiotShield_fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};

        class Launcher: Launcher {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
        };
    };

    class CLASS(DC17_riotShield): CLASS(DC17) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-17 (Shield)";
        baseWeapon = QCLASS(DC17_RiotShield);

        JLTS_isShielded = TRUE;
        JLTS_baseWeapon = QCLASS(DC17);
        JLTS_friedItem = QCLASS(DC17_riotShield_fried);

        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
        };

        recoil = "recoil_pdw";

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class UnderBarrelSlot: UnderBarrelSlot {
                class CompatibleItems {
                    JLTS_riot_shield_attachment = TRUE;
                    JLTS_riot_shield_212_attachment = TRUE;
                    JLTS_riot_shield_501_attachment = TRUE;
                    JLTS_riot_shield_101_attachment = TRUE;
                    JLTS_riot_shield_CG_attachment = TRUE;
                    JLTS_riot_shield_GD_attachment = TRUE;
                    JLTS_riot_shield_droid_attachment = TRUE;
                };
            };
        };
    };
    class CLASS(DC17_riotShield_fried): CLASS(DC17_riotShield) {
        displayName = "[KC] DC-17 (Shield, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC17_RiotShield_fried);

        JLTS_baseWeapon = QCLASS(DC17_fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};

        class Launcher: Launcher {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
            magazineWell[] = {};
        };
    };

    class CLASS(DC17_dual_base): CLASS(DC17_base) {
        descriptionShort = "Dual blaster pistols";

        model = "LF_Weapon_Unit\dc17dualarc\dc17cdual.p3d";
        // model = "\LF_Weapon_Unit\dc17dualarc\dc17arcdual.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        handAnim[] = {"OFP2_ManSkeleton", "\LF_Weapon_Unit\dc17dualarc\anim\attempt1.rtm"};

        muzzles[] = {"this", "Stun"};

        reloadMagazineSound[] = {"\LF_Weapon_Unit\main\sounds\dc15_reload.wss", 0.8, 1, 10};
        initSpeed = -1;

        JLTS_canHaveShield = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {};
            };
        };
    };

    class CLASS(DC17_dual): CLASS(DC17_dual_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17 (Dual)";
        baseWeapon = QCLASS(DC17_dual);
        JLTS_friedItem = QCLASS(DC17_dual_fried);
    };

    class CLASS(DC17_dual_fried): CLASS(DC17_dual) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-17 (Dual, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC17_dual_fried);

        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };
};