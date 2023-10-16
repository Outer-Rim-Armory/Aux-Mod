#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F
    {
        class ACE_SelfActions;
        class Turrets
        {
            class Reargun;
            class LaserPilot;
        };
        class PilotCamera;
    };
    class BNA_KC_ARC170: 3AS_ARC_170_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAir";

        displayName = "ARC-170";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        cabinOpenSound[] = {"\BNA_KC_Vehicles\Air\ARC170\Data\Audio\Canopy_Open.wss", 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {"\BNA_KC_Vehicles\Air\ARC170\Data\Audio\Canopy_Open.wss", 10, 1, 40};
        cabinCloseSound[] = {"\BNA_KC_Vehicles\Air\ARC170\Data\Audio\Canopy_Close.wss", 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {"\BNA_KC_Vehicles\Air\ARC170\Data\Audio\Canopy_Close.wss", 10, 1, 40};

        weapons[] = {"BNA_KC_ARC_Cannon_Medium", "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] =
        {
            "3AS_ARC_500Rnd_Light_Shells",
            "3AS_ARC_500Rnd_Light_Shells",
            "ls_mag_240rnd_CMFlareChaff_blue",
            "ls_mag_240rnd_CMFlareChaff_blue",
            "Laserbatteries"
        };

        hiddenSelectionsTextures[] =
        {
            "\3as\3as_arc170\Data\Main_Frame_co.paa",
            "\3as\3as_arc170\Data\Wings_Engines_co.paa",
            "\3as\3as_arc170\Data\Guns_co.paa"
        };

        textureList[] = {"Standard", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3as_arc170\Data\Main_Frame_co.paa",
                    "\3as\3as_arc170\Data\Wings_Engines_co.paa",
                    "\3as\3as_arc170\Data\Guns_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER

            class SpawnCrew
            {
                displayName = "Create Vehicle Crew";
                condition = "_this#0 emptyPositions '' > 0 and ace_player in (_this#0 call ace_common_fnc_getVehicleCrew)";
                statement = "(group ace_player) createVehicleCrew _this#0";
            };
            class DeleteCrew
            {
                displayName = "Delete Vehicle Crew";
                condition = "false in (_this#0 call ace_common_fnc_getVehicleCrew apply {_x call CWR_fnc_isPlayer;}) and ace_player in (_this#0 call ace_common_fnc_getVehicleCrew)";
                statement = "{_this#0 deleteVehicleCrew _x;} forEach (_this#0 call ace_common_fnc_getVehicleCrew)";
            };

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

        class UserActions
        {
            class Open_SFoils
            {
                displayName = "Deploy S-Foils";

                position = "camera";
                radius = 3;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 1.5;

                condition = "(this animationSourcePhase 'SFoil' == 1) and (player isEqualTo currentPilot this) and !(isTouchingGround this)";
                statement = "playSound3D ['\BNA_KC_Vehicles\Air\ARC170\Data\Audio\SFoils.wss', this]; this animateSource ['SFoil', 0]";
            };
            class Close_SFoils: Open_SFoils
            {
                displayName = "Fold S-Foils";
                condition = "(this animationSourcePhase 'SFoil' == 0) and (player isEqualTo currentPilot this) and !(isTouchingGround this)";
                statement = "playSound3D ['\BNA_KC_Vehicles\Air\ARC170\Data\Audio\SFoils.wss', this]; this animateSource ['SFoil', 1]";
            };

            class Eject: Open_SFoils
            {
                displayName = "<t font='RobotoCondensedBold'>Eject</t>";
                shortcut = "Eject";
                priority = 0.05;

                condition = "player in this and {speed this > 1}";
                statement = "[this] spawn bis_fnc_planeEjection";
            };
        };

        class Turrets: Turrets
        {
            class LaserPilot: LaserPilot
            {
                // Re-Do a bunch of work because the 501st Aux breaks things
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100};
                discreteDistanceInitIndex = 5;
                elevationMode = 0;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;

                turretFollowFreeLook = 2;
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                outGunnerMayFire = 1;
                startEngine = 0;

                // Animations
                gunnerAction = "Plane_Fighter_03_pilot";
                gunnerInAction = "Plane_Fighter_03_pilot";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerLeftHandAnimName = "lever_copilot";
                gunnerRightHandAnimName = "stick_copilot";
                animationSourceHatch = "";
            };
            class Reargun: Reargun {};
        };

        class PilotCamera: PilotCamera
        {
            initTurn = 0;   // Initial states
            initElev = -10;
            maxTurn = 180;  // Turn radius
            minTurn = -180;
            maxElev = 90;   // Elevation (how far up/down)
            minElev = -10;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;
        };
    };
};