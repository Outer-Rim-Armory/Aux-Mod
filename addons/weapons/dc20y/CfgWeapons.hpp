class CfgWeapons {
    class OPTRE_LongRifle_Base;
    class OPTRE_M99A2S3: OPTRE_LongRifle_Base {
        class Single;
    };
    class CLASS(DC20Y_Base): OPTRE_M99A2S3 {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] DC-20Y (Base)";
        baseWeapon = QCLASS(DC20Y_Base);

        picture = QPATHTOF(dc20y\data\ui\DC20Y_ca.paa);

        modes[] = {"Single"};
        muzzles[] = {"this"};

        magazines[] = {
            QCLASS(Mag_10Rnd_DC20Y),
            QCLASS(Mag_3Rnd_DC20Y_AP),
            QCLASS(Mag_5Rnd_DC20Y_HE)
        };
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};

        canShootInWater = FALSE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.08;
        fireLightIntensity = 0.5;
        flashSize = 0.5;

        hiddenSelectionsTextures[] = {
            QPATHTOF(SUBCOMPONENT\data\textures\camo_attach_co.paa),
            "",
            QPATHTOF(SUBCOMPONENT\data\textures\camo_front_co.paa),
            QPATHTOF(SUBCOMPONENT\data\textures\camo_rear_co.paa)
        };

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class Single: Single {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_DC20YShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC20YShot)};
            };
        };
    };

    class CLASS(DC20Y): CLASS(DC20Y_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-20Y";

        baseWeapon = QCLASS(DC20Y);
        JLTS_friedItem = QCLASS(DC20Y_Fried);
    };

    class CLASS(DC20Y_Fried): CLASS(DC20Y) {
        SCOPE_HIDDEN;
        displayName = "[KC] DC-20Y (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(dc20y\data\ui\DC20Y_Fried_ca.paa);
        baseWeapon = QCLASS(DC20Y_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};