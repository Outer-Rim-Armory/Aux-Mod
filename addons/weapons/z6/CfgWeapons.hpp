class CfgWeapons
{
    class JLTS_Z6;
    class CLASS(Z6_Base): JLTS_Z6
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] Z-6 (Base)";
        baseWeapon = QCLASS(Z6_Base);

        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_300rnd_Z6), "Aux12thFleet_Mag_Z6"};
        magazineWell[] = {};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;
    };

    class CLASS(Z6): CLASS(Z6_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-6";
        baseWeapon = QCLASS(Z6);

        JLTS_friedItem = QCLASS(Z6_Fried);
    };

    class CLASS(Z6_Fried): CLASS(Z6)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};