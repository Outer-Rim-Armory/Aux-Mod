class CfgWeapons {
    class ls_uniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_uniform_base {
        class ItemInfo;
    };
    class ls_uniform_base;
    class CLASS(INDEP_Uniform_Base): ls_uniform_base {
        class ItemInfo;
    };
    class FACTION(Uniform): CLASS(OPFOR_Uniform_Base) {
        SCOPE_PUBLIC;
    };
};
