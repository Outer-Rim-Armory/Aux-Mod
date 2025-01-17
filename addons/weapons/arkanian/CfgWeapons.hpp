class CfgWeapons {
    class 3AS_Arkanian_Base_F;
    class 3AS_Arkanian_Stock_Base_F: 3AS_Arkanian_Base_F {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class CLASS(3AS_Arkanian_Stock_F): 3AS_Arkanian_Stock_Base_F {
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
    class CLASS(Arkanian_Base): CLASS(3AS_Arkanian_Stock_F) {
        SCOPE_PRIVATE;
        displayName = "[KC] Arkanian Blaster Rifle (Base)";
        baseWeapon = QCLASS(Arkanian_Base);

        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_40Rnd_Arkanian)};
        magazineWell[] = {};

        fireLightDiffuse[] = {1, 1, 0};

        model = "3as\3AS_Weapons\Greenfor\model\3AS_ArkanianBlasterRifleStock.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"3as\3AS_Weapons\Greenfor\data\Textures\camo_ArkanianBlasterRifle_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Greenfor\data\anims\ArkanianHandStock.rtm"};
        picture = "\3AS\3AS_Weapons\Greenfor\data\UI\3as_arks_ca.paa";
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
        recoil = "recoil_SMG_03";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    3AS_Optic_Arkanian_2_F = TRUE;
                };
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
                soundSetShot[] = {QCLASS(SoundSet_ArkanianShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_ArkanianShot)};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_ArkanianShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_ArkanianShot)};
            };
        };
    };

    class CLASS(Arkanian): CLASS(Arkanian_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Arkanian Blaster Rifle";
        baseWeapon = QCLASS(Arkanian);

        JLTS_friedItem = QCLASS(Arkanian_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "3AS_Optic_Arkanian_2_F";
            };
        };
    };
    class CLASS(Arkanian_Fried): CLASS(Arkanian) {
        SCOPE_HIDDEN;

        displayName = "[KC] Arkanian Blaster Rifle (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
        baseWeapon = QCLASS(Arkanian_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};