class Mode_FullAuto;

class CfgWeapons {
    class LMG_Mk200_F;
    class JLTS_E5C: LMG_Mk200_F {
        class WeaponSlotsInfo;
    };
    class CLASS(E5C_Base): JLTS_E5C {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] E-5C (Base)";
        descriptionShort = "Repeating Blaster";
        baseWeapon = QCLASS(E5C_Base);

        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_150Rnd_E5C)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        fireLightDiffuse[] = {1, 0, 0};

        class Manual: Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_E5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_E5Shot)};
            };
        };
    };

    class CLASS(E5C): CLASS(E5C_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] E-5C";
        baseWeapon = QCLASS(E5C);

        JLTS_friedItem = QCLASS(E5C_Fried);
    };
    class CLASS(E5C_Fried): CLASS(E5C) {
        SCOPE_HIDDEN;

        displayName = "[KC] E-5C (Fried)";
        baseWeapon = QCLASS(E5C_Fried);

        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5C\data\ui\E5C_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(E5C_Stock): CLASS(E5C_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] E-5C (Stock)";
        baseWeapon = QCLASS(E5C_Stock);

        JLTS_friedItem = QCLASS(E5C_Stock_Fried);

        model = "\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 132;
        };
    };
    class CLASS(E5C_Stock_Fried): CLASS(E5C_Stock) {
        SCOPE_HIDDEN;

        displayName = "[KC] E-5C (Stock, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_fried_ui_ca.paa";
        baseWeapon = QCLASS(E5C_Stock_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};