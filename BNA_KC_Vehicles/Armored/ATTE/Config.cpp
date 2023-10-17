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
        scope = 1;
        scopeCurator = 1;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "AT-TE";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        ace_cargo_space = 10;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Body.paa",
            "\3as\3as_atte\data\atte_chasis_co.paa",
            "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Cockpit.paa",
            "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Turrets.paa",
            "\3as\3as_atte\data\atte_underpiping_co.paa",
            "\3as\3as_atte\data\atte_middleleg_co.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3as_atte\data\atte_hull_TCW_co.paa",
                    "\3as\3as_atte\data\atte_chasis_co.paa",
                    "\3as\3as_atte\data\atte_cockpit_TCW_co.paa",
                    "\3as\3as_atte\data\atte_turrets_TCW_co.paa",
                    "\3as\3as_atte\data\atte_underpiping_co.paa",
                    "\3as\3as_atte\data\atte_middleleg_TCW_co.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "\3as\3as_atte\data\atte_hull_Imp_co.paa",
                    "\3as\3as_atte\data\atte_chasis_co.paa",
                    "\3as\3as_atte\data\atte_cockpit_Imp_co.paa",
                    "\3as\3as_atte\data\atte_turrets_Imp_co.paa",
                    "\3as\3as_atte\data\atte_underpiping_co.paa",
                    "\3as\3as_atte\data\atte_middleleg_Imp_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Body.paa",
                    "\3as\3as_atte\data\atte_chasis_co.paa",
                    "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Cockpit.paa",
                    "\BNA_KC_Vehicles\Armored\ATTE\Data\Textures\KeeliCompany\Turrets.paa",
                    "\3as\3as_atte\data\atte_underpiping_co.paa",
                    "\3as\3as_atte\data\atte_middleleg_co.paa"
                };
            };
        };

        class UserActions
        {
            class PlayAlarm
            {
                displayName = "<t font='RobotoCondensedBold' color='#ffffff'>Play Alarm</t>";
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

        // Increase headlight brightness
        class Reflectors
        {
            class Left
            {
                color[] = {1900, 1800, 1700};
                ambient[] = {5, 5, 5};
                intensity = 25;

                innerAngle = 45;
                outerAngle = 139;
                coneFadeCoef = 10;

                dayLight = 0;

                size = 1;
                flareSize = 0;
                useFlare = 0;

                hitpoint = "ftl_gun";
                direction = "Light_L_end";
                position = "ftl_gun";
                selection = "ftl_gun";
            };

            class Left2: Left
            {
                hitpoint = "ftl_gun";
                position = "ftl_gun";
            };

            class Right: Left
            {
                direction = "Light_R_end";
                hitpoint = "ftr_gun";
                position = "ftr_gun";
                selection = "ftr_gun";
            };
            class Right2: Right
            {
                hitpoint = "ftr_gun";
                position = "ftr_gun";
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