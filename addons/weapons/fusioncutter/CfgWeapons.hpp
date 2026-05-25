class CfgWeapons {
    class 3AS_FusionCutter_F;
    class CLASS(Fusion_Cutter_Base): 3AS_FusionCutter_F {
        SCOPE_PRIVATE;
        displayName = "[KC] Fusion Cutter (Base)";
        magazines[] = {
            QCLASS(Mag_FusionCutter)
        };
    };
    class CLASS(Fusion_Cutter): CLASS(Fusion_Cutter_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Fusion Cutter";
    };
};
