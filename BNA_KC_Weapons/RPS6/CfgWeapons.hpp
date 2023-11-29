class CfgWeapons
{
    class JLTS_RPS6;
    class BNA_KC_RPS6_Base: JLTS_RPS6
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-6 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {"JLTS_RPS6_mag", "JLTS_RPS6_HE_mag"};
        magazineWell[] = {};

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_RPS6: BNA_KC_RPS6_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] RPS-6";
        JLTS_friedItem = "BNA_KC_RPS6_Fried";
    };

    class BNA_KC_RPS6_Fried: BNA_KC_RPS6
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};