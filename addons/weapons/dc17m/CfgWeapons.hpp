class PointerSlot_Rail;
class WeaponSlotsInfo {
    class CowsSlot;
};
class FullAuto;
class Single;

class CfgWeapons {
    class CLASS(Muzzle_Stun);
    class LFP_DC17M;
    class CLASS(DC17M_Base): LFP_DC17M {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-17M (Base)";
        baseWeapon = QCLASS(DC17M_Base);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] = {
            QCLASS(Mag_60Rnd_DC17M),
            QCLASS(Mag_5Rnd_DC17M_Sniper),
            QCLASS(Mag_60Rnd_DC17M_Red),
            QCLASS(Mag_5Rnd_DC17M_Sniper_Red),
            QCLASS(Mag_1Rnd_DC17M_AT),
            QCLASS(Mag_3Rnd_DC17M_AT),
            "Aux12thFleet_Mag_60Rnd_DC17M",
            "Aux12thFleet_Mag_90Rnd_DC17M",
            "Aux12thFleet_Mag_5Rnd_DC17M_Sniper",
            "Aux12thFleet_Mag_1Rnd_DC17M_AT"
        };
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};

        // Array of magazine properties to check and the attachment to use
        GVAR(attachmentSwapEnabled) = TRUE;
        GVAR(attachments)[] = {
            {QGVAR(isBlasterMag), "LFP_DC17M_Attachment_Blaster"},
            {QGVAR(isATMag), "LFP_DC17M_Attachment_GL"},
            {QGVAR(isSniperMag), "LFP_DC17M_Attachment_Sniper"}
        };

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;
        picture = QPATHTOF(dc17m\data\ui\DC17M_ca);

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                };
            };
            class PointerSlot: PointerSlot_Rail {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class Single: Single {
            dispersion = 0.0001;
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_Single)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_Single)};
            };
        };
        class FullAuto: FullAuto {
            dispersion = 0.015;
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
            };
        };

        class Stun: CLASS(Muzzle_Stun) {
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};
        };

        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LFP_DC17M_Attachment_Blaster";
            };
        };
    };

    class CLASS(DC17M): CLASS(DC17M_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-17M";
        baseWeapon = QCLASS(DC17M);
    };
};
