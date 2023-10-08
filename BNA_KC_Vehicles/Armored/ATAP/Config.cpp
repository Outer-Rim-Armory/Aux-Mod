#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
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
};