#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class 3as_ATTE_base;
    class BNA_KC_ATTE: 3as_ATTE_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Walkers";
        editorPreview = "\BNA_KC_Vehicles\Armored\ATTE\Data\Previews\ATTE.jpg";

        displayName = "AT-TE";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        ace_cargo_space = 10;

        hiddenSelectionsTextures[] =
        {
            "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_co.paa",
            "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
            "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
            "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
            "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
            "\3as\3as_atte\data\textures\3as_atte_armor_co.paa"
        };

        textureList[] = {"Standard", 1, "Imperial", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] =
                {
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3as\3as_atte\data\textures\3as_atte_armor_co.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_Imp_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_Imp_co.paa",
                    "\3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3as\3as_atte\data\textures\3as_atte_armor_co.paa"
                };
            };
        };

        class UserActions
        {
            class PlayAlarm
            {
                displayName = "<t font='RobotoCondensedBold' color='#FFFFFF'>Play Alarm</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = "ace_player == currentPilot this;";
                statement = "playSound3D ['BNA_KC_Vehicles\VehicleSounds\Data\Audio\ATTE\alarm.ogg', this, false, getPosASL this, 5, 1, 100];";
            };
        };

        INVENTORY_VEHICLE_BASE(4)

        // Makes the 3AS AT-TE compatible with the vanilla vehicle-in-vehicle system
        // Credit: CrimzonKat @ https://ptb.discord.com/channels/461042140756180992/1062396582848372807
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass = B_Parachute_02_F;
                parachuteHeightLimit = 40;
                canBeTransported = 1;
                dimensions[] = { "ftr_muzzle", "btl_muzzle" };

                BNA_KC_SpecialLoad = 1;
            };
        };
    };
};