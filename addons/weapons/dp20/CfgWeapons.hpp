class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class SWLW_DP20: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DP20_Base): SWLW_DP20 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DP-20 (Base)";
        baseWeapon = QCLASS(DP20_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_15Rnd_DP20)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class Single: Single {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DP20Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DP20Shot)};
            };
        };
    };

    class CLASS(DP20): CLASS(DP20_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DP-20";
        baseWeapon = QCLASS(DP20);

        JLTS_shieldedWeapon = QCLASS(DP20_RiotShield);
        JLTS_friedItem = QCLASS(DP20_Fried);
    };
    class CLASS(DP20_Fried): CLASS(DP20) {
        SCOPE_HIDDEN;

        displayName = "[KC] DP-20 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = QCLASS(DP20_Fried);

        JLTS_shieldedWeapon = QCLASS(DP20_RiotShield_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(DP20_RiotShield): CLASS(DP20) {
        SCOPE_HIDDEN;

        displayName = "[KC] DP-20 (Shield)";
        baseWeapon = QCLASS(DP20_RiotShield);

        JLTS_isShielded = TRUE;
        JLTS_friedItem = QCLASS(DP20_RiotShield_Fried);
        JLTS_baseWeapon = QCLASS(DP20);

        inertia = 0.8;

        model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa", "\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};

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
    class CLASS(DP20_RiotShield_Fried): CLASS(DP20_RiotShield) {
        displayName = "[KC] DP-20 (Shield, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = QCLASS(DP23_RiotShield_Fried);

        JLTS_baseWeapon = QCLASS(DP20_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};