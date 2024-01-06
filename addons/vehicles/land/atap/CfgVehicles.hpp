class CfgVehicles
{
    class MBT_01_arty_base_F;
    class 3AS_ATAP_Base: MBT_01_arty_base_F
    {
        class ACE_SelfActions;
        class UserActions;
    };
    class CLASS(ATAP): 3AS_ATAP_Base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Walkers);
        editorPreview = QPATHTOF(land\atap\data\previews\CLASS(ATAP).jpg);

        displayName = "AT-AP";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\atap\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\atap\data\textures\KeeliCompany\Weapons_co.paa),
            QPATHTOF(land\atap\data\textures\KeeliCompany\Legs_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] =
                {
                    "\3as\3AS_ATAP\data\Hull_CO.paa",
                    "\3as\3AS_ATAP\data\weapons and decals_CO.paa",
                    "\3as\3AS_ATAP\data\legs_CO.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Weapons_co.paa),
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Legs_co.paa)
                };
            };
            class CamoGrey: Standard
            {
                author = "Keeli Company Aux Team";
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\atap\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\atap\data\textures\CamoGrey\Weapons_co.paa),
                    QPATHTOF(land\atap\data\textures\CamoGrey\Legs_co.paa)
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
                    condition = QUOTE(_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [ARR_2(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-2)]; if (_intercom == -2) then {_intercom = _vehicle getVariable [ARR_2('TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot)]}; _intercom != -1);
                    statement = QUOTE((vehicle ACE_Player) setVariable [ARR_3(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-1,true)]);
                };
                class TFAR_IntercomChannel_2
                {
                    displayName = "Crew";
                    condition = QUOTE(_vehicle = vehicle ace_Player; _intercom = _vehicle getVariable [ARR_2(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-2)]; if (_intercom == -2) then {_intercom = _vehicle getVariable [ARR_2('TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot)]}; _intercom != 1);
                    statement = QUOTE((vehicle ace_Player) setVariable [ARR_3(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),1,true)]);
                };
            };
        };

        class UserActions: UserActions
        {
            class PlayAlarm
            {
                displayName = "<t font='RobotoCondensedBold' color='#FFFFFF'>Play Alarm</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(ace_player == currentPilot this;);
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\atte\Alarm.ogg),objNull,false,getPosASL this,5,1,100)];);
            };
        };

        INVENTORY_VEHICLE_BASE(4);
    };
};