class CfgWeapons {
    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base {
        class ItemInfo;
    };
    class ls_greenforUniform_base;
    class CLASS(INDEP_Uniform_Base): ls_greenforUniform_base {
        class ItemInfo;
    };
    class CLASS(Faction_Uniform): CLASS(OPFOR_Uniform_Base) {
        SCOPE_PUBLIC;
    };
};