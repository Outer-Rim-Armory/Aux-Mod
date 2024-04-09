class CfgWeapons {
    class M2_Flamethrower_01_F;
    class CLASS(B2Blaster_flamer): M2_Flamethrower_01_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] Wrist Mounted Flamethrower";
        descriptionShort = "Built in flamethrower";
        baseWeapon = QCLASS(B2Blaster_flamer);

        magazines[] = {QCLASS(Mag_150rnd_B2Blaster_flamer)};

        canShootInWater = FALSE;

        model = QPATHTOF(b2Blaster\data\models\CLASS(B2Blaster.p3d));
        handAnim[] = {"OFP2_ManSkeleton", "\3AS\3AS_Weapons\DWBlaster\Data\Anim\DualWrist_handanim.rtm"};
        picture = QPATHTOF(b2Blaster\data\ui\b2Blaster_ca.paa);

        useModelOptics = TRUE;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        WBK_BurnEm_requiredBackpack = "";
        WBK_BurnEm_flamethrowerParticlePos = "[[0, 0, 0], 'righthand']";
        WBK_BurnEm_flamethrowerDistance = 40;
    };
};