class ls_gar_phase2_uniform;
class CLASS(Uniform_Base): ls_gar_phase2_uniform {
    class ItemInfo;
};
class CLASS(Uniform_CG): CLASS(Uniform_Base) {
    displayName = "[CG] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_CG_Trooper);
    };
};

class CLASS(Uniform_CG_Stone): CLASS(Uniform_CG) {
    displayName = "[CG] INF Armor ('Stone')";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_CG_Stone);
    };
};

class CLASS(Uniform_DC): CLASS(Uniform_Base) {
    displayName = "[DC] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_DC_Trooper);
    };
};

class CLASS(Uniform_Fil): CLASS(Uniform_Base) {
    displayName = "[KC] INF Armor ('Fil')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Fil);
    };
};

class CLASS(Uniform_FilSquad): CLASS(Uniform_Base) {
    displayName = "[KC] INF Armor ('Fil's Squad')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_FilSquad);
    };
};

class CLASS(Uniform_GC): CLASS(Uniform_Base) {
    displayName = "[GC] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_GC_Trooper);
    };
};

class CLASS(Uniform_HowzerBlue): CLASS(Uniform_Base) {
    displayName = "[KC] INF Armor ('Howzer') [Blue]";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_HowzerBlue);
    };
};

class CLASS(Uniform_HowzerBrown): CLASS(Uniform_Base) {
    displayName = "[KC] INF Armor ('Howzer') [Brown]";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_HowzerBrown);
    };
};

class CLASS(Uniform_104th): CLASS(Uniform_Base) {
    displayName = "[104th] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_104th_Trooper);
    };

    class XtdGearInfo {
        model = QCLASS(Uniforms_Units);
        camo = "KC_104th";
    };
};

class CLASS(Uniform_187th): CLASS(Uniform_Base) {
    displayName = "[187th] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_187th_Trooper);
    };
};

class CLASS(Uniform_212th): CLASS(Uniform_Base) {
    displayName = "[212th] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_212th_Trooper);
    };
};

class CLASS(Uniform_501st): CLASS(Uniform_Base) {
    displayName = "[501st] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_501st_Trooper);
    };

    class XtdGearInfo {
        model = QCLASS(Uniforms_Units);
        camo = "KC_501st";
    };
};

class CLASS(Uniform_91st_Ponds): CLASS(Uniform_Base) {
    displayName = "[91st] INF Armor ('Ponds')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_91st_Ponds);
    };
};