class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
        class UserActions;
        class Turrets {
            class Reargun;
            class LaserPilot;
        };
        class PilotCamera;
    };
    class CLASS(ARC170): 3AS_ARC_170_Base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Planes);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,ARC170);

        displayName = "ARC-170";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};

        ls_vehicle_SFoilsAnims[] = {"SFoil"};
        ls_vehicle_SFoilsToggleSounds[] = {QCLASS(Sound_ARC170_SFoils_Toggle), QCLASS(Sound_ARC170_SFoils_Toggle)};

        weapons[] = {QCLASS(Cannon_ARC), "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {
            "3AS_ARC_500Rnd_Light_Shells",
            "3AS_ARC_500Rnd_Light_Shells",
            "ls_mag_240Rnd_CMFlareChaff_blue",
            "ls_mag_240Rnd_CMFlareChaff_blue",
            "Laserbatteries"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(air\arc170\data\textures\Main_Frame_co.paa),
            QPATHTOF(air\arc170\data\textures\Wings_Engines_co.paa),
            QPATHTOF(air\arc170\data\textures\Guns_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3as_arc170\Data\Main_Frame_co.paa",
                    "\3as\3as_arc170\Data\Wings_Engines_co.paa",
                    "\3as\3as_arc170\Data\Guns_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\arc170\data\textures\Main_Frame_co.paa),
                    QPATHTOF(air\arc170\data\textures\Wings_Engines_co.paa),
                    QPATHTOF(air\arc170\data\textures\Guns_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;

            AI_CREW_SPAWNER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };

        class UserActions: UserActions {
            class DeploySfoils {
                displayName = "Deploy S-Foils";

                position = "camera";
                radius = 3;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 1.5;

                condition = QUOTE((this animationSourcePhase 'SFoil' == 1) and {(ace_player isEqualTo currentPilot this) and speed this > 1});
                statement = QUOTE([ARR_2('SFoils',true)] call ls_fnc_keybind_operationFrameWork;);
            };
            class UndeploySfoils: DeploySfoils {
                displayName = "Fold S-Foils";
                condition = QUOTE((this animationSourcePhase 'SFoil' == 0) and {(ace_player isEqualTo currentPilot this)});
                statement = QUOTE([ARR_2('SFoils',true)] call ls_fnc_keybind_operationFrameWork;);
            };

            class Plane_Fighter_03_Eject: DeploySfoils {
                displayName = "<t font='RobotoCondensedBold'>Eject</t>";
                condition = QUOTE(ace_player in this and {speed this > 1});
                statement = QUOTE([this] spawn bis_fnc_planeEjection);
            };
        };

        class Turrets: Turrets {
            class LaserPilot: LaserPilot {
                weapons[] = {QCLASS(Cannon_ARC_Heavy)};

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
            class Reargun: Reargun {
                weapons[] = {QCLASS(Cannon_ARC_Light), "ls_weapon_CMFlareLauncher"};
                magazines[] = {"3AS_ARC_500Rnd_Light_Shells", "ls_mag_240Rnd_CMFlareChaff_blue"};
            };
        };

        INVENTORY_VEHICLE_BASE(3);

        class PilotCamera: PilotCamera {
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