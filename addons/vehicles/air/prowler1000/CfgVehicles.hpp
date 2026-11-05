class CfgVehicles {
    class JLTS_UAV_prowler_base;
    class JLTS_UAV_prowler_gar: JLTS_UAV_prowler_base {};
    class CLASS(Prowler_UAV_Base): JLTS_UAV_prowler_gar {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Prowler 1000 Base";
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Drones);
        sch_PacksTo = QCLASS(Deployable_Prowler);
    };
    class CLASS(Prowler_UAV): CLASS(Prowler_UAV_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Prowler 1000";
    };
};
