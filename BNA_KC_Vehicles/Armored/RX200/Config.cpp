#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Tank;
    class Tank_F: Tank
    {
        class Turrets;
    };
    class 3AS_RX200_Base: Tank_F
    {
        class ACE_SelfActions;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class BNA_KC_RX200_Base: 3AS_RX200_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Tanks";
        editorPreview = "\BNA_KC_Vehicles\Armored\RX200\Data\Previews\RX200.jpg";

        displayName = "RX-200";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        hiddenSelectionsTextures[] = {"\BNA_KC_Vehicles\Armored\RX200\Data\Textures\Body_KC.paa"};

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] = {"\3as\3AS_RX200\data\DefaultMaterial_CO.paa"};
            };
            class KeeliCompany: Standard
            {
                author = "Rev";
                displayName = "Keeli Company";
                textures[] = {"\BNA_KC_Vehicles\Armored\RX200\Data\Textures\Body_KC.paa"};
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] = {"\BNA_KC_Vehicles\Armored\RX200\Data\Textures\Body_CamoKC.paa"};
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] = {"\BNA_KC_Vehicles\Armored\RX200\Data\Textures\Body_CamoBrown.paa"};
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] = {"\BNA_KC_Vehicles\Armored\RX200\Data\Textures\Body_CamoGrey.paa"};
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

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                startEngine = 0;
            };
        };

        INVENTORY_VEHICLE_BASE(2)
    };

    class BNA_KC_RX200_AA: BNA_KC_RX200_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "RX-200AA (Anti-Air)";

        class Turrets: Turrets
        {
            class MainTurret: MainTurret {};
        };
    };

    class BNA_KC_RX200_Artillery: BNA_KC_RX200_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "RX-200ART (Artillery)";

        artilleryScanner = 1;
        availableForSupportTypes[] = {"Artillery"};

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"mortar_155mm_AMOS"};
                magazines[] =
                {
                    "32Rnd_155mm_Mo_shells",
                    "2Rnd_155mm_Mo_guided",
                    "2Rnd_155mm_Mo_guided",
                    "6Rnd_155mm_Mo_mine",
                    "2Rnd_155mm_Mo_Cluster",
                    "6Rnd_155mm_Mo_smoke",
                    "2Rnd_155mm_Mo_LG",
                    "6Rnd_155mm_Mo_AT_mine"
                };

                turretInfoType = "RscWeaponRangeArtilleryAuto";
            };
        };
    };
};