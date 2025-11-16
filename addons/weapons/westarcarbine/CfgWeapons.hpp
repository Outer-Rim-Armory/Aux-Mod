class CfgWeapons {
    class ls_weapon_westar35c;
    class Single;
    class FullAuto;
    class CowsSlot;
    class PointerSlot;
    class WeaponSlotsInfo;
    class StandardSound;
    class CLASS(Westar_Carbine_Base): ls_weapon_westar35c {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-Carbine (Base)";
        descriptionShort = "Blaster Carbine";
        baseWeapon = QCLASS(Westar_Carbine_Base);

        magazines[] = {QCLASS(Mag_35Rnd_WestarCarbine)};
        magazineWell[] = {};
        recoil = "recoil_SMG_03";

        canShootInWater = TRUE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {

                };
            };
        };

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "";
            };
        };

        class Single: Single {
            reloadTime = 0.08;
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_WestarCarbine_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_WestarCarbine_Shot)};
            };
        };
        class FullAuto: FullAuto {
            reloadTime = 0.08;
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            sounds[] = {"StandardSound"};
            aiRateOfFire = 2;
            class StandardSound: StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_WestarCarbine_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_WestarCarbine_Shot)};
            };
        };
    };

    class CLASS(Westar_Carbine): CLASS(Westar_Carbine_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-Carbine";
        baseWeapon = QCLASS(Westar_Carbine);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;
    };
};
