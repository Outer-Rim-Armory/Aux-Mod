class CfgWeapons {
    class arifle_MX_Base_F;
    class JLTS_DC15S: arifle_MX_Base_F {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class CLASS(DC15S_Base): JLTS_DC15S {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Single {
            class StandardSound;
        };
        class FullAuto: FullAuto {
            class StandardSound;
        };
    };
    class CLASS(E5_Base): CLASS(DC15S_Base) {
        displayName = "[KC] E-5 (Base)";
        baseWeapon = QCLASS(E5_Base);

        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_100Rnd_E5)};
        magazineWell[] = {};

        fireLightDiffuse[] = {1, 0, 0};

        model = "\MRC\JLTS\weapons\E5\E5.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_ui_ca.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {};
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {};
            };
            class UnderBarrelSlot;
        };

        class Single: Single {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_E5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_E5Shot)};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_E5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_E5Shot)};
            };
        };
    };

    class CLASS(E5): CLASS(E5_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] E-5";
        baseWeapon = QCLASS(E5);

        JLTS_shieldedWeapon = QCLASS(E5_RiotShield);
        JLTS_friedItem = QCLASS(E5_Fried);
    };
    class CLASS(E5_Fried): CLASS(E5) {
        SCOPE_HIDDEN;

        displayName = "[KC] E-5 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
        baseWeapon = QCLASS(E5_Fried);

        JLTS_shieldedWeapon = QCLASS(E5_RiotShield_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(E5_RiotShield): CLASS(E5) {
        SCOPE_HIDDEN;

        displayName = "[KC] E-5 (Shield)";
        baseWeapon = QCLASS(E5_RiotShield);

        JLTS_isShielded = TRUE;
        JLTS_friedItem = QCLASS(E5_RiotShield_Fried);
        JLTS_baseWeapon = QCLASS(E5);

        model = "\MRC\JLTS\weapons\E5\E5_shielded.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"};

        reloadAction = "GestureReload";
        inertia = 0.80000001;
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
    class CLASS(E5_RiotShield_Fried): CLASS(E5_RiotShield) {
        displayName = "[KC] E-5 (Shield, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
        baseWeapon = QCLASS(E5_RiotShield_Fried);

        JLTS_baseWeapon = QCLASS(E5_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(E5_Shielded): CLASS(E5_RiotShield) {
        class LinkedItems {
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "JLTS_riot_shield_droid_attachment";
            };
        };
    };
};