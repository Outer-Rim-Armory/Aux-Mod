class CfgWeapons {
    class ls_helmet_base;
    class ls_uniform_base;
    class ls_vest_base;
    class ItemInfo;
    class CLASS(BLUFOR_Helmet_Base): ls_helmet_base {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        displayName = "BLUFOR Helmet Base";
    };

    class CLASS(BLUFOR_Uniform_Base): ls_uniform_base {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        displayName = "BLUFOR Uniform Base";
        class ItemInfo: ItemInfo {
            uniformType = "Neopren";
        };
    };

    class CLASS(BLUFOR_Vest_Base): ls_vest_base {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        displayName = "BLUFOR Vest Base";
        class ItemInfo: ItemInfo {
            vestType = "Rebreather";
        };
    };

    class CLASS(OPFOR_Helmet_Base): ls_helmet_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "OPFOR Helmet Base";
    };

    class CLASS(OPFOR_Uniform_Base): ls_uniform_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "OPFOR Uniform Base";
        class ItemInfo: ItemInfo {
            uniformType = "Neopren";
        };
    };

    class CLASS(OPFOR_Vest_Base): ls_vest_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "OPFOR Vest Base";
        class ItemInfo: ItemInfo {
            vestType = "Rebreather";
        };
    };

    class CLASS(INDEP_Helmet_Base): ls_helmet_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "INDEP Helmet Base";
    };

    class CLASS(INDEP_Uniform_Base): ls_uniform_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "INDEP Uniform Base";
        class ItemInfo: ItemInfo {
            uniformType = "Neopren";
        };
    };

    class CLASS(INDEP_Vest_Base): ls_vest_base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "INDEP Vest Base";
        class ItemInfo: ItemInfo {
            vestType = "Rebreather";
        };
    };
};
