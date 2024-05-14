class CfgWeapons {
    class 3AS_Chaingun;
    class CLASS(Z8_base): 3AS_Chaingun {
        SCOPE_PRIVATE;
        author = AUTHOR;

        baseWeapon = QCLASS(Z8_base);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;
    };

    class CLASS(Z8): CLASS(Z8_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-8";
        baseWeapon = QCLASS(Z8);

        JLTS_friedItem = QCLASS(Z8_fried);
    };

    class CLASS(Z8_fried): CLASS(Z8) {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-8 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};