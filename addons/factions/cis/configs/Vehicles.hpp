class CLASS(AAT_Base);
class CLASS(AAT_CIS): CLASS(AAT_Base) {
    SCOPE_PUBLIC;

    faction = QFACTION(CIS);

    crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

    hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
    editorPreview = EEDITOR_PREVIEW(vehicles\land\aat,AAT_Blue);
};