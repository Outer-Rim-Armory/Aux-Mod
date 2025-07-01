class ls_gar_phase2_uniform;
class CLASS(Uniform_Base): ls_gar_phase2_uniform {
    class ItemInfo;
};
UNIFORM_CUSTOM(Axel);
UNIFORM_CUSTOM(Bailout);
UNIFORM_CUSTOM(Bean);
UNIFORM_CUSTOM(Bob);
UNIFORM_CUSTOM(Burnt);

class CLASS(Uniform_Burnt_Worn): CLASS(Uniform_Burnt) {
    displayName = "[KC] Custom Armor ('Burnt') - Battle Hardened";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Burnt_Worn);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};


UNIFORM_CUSTOM(Catholic);
UNIFORM_CUSTOM(Cough);
UNIFORM_CUSTOM(Cutthroat);
UNIFORM_CUSTOM(Defter);
UNIFORM_CUSTOM(Dexus);
UNIFORM_CUSTOM(Drake);

//class CLASS(Uniform_Drake_Emp): CLASS(Uniform_Drake) {
//    displayName = "[KC] Custom Armor ('Drake') - Empire";
//
//    class ItemInfo: ItemInfo {
//        uniformClass = QCLASS(Unit_Drake_Emp);
//    };
//    class XtdGearInfo: XtdGearInfo {
//        camo = "Empire";
//    };
//};

UNIFORM_CUSTOM(Evo);
UNIFORM_CUSTOM(Grey);
UNIFORM_CUSTOM(Hagrid);
UNIFORM_CUSTOM(Harry);
UNIFORM_CUSTOM(Henkie);
UNIFORM_CUSTOM(Jaws);

class CLASS(Uniform_Jaws_CamoBrown): CLASS(Uniform_Jaws) {
    displayName = "[KC] Custom Armor ('Jaws') - Brown Camo";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Jaws_CamoBrown);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};

UNIFORM_CUSTOM(Jester);
UNIFORM_CUSTOM(Joe);
UNIFORM_CUSTOM(Keeli);

class CLASS(Uniform_Keeli_CamoBrown): CLASS(Uniform_Keeli) {
    displayName = "[KC] Custom Armor ('Keeli') - Brown Camo";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Keeli_CamoBrown);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};
class CLASS(Uniform_Keeli_CamoGrey): CLASS(Uniform_Keeli) {
    displayName = "[KC] Custom Armor ('Keeli') - Grey Camo";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Keeli_CamoGrey);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Grey";
    };
};
class CLASS(Uniform_Keeli_Worn): CLASS(Uniform_Keeli) {
    displayName = "[KC] Custom Armor ('Keeli') - Worn";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Keeli_Worn);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Uniform_Keeli_Empire): CLASS(Uniform_Keeli) {
    displayName = "[KC] Custom Armor ('Keeli') - Empire";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Keeli_Emp);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Empire";
    };
};
class CLASS(Uniform_Keeli_Geo): CLASS(Uniform_Keeli) {
    displayName = "[KC] Custom Armor ('Keeli') - Geo";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Keeli_Geo);
    };
    class XtdGearInfo: XtdGearInfo {
        camo = "Geo";
    };
};

UNIFORM_CUSTOM(Kujo);
UNIFORM_CUSTOM(Leon);
UNIFORM_CUSTOM(Rat);
UNIFORM_CUSTOM(Rev);
UNIFORM_CUSTOM(Sin);
UNIFORM_CUSTOM(Sogi);
UNIFORM_CUSTOM(Splashdown);
UNIFORM_CUSTOM(Star);
UNIFORM_CUSTOM(Swoop);
UNIFORM_CUSTOM(Talyn);
UNIFORM_CUSTOM(Tugz);
UNIFORM_CUSTOM(Tyrant);
UNIFORM_CUSTOM(Weenie);
UNIFORM_CUSTOM(Woods);

class CLASS(Uniform_Phase2_Insulated_Base): CLASS(Uniform_Base) {
    class ItemInfo;
};
UNIFORM_INSULATED_P2_CUSTOM(Dexus);
UNIFORM_INSULATED_P2_CUSTOM(Joe);
UNIFORM_INSULATED_P2_CUSTOM(Keeli);
