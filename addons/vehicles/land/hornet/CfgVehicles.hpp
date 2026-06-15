class CfgVehicles {
    class UserActions;
    class O_LSV_02_unarmed_F;
    class CLASS(Hornet_Unarmed): O_LSV_02_unarmed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_Unarmed);

        displayName = "01: Hornet Strike Vehicle";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
        };
        textureList[] = {
            "KeeliCompany", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGray", 0,
            "Carnage", 0,
            "Harry", 0,
            "Swoop", 0,
            "Ceremonial", 0,
            "Turtle", 0
        };
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                author = AUTHOR;
                displayName = "KC Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Interior_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Interior_co.paa)
                };
            };
            class CamoGray: KeeliCompany {
                displayName = "Gray Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa)
                };
            };
            class Carnage: KeeliCompany {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\carnage\Body_Carnage_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
                };
            };
            class Harry: KeeliCompany {
                displayName = "Harry";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Interior_co.paa)
                };
            };
            class Swoop: KeeliCompany {
                displayName = "Swoop";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Interior_co.paa)
                };
            };
            class Ceremonial: KeeliCompany {
                displayName = "Ceremonial";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Interior_CO.paa),
                };
            };
            class Turtle: KeeliCompany {
                displayName = "Turtle";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\gray\Turtle_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa)
                };
            };
        };

        class UserActions: UserActions {

            class HornCarnage {
                displayName = "Play Horn [Carnage]";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";
                position = "pilotview";
                radius = 50;
                onlyForPlayer = FALSE;
                hideOnUse = TRUE;
                priority = 5;
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Carnage' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Carnage_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
            class HornHarry: HornCarnage {
                displayName = "<t color='#c22d2d'> Play Horn [Harry] </t>";
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Harry' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Harry_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
        };

        INVENTORY_VEHICLE_RECON;
    };

    class Car_F;
    class LSV_02_base_F: Car_F {
        class AnimationSources;
        class Turrets;
    };
    class LSV_02_armed_base_F: LSV_02_base_F {
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class CLASS(Hornet_MG): O_LSV_02_armed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_MG);

        displayName = "02: Hornet Strike Vehicle (MG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
        };
        textureList[] = {
            "KeeliCompany", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGray", 0,
            "Carnage", 0,
            "Harry", 0,
            "Swoop", 0,
            "Ceremonial", 0,
            "Turtle", 0
        };
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                author = AUTHOR;
                displayName = "KC Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Interior_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Interior_co.paa)
                };
            };
            class CamoGray: KeeliCompany {
                displayName = "Gray Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa)
                };
            };
            class Carnage: KeeliCompany {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\carnage\Body_Carnage_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa)
                };
            };
            class Harry: KeeliCompany {
                displayName = "Harry";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Interior_co.paa)
                };
            };
            class Swoop: KeeliCompany {
                displayName = "Swoop";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Interior_co.paa)
                };
            };
            class Ceremonial: KeeliCompany {
                displayName = "Ceremonial";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Interior_CO.paa),
                };
            };
            class Turtle: KeeliCompany {
                displayName = "Turtle";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\gray\Turtle_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa)
                };
            };
        };

        class UserActions {

            class HornCarnage {
                displayName = "Play Horn [Carnage]";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";
                position = "pilotview";
                radius = 50;
                onlyForPlayer = FALSE;
                hideOnUse = TRUE;
                priority = 5;
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Carnage' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Carnage_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
            class HornHarry: HornCarnage {
                displayName = "<t color='#c22d2d'> Play Horn [Harry] </t>";
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Harry' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Harry_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
        };

        INVENTORY_VEHICLE_RECON;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(MachineGun_Hornet)};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax)
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources {
            class Minigun {
                source = "revolving";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_hide {
                source = "reload";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(MachineGun_Hornet);
            };
        };
    };
    class CLASS(Hornet_Armed): CLASS(Hornet_MG) {
        SCOPE_HIDDEN;
    };

    class LSV_02_AT_base_F: LSV_02_base_F {
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class CLASS(Hornet_AT): O_LSV_02_AT_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_AT);

        displayName = "03: Hornet Strike Vehicle (AT)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
            QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
        };
        textureList[] = {
            "KeeliCompany", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGray", 0,
            "Carnage", 0,
            "Harry", 0,
            "Swoop", 0,
            "Ceremonial", 0,
            "Turtle", 0
        };
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\kc\KC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                author = AUTHOR;
                displayName = "KC Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\kc\CamoKC_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\brown\CamoBrown_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class CamoGray: KeeliCompany {
                displayName = "Gray Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class Carnage: KeeliCompany {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\carnage\Body_Carnage_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\kc\KC_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class Harry: KeeliCompany {
                displayName = "Harry";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\harry\Harry_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class Swoop: KeeliCompany {
                displayName = "Swoop";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\swoop\Swoop_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class Ceremonial: KeeliCompany {
                displayName = "Ceremonial";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\ceremonial\KC_Hornet_Interior_CO.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class Turtle: KeeliCompany {
                displayName = "Turtle";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\trutle\Turtle_Body_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Wheels_co.paa),
                    QPATHTOF(land\hornet\data\textures\camo\gray\CamoGray_Interior_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
        };

        class UserActions {

            class HornCarnage {
                displayName = "Play Horn [Carnage]";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";
                position = "pilotview";
                radius = 50;
                onlyForPlayer = FALSE;
                hideOnUse = TRUE;
                priority = 5;
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Carnage' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Carnage_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
            class HornHarry: HornCarnage {
                displayName = "<t color='#c22d2d'> Play Horn [Harry] </t>";
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Harry' and {ace_player == currentPilot this});
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\hornet\Harry_Horn.wss),objNull,false,getPosASL this,5,1,4800)];);
            };
        };

        INVENTORY_VEHICLE_RECON;

        class AnimationSources: AnimationSources {
            class VoronaMuzzle_reload {
                source = "reload";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_reloadMagazine {
                source = "reloadMagazine";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_revolving {
                source = "revolving";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(Launcher_Hornet);
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Launcher_Hornet)};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};
