class PointerSlot_Rail;

class CfgWeapons
{
    class CLASS(Muzzle_Stun);
    class Rifle_Long_Base_F;
    class SWLW_rifle_base: Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };
    class SWLW_DC17M: SWLW_rifle_base
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
        class FullAuto;
        class Single;
    };
    class CLASS(DC17M_Base): SWLW_DC17M
    {
        SCOPE_PRIVATE;
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] DC-17M (Base)";

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] =
        {
            QCLASS(Mag_60Rnd_DC17M),
            QCLASS(Mag_90Rnd_DC17M),
            QCLASS(Mag_5Rnd_DC17M_Sniper),
            QCLASS(Mag_1Rnd_DC17M_AT),
            "Aux12thFleet_Mag_60Rnd_DC17M",
            "Aux12thFleet_Mag_90Rnd_DC17M",
            "Aux12thFleet_Mag_5Rnd_DC17M_Sniper",
            "Aux12thFleet_Mag_1Rnd_DC17M_AT"
        };
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};

        GVAR(attachmentSwapEnabled) = TRUE; // Enables attachment swapping
        GVAR(attachments)[] =               // Array of magazine properties to check and the attachment to use
        {
            {QGVAR(isBlasterMag), "SWLW_attachment_DC17M_blaster"},
            {QGVAR(isATMag), "SWLW_attachment_DC17M_at"},
            {QGVAR(isSniperMag), "SWLW_attachment_DC17M_sniper"}
        };

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        hiddenSelectionsTextures[] = {QPATHTOF(dc17m\data\DC17M_camo1_co.paa)};
        picture = QPATHTOF(dc17m\data\ui\DC17M_ca);

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    SWLW_attachment_scope_DC17M_sniper = TRUE;
                    // Short
                    Aux501_cows_RCO = TRUE;
                    Aux501_cows_RCO_2 = TRUE;
                    Aux501_cows_RCO_3 = TRUE;
                    // Medium
                    Aux501_cows_MRCO = TRUE;
                    Aux501_cows_MRCO_2 = TRUE;
                    Aux501_cows_MRCO_3 = TRUE;
                    // Long
                    Aux501_cows_DMS = TRUE;
                    Aux501_cows_DMS_2 = TRUE;
                    Aux501_cows_DMS_3 = TRUE;
                    Aux501_cows_DMS_4 = TRUE;
                    Aux501_cows_HoloScope = TRUE;
                    Aux501_cows_HoloScope_2 = TRUE;
                    Aux501_cows_HoloScope_3 = TRUE;
                    // Sights
                    Aux501_cows_Holosight = TRUE;
                    Aux501_cows_Holosight_2 = TRUE;
                    Aux501_cows_Holosight_3 = TRUE;
                };
            };
            class PointerSlot: PointerSlot_Rail
            {
                class CompatibleItems
                {
                    acc_pointer_ir = TRUE;
                    ace_acc_pointer_green = TRUE;
                    jlts_dc17sa_flashlight = TRUE;
                };
            };
        };

        class Single: Single
        {
            dispersion = 0.0001;
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_Single)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_Single)};
            };
        };
        class FullAuto: FullAuto
        {
            dispersion = 0.015;
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
            };
        };

        class Stun: CLASS(Muzzle_Stun)
        {
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};
        };

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "SWLW_attachment_DC17M_blaster";
            };
        };
    };

    class CLASS(DC17M): CLASS(DC17M_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-17M";
    };
};