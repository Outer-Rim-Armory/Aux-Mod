class CfgVehicles {
    class Wheeled_APC_F;
    class APC_Wheeled_01_base_F: Wheeled_APC_F {
        class Turrets;
    };
    class 3AS_ATTE_base: APC_Wheeled_01_base_F {
        class ACE_SelfActions;
        class UserActions;
        class Turrets: Turrets {
            class MainTurretFront;
            class MainTurretBack;
            class MainTurretTop;
        };
        class VehicleTransport {
            class Carrier;
        };
    };
    class CLASS(ATTE_Base): 3AS_ATTE_base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Walkers);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,ATTE_Base);

        displayName = "AT-TE (Base)";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};
        animationList[] = {
            // These values are actually inverted, they should be "hide"
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", FALSE,
            "ShowATTEIntBackPassenger", FALSE,
            "ShowATTEIntCommand", TRUE,
            "ShowATTERebelMod", TRUE
        };

        ace_cargo_space = 10;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Shell_co.paa),
            "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
            QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Detail_co.paa),
            QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Legs_co.paa),
            "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
            "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
        };

        textureList[] = {
            "Standard", 0,
            "Imperial", 0,
            "KeeliCompany", 1,
            "KeeliCompanyWhite", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Shell_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Shell_Imp_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Legs_Imp_co.paa",
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };
            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Shell_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Detail_co.paa),
                    QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Legs_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };

            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\atte\data\textures\KeeliCompanyWhite\Shell_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    QPATHTOF(land\atte\data\textures\KeeliCompanyWhite\Detail_co.paa),
                    QPATHTOF(land\atte\data\textures\KeeliCompanyWhite\Legs_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };

            class Rebecca: KeeliCompany {
                displayName = "Rebecca";
                textures[] = {
                    QPATHTOF(land\atte\data\textures\Rebecca\Shell_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    QPATHTOF(land\atte\data\textures\KeeliCompanyWhite\Detail_co.paa),
                    QPATHTOF(land\atte\data\textures\KeeliCompanyWhite\Legs_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };

            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\atte\data\textures\CamoBrown\Shell_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    QPATHTOF(land\atte\data\textures\CamoBrown\Detail_co.paa),
                    QPATHTOF(land\atte\data\textures\CamoBrown\Legs_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };

            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\atte\data\textures\CamoGrey\Shell_co.paa),
                    "\3AS\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    QPATHTOF(land\atte\data\textures\CamoGrey\Detail_co.paa),
                    QPATHTOF(land\atte\data\textures\CamoGrey\Legs_co.paa),
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Glass_ca.paa",
                    "\3AS\3AS_ATTE\data\textures\3AS_ATTE_Armor_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };

        class UserActions: UserActions {
            class PlayAlarm {
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

        class Turrets: Turrets {
            class MainTurretFront: MainTurretFront {
                weapons[] = {QCLASS(Turret_ATTE)};
                magazines[] = {
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells"
                };
            };
            class MainTurretBack: MainTurretBack {
                weapons[] = {QCLASS(Turret_ATTE)};
                magazines[] = {
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells",
                    "3AS_250Rnd_ATTE_30mm_MP_shells"
                };
            };
            class MainTurretTop: MainTurretTop {
                weapons[] = {QCLASS(Cannon_ATTE_MassDriver), "SmokeLauncher"};
                magazines[] = {
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
        class VehicleTransport: VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                canBeTransported = TRUE;
                dimensions[] = {"ftr_muzzle", "btl_muzzle"};
            };
            class Carrier: Carrier {};
        };
    };

    class CLASS(ATTE): CLASS(ATTE_Base) {
        SCOPE_PUBLIC;

        displayName = "AT-TE";
        animationList[] = {
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", FALSE,
            "ShowATTEIntBackPassenger", FALSE,
            "ShowATTEIntCommand", TRUE,
            "ShowATTERebelMod", TRUE
        };

        class VehicleTransport: VehicleTransport {
            class Carrier: Carrier {
                cargoBayDimensions[] = {{-1.53034, 1, 4.07491}, "limit2"};
            };
        };
    };

    class CLASS(ATTE_Command): CLASS(ATTE_Base) {
        SCOPE_PUBLIC;

        displayName = "AT-TE (Command)";
        animationList[] = {
            "ShowATTENuts", TRUE,
            "ShowATTEIntPassenger", TRUE,
            "ShowATTEIntBackPassenger", TRUE,
            "ShowATTEIntCommand", FALSE,
            "ShowATTERebelMod", TRUE
        };

        tf_range = 45000; // 1.5x range
    };
};