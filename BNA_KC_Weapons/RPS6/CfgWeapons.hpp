class CfgWeapons
{
    class JLTS_RPS6;
    class BNA_KC_RPS7_Base: JLTS_RPS6
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-7 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_RPS7_AT", "Aux12thFleet_Mag_RPS7_HE"};
        magazineWell[] = {};

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_RPS7: BNA_KC_RPS7_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] RPS-7";
        JLTS_friedItem = "BNA_KC_RPS7_Fried";
    };

    class BNA_KC_RPS7_Fried: BNA_KC_RPS7
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-7 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};