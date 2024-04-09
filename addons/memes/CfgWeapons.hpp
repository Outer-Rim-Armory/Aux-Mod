class CfgWeapons {
    class 3AS_DC15L_F;
    class CLASS(DC15L_Base): 3AS_DC15L_F {
        displayName = "[KC] DC-15W (Base)";
        descriptionShort = "DC-15W, because we don't take L's.<br />Automatic Blaster Rifle";
    };

    class CLASS(DC15L): CLASS(DC15L_Base) {
        displayName = "[KC] DC-15W";
    };
    class CLASS(DC15L_Fried): CLASS(DC15L) {
        displayName = "[KC] DC-15W (Fried)";
        descriptionShort = "DC-15W, because we don't take L's.<br />The circuits of the weapon have<br/>been fried by an EMP blast.";
    };
};