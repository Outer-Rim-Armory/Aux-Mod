class CfgVehicles {
    class 3AS_UTAT;
    class CLASS(UTAT): 3AS_UTAT {
        SCOPE_PUBLIC;


        faction = QCLASS(Faction_KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        // editorPreview = EEDITOR_PREVIEW(vehicles\land\utat,UTAT);

        displayName = "UT-AT";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelections[] = {"camo", "camo1"}; // 3AS bug, missing comma in original config
        hiddenSelectionsTextures[] = {DBUG_TEX_RED, DBUG_TEX_GRN};
    };
};