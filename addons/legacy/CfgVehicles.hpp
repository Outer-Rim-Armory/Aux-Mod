class CfgVehicles {
    class CLASS(Unit_ARC_CT);
    class CLASS(Unit_ARC): CLASS(Unit_ARC_CT) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_ARF_CT);
    class CLASS(Unit_ARF): CLASS(Unit_ARF_CT) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_Phase1_CXA);
    class CLASS(Unit_Phase1_Pilot): CLASS(Unit_Phase1_CXA) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_Phase2_CXA);
    class CLASS(Unit_Phase2_Pilot): CLASS(Unit_Phase2_CXA) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_Phase2_CXE);
    class CLASS(Unit_Phase2_Pilot_Officer): CLASS(Unit_Phase2_CXE) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_Phase1_Tanker_CT);
    class CLASS(Unit_Phase1_Tanker): CLASS(Unit_Phase1_Tanker_CT) {
        SCOPE_HIDDEN;
    };

    class CLASS(Unit_Phase2_Tanker_CT);
    class CLASS(Unit_Phase2_Tanker): CLASS(Unit_Phase2_Tanker_CT) {
        SCOPE_HIDDEN;
    };

    class CLASS(Venator_Resurgence_ClosedFullyHollowed);
    class CLASS(Ven_Resurgence_ClosedFullyHollowed): CLASS(Venator_Resurgence_ClosedFullyHollowed) {
        SCOPE_HIDDEN;
    };

    class CLASS(Venator_Resurgence_OpenFullyHollowed);
    class CLASS(Ven_Resurgence_OpenFullyHollowed): CLASS(Venator_Resurgence_OpenFullyHollowed) {
        SCOPE_HIDDEN;
    };

    class CLASS(Venator_Resurgence_Zeus);
    class CLASS(Ven_Resurgence_Zeus): CLASS(Venator_Resurgence_Zeus) {
        SCOPE_HIDDEN;
    };

    class CLASS(Hydra);
    class CLASS(OLV20): CLASS(Hydra) {
        SCOPE_HIDDEN;
    };

    class CLASS(Reek);
    class CLASS(Badger): CLASS(Reek) {
        SCOPE_HIDDEN;
    };
    class CLASS(APC_Badger): CLASS(Badger) {};
};
