class BNA_KC_AAT_Base;
class BNA_KC_AAT_CIS: BNA_KC_AAT_Base
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    faction = "BNA_KC_OPFOR_CIS";
    editorSubcategory = "BNA_KC_SubCat_OPFOR_Tanks";

    crew = "JLTS_Droid_B1_Crew";
    typicalCargo[] = {"JLTS_Droid_B1_Crew"};

    hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
    editorPreview = "\BNA_KC_Vehicles\Armored\AAT\Data\Previews\AAT_Blue.jpg";

    textureList[] =
    {
        "CIS", 1,
        "TradeFederation", 0,
        "Green", 0,
        "Red", 0,
        "Desert", 0,
        "Geonosis", 0,
        "Woodland", 0,
        "Tropical", 0,
        "Arid", 0,
        "Winter", 0,
        "Aqua", 0
    };
};