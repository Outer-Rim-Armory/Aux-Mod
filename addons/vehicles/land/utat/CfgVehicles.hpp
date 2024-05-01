class CfgVehicles {
    class 3AS_UTAT;
    class CLASS(UTAT): 3AS_UTAT {
        SCOPE_PUBLIC;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\utat,UTAT);

        displayName = "UT-AT";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelections[] = {"camo", "camo1"}; // 3AS bug, missing comma in original config
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
            QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa",
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
                };
            };
        };
    };
};