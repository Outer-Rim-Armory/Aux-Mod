#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


class CfgVehicles
{
    class 3as_saber_m1;
    class BNA_KC_Saber_M1: 3as_saber_m1
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";
        editorPreview = "\BNA_KC_Vehicles\Armored\Data\Textures\Previews\Saber_M1.jpg";

        displayName = "[KC] TX-130 Saber Tank";
		crew = "BNA_KC_Unit_Phase2_Tanker";

		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\Textures\Saber\BNA_KC_Saber_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Textures\Saber\BNA_KC_Saber_Weapons.paa"
		};

        textureList[] = { "Standard", 0, "Imperial", 0, "KeeliCompany", 1 };
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "3as\3as_saber\data\saber_hull_co.paa",
                    "3as\3as_saber\data\saber_weapons_co.paa"
                };
            };
            class Imperial: Standard
            {
                author = "Charger";
                displayName = "Imperial";
                textures[] =
                {
                    "3AS\3as_saber\data\saber_Imp_hull_co.paa",
                    "3AS\3as_saber\data\saber_Imp_weapons_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\Textures\Saber\BNA_KC_Saber_Body.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\Saber\BNA_KC_Saber_Weapons.paa"
                };
            };
        };
	};

    /*
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
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] AT-TE";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Body.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Cockpit.paa",
			"BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Turrets.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
			"3as\3as_atte\data\atte_middleleg_co.paa"
		};

        textureList[] = { "Standard", 0, "Imperial", "KeeliCompany", 1 };
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "3as\3as_atte\data\atte_hull_TCW_co.paa",
                    "3as\3as_atte\data\atte_chasis_co.paa",
                    "3as\3as_atte\data\atte_cockpit_TCW_co.paa",
                    "3as\3as_atte\data\atte_turrets_TCW_co.paa",
                    "3as\3as_atte\data\atte_underpiping_co.paa",
                    "3as\3as_atte\data\atte_middleleg_TCW_co.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "3as\3as_atte\data\atte_hull_Imp_co.paa",
                    "3as\3as_atte\data\atte_chasis_co.paa",
                    "3as\3as_atte\data\atte_cockpit_Imp_co.paa",
                    "3as\3as_atte\data\atte_turrets_Imp_co.paa",
                    "3as\3as_atte\data\atte_underpiping_co.paa",
                    "3as\3as_atte\data\atte_middleleg_Imp_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Body.paa",
                    "3as\3as_atte\data\atte_chasis_co.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Cockpit.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\ATTE\BNA_KC_ATTE_Turrets.paa",
                    "3as\3as_atte\data\atte_underpiping_co.paa",
                    "3as\3as_atte\data\atte_middleleg_co.paa"
                };
            };
        };

        // Scrollwheel Actions
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

        // Horns don't work on vehicles with a simulation other than "carx"
        // weapons[] = { "BNA_KC_ATTE_Alarm" };

        ace_cargo_space = 10;

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

                BNA_KC_SpecialLoad = 1; // The standard "Load Vehicle" option doesn't appear, requiring a custom script to work
            };
        };
	};
    */

    class MBT_01_arty_base_F;
    class 3AS_ATAP_Base: MBT_01_arty_base_F
    {
        class ACE_SelfActions;
        class UserActions;
    };
    class BNA_KC_ATAP: 3AS_ATAP_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";
        editorPreview = "\BNA_KC_Vehicles\Armored\Data\Textures\Previews\ATAP.jpg";

        displayName = "[KC] AT-AP";
        crew = "BNA_KC_Unit_Phase2_Tanker";

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Body_KC.paa",
            "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Weapons_KC.paa",
            "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Legs_KC.paa"
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3AS_ATAP\data\Hull_CO.paa",
                    "\3as\3AS_ATAP\data\weapons and decals_CO.paa",
                    "\3as\3AS_ATAP\data\legs_CO.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Rev";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Body_KC.paa",
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Weapons_KC.paa",
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Legs_KC.paa"
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Weapons_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Armored\Data\Textures\ATAP\ATAP_Legs_CamoGrey.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            class TFAR_IntercomChannel
            {
                displayName = "Intercom Channel";
                condition = "true";
                statement = "";

                class TFAR_IntercomChannel_disabled
                {
                    displayName = "Disabled";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true]";
                };
                class TFAR_IntercomChannel_2
                {
                    displayName = "Crew";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true]";
                };
            };
        };

        class UserActions: UserActions
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
    };

    class Car_F;
    class Wheeled_Apc_F: Car_F
    {
        class HitPoints;
    };
    class 3AS_Jug_base_F: Wheeled_Apc_F
    {
        class HitPoints: HitPoints
        {
            class HitBody;
            class HitHull;
        };
        class UserActions
        {
            class Crow_nest_Up;
            class Crow_nest_down;
            class Open_rockets;
            class Close_rockets;
        };
    };
    class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F {};
    class 3as_Jug: 3AS_B_Jug_01_base_F {};
    class BNA_KC_Juggernaut: 3as_Jug
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] HAVw A6 Juggernaut";
        crew = "BNA_KC_Unit_Phase2_Tanker";

        ace_cargo_space = 20;

        weapons[] =
        {
            "BNA_KC_Juggernaut_Horn",
            "BNA_KC_Juggernaut_Alarm"
        };

        // Look at https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection for info on what each value does
        class HitPoints: HitPoints
        {
            class HitBody: HitBody
            {
                armor = 2;
                explosionShielding = 0.15;
            };
            class HitHull: HitHull
            {
                armor = 2;
                explosionShielding = 0.85;
            };
        };

        class UserActions: UserActions
        {
            class Crow_nest_Up: Crow_nest_Up
            {
                condition = "this animationSourcePhase 'crownest' == 0 and alive this and ace_player == this turretUnit [4]";
            };
            class Crow_nest_down: Crow_nest_down
            {
                condition = "this animationSourcePhase 'crownest' == 5 and alive this and ace_player == this turretUnit [4]";
            };
            class Open_rockets: Open_rockets
            {
                condition = "this animationSourcePhase 'rocket_move' == 1  and alive this and ace_player == this turretUnit [3]";
            };
            class Close_rockets: Close_rockets
            {
                condition = "this animationSourcePhase 'rocket_move' == 0 and alive this and ace_player == this turretUnit [3]";
            };
        };
    };
};