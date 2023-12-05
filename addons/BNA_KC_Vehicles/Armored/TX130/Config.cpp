#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class 3as_saber_m1;
    class BNA_KC_TX130_M1: 3as_saber_m1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Tanks";
        editorPreview = "\BNA_KC_Vehicles\Armored\TX130\Data\Previews\TX130_M1.jpg";

        displayName = "TX-130 Saber Tank";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\KeeliCompany\Body.paa",
            "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\KeeliCompany\Weapons.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = { "BNA_KC_Faction" };
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
                author = "Rev";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\KeeliCompany\Weapons.paa"
                };
            };
            class CamoGrey: Standard
            {
                author = "Rev";
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Armored\TX130\Data\Textures\CamoGrey\Weapons.paa"
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3)
    };

    class BNA_KC_Saber_M1: BNA_KC_TX130_M1
    {
        scope = 1;
        scopeCurator = 0;
    };
};