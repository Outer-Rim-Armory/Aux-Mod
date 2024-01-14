class CfgVehicles
{
    class 3AS_Saber_M1;
    class CLASS(TX130_M1): 3AS_Saber_M1
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,TX130_M1);

        displayName = "TX-130 Saber Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\tx130\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] =
                {
                    "\3as\3as_saber\data\saber_hull_co.paa",
                    "\3as\3as_saber\data\saber_weapons_co.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "\3AS\3as_saber\data\saber_Imp_hull_co.paa",
                    "\3AS\3as_saber\data\saber_Imp_weapons_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                textures[] =
                {
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
                };
            };
            class CamoGrey: Standard
            {
                author = "Keeli Company Aux Team";
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Weapons_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3);
    };

    class CLASS(Saber_M1): CLASS(TX130_M1)
    {
        SCOPE_HIDDEN;
    };
};