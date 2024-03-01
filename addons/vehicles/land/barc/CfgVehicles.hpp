class CfgVehicles
{
    class 3AS_BARC;
    class CLASS(BARC): 3AS_BARC
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = EDSUBCAT(Speeders);
        // editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,BARC);

        displayName = "BARC Speeder";
        crew = QCLASS(Unit_ARF_CT);
        typicalCargo[] = {QCLASS(Unit_ARF_CT)};

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"};

        textureList[] = {"Standard", 1, "KeeliCompany", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"};
            };

            // Temporary textures
            class KeeliCompany: Standard
            {
                displayName = "Keeli Company";
                author = "Keeli Company Aux Team";
                textures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_212_co.paa"};
            };
        };
    };
};