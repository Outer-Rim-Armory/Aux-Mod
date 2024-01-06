class CfgVehicles
{
    class Tank;
    class Tank_F: Tank
    {
        class Turrets;
    };
    class 3AS_ATTE_base: Tank_F
    {
        class UserActions;
        class Turrets: Turrets
        {
            class MainTurretFront;
            class MainTurretBack;
            class MainTurretTop;
        };
        class VehicleTransport
        {
            class Carrier;
        };
    };
    class CLASS(ATTE_Base): 3AS_ATTE_base
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Walkers);
        editorPreview = QPATHTOF(land\atte\data\previews\CLASS(ATTE_Base).jpg);

        displayName = "AT-TE (Base)";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};
        animationList[] =
        {
            // These values are actually inverted, they should be "hide"
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", FALSE,
            "ShowATTEIntBackPassenger", FALSE,
            "ShowATTEIntCommand", TRUE,
            "ShowATTERebelMod", TRUE
        };

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

        class Turrets: Turrets
        {
            class MainTurretFront: MainTurretFront
            {
                weapons[] = {QCLASS(Turret_ATTE)};
                magazines[] =
                {
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells"
                };
            };
            class MainTurretBack: MainTurretBack
            {
                weapons[] = {QCLASS(Turret_ATTE)};
                magazines[] =
                {
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells"
                };
            };
            class MainTurretTop: MainTurretTop
            {
                weapons[] = {QCLASS(Cannon_ATTE_MassDriver), "SmokeLauncher"};
                magazines[] =
                {
                    "3AS_30Rnd_Mass_Driver_shells",
                    "3AS_30Rnd_Mass_Driver_shells",
                    "3AS_30Rnd_Mass_Driver_shells",
                    "3AS_10Rnd_Siege_Cannon_HHE_shells",
                    "SmokeLauncherMag"
                };
            };
        };

        INVENTORY_VEHICLE_BASE(4);

        // Makes the 3AS AT-TE compatible with the vanilla vehicle-in-vehicle system
        // Credit: CrimzonKat @ https://ptb.discord.com/channels/461042140756180992/1062396582848372807
        class VehicleTransport: VehicleTransport
        {
            class Cargo
            {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                canBeTransported = TRUE;
                dimensions[] = {"ftr_muzzle", "btl_muzzle"};
            };
            class Carrier: Carrier {};
        };
    };

    class CLASS(ATTE): CLASS(ATTE_Base)
    {
        SCOPE_PUBLIC;

        displayName = "AT-TE";
        animationList[] =
        {
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", FALSE,
            "ShowATTEIntBackPassenger", FALSE,
            "ShowATTEIntCommand", TRUE,
            "ShowATTERebelMod", TRUE
        };

        class VehicleTransport: VehicleTransport
        {
            class Carrier: Carrier
            {
                cargoBayDimensions[] = {{-1.53034, 1, 4.07491}, "limit2"};
            };
        };
    };

    class CLASS(ATTE_Command): CLASS(ATTE_Base)
    {
        SCOPE_PUBLIC;

        displayName = "AT-TE (Command)";
        animationList[] =
        {
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", TRUE,
            "ShowATTEIntBackPassenger", TRUE,
            "ShowATTEIntCommand", FALSE,
            "ShowATTERebelMod", TRUE
        };

        tf_range = 45000; // 1.5x range
    };
};