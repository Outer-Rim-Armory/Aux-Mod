class CfgWeapons {
    class SCH_B_UAV_Packed;
    class CLASS(Deployable_Prowler): SCH_B_UAV_Packed {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] Prowler 1000 (Packed)";
        sch_unPacksTo = QCLASS(Prowler_UAV);
    };
};
