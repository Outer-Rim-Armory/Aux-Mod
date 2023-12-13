class CfgWeapons
{
    class JLTS_Z6;
    class BNA_KC_Z6_Base: JLTS_Z6
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] Z-6 (Base)";

        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_Z6"};
        magazineWell[] = {};

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_Z6: BNA_KC_Z6_Base
    {
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Z-6";
    };

    class BNA_KC_Z6_Fried: BNA_KC_Z6
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] Z-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};