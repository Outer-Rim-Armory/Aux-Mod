class CfgWeapons {
    class JLTS_DC15A_plastic;
    class CLASS(DC15A_Base): JLTS_DC15A_plastic {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class CLASS(DC15A): CLASS(DC15A_Base) {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
        };
        class Single: Single {
            class StandardSound;
        };
        class FullAuto: FullAuto {
            class StandardSound;
        };
    };
    class CLASS(LW38_Base): CLASS(DC15A) {
        SCOPE_PRIVATE;

        displayName = "[KC] LW-38 (Base)";
        baseWeapon = QCLASS(LW38_Base);

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_60Rnd_LW38), QCLASS(Mag_60Rnd_LW38_Green)};

        reloadAction = "GestureReloadMX";
        reloadMagazineSound[] = {"\LF_Weapon_Unit\westar45\data\sounds\westar55reload.wss", 3, 1, 10};

        model = "\LF_Weapon_Unit\lw38m\lw38m.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        handAnim[] = {"OFP2_ManSkeleton", "\LF_Weapon_Unit\lw38m\anims\lw38mhand.rtm"};
        picture = QPATHTOF(lw38\data\ui\LW38_ca.paa);

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    LFP_lw38mholo_scope = TRUE;
                    LFP_lw38m_scope = TRUE;
                };
            };
        };

        class Single: Single {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_LW38Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_LW38Shot)};
            };
        };
        class FullAuto: FullAuto {
            reloadTime = 0.15;
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_LW38Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_LW38Shot)};
            };
        };
    };

    class CLASS(LW38): CLASS(LW38_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] LW-38";
        baseWeapon = QCLASS(LW38);

        JLTS_friedItem = QCLASS(LW38_Fried);
    };

    class CLASS(LW38_Fried): CLASS(LW38) {
        SCOPE_HIDDEN;

        displayName = "[KC] LW-38 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(lw38\data\ui\LW38_Fried_ca.paa);
        baseWeapon = QCLASS(LW38_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(LW38_Green): CLASS(LW38_Base) {
        SCOPE_HIDDEN;
        displayName = "[KC] LW-38";
        baseWeapon = QCLASS(LW38_Green);
        JLTS_friedItem = QCLASS(LW38_Green_Fried);

        fireLightDiffuse[] = {0, 1, 0};
    };

    class CLASS(LW38_Green_Fried): CLASS(LW38_Green) {
        displayName = "[KC] LW-38 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(lw38\data\ui\LW38_Fried_ca.paa);
        baseWeapon = QCLASS(LW38_Green_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(LW38_Green_Scoped): CLASS(LW38_Green) {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "LFP_lw38mholo_scope";
            };
        };
    };
};