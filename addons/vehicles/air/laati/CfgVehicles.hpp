class ls_impulsor_base;

class CfgVehicles {
    class Helicopter_Base_H;
    class 3AS_LAAT_Base: Helicopter_Base_H {
        class ACE_SelfActions;
        class AnimationSources;
        class Turrets;
        class pilotCamera;
    };
    class CLASS(LAATi_Base): 3AS_LAAT_Base {
        class LS_Impulsor: ls_impulsor_base{
            fuelDrain = 0;
            overchargeFuelDrain = 0;
        };
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        side = BLUFOR;

        displayName = "LAAT/i (Base)";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        armor = 200;
        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        vehicleClass = "Helicopter";
        availableForSupportTypes[] = {"CAS_Heli", "Transport", "Drop"};

        ls_vehicle_rampAnims[] = {"ramp"};
        ls_vehicle_rampToggleSounds[] = {QCLASS(Sound_LAAT_Ramp), QCLASS(Sound_LAAT_Ramp)};

        // Weapons and mags
        weapons[] = {
            "3as_LAAT_Medium_Canon",
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_laati_turret_50mm_ap",
            "3AS_LAAT_Missile_AGM",
            "3AS_LAAT_Missile_AA",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
        };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "Laserbatteries",
            "3AS_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3AS_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3AS_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3AS_LAAT_8Rnd_Missile_AGM",
            "3AS_LAAT_8Rnd_Missile_AGM",
            "3AS_LAAT_8Rnd_Missile_AGM",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells"
        };

        // Textures
        hiddenSelectionsTextures[] = {
            QPATHTOF(air\laati\data\textures\KeeliCompany2\Hull_co.paa),
            QPATHTOF(air\laati\data\textures\KeeliCompany2\Wings_co.paa),
            "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };

        textureList[] = {
            "Standard", 0,
            "Imperial", 0,
            "KeeliCompany", 0,
            "KeeliCompany2", 1,
            "Wyvern", 1,
            "Akali", 0,
            "TwiLek", 0,
            "Katarina", 0
        };

        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3as_Laat\LAATI\data\Hull_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Wings_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\weapons_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\weapon_Details_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\interior_Imp_CO.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\laati\data\textures\KeeliCompany\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\KeeliCompany\Wings_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class KeeliCompany2: KeeliCompany {
                displayName = "Keeli Company 2";
                textures[] = {
                    QPATHTOF(air\laati\data\textures\KeeliCompany2\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\KeeliCompany2\Wings_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Wyvern: KeeliCompany {
                displayName = "Wyvern";
                textures[] = {
                    QPATHTOF(air\laati\data\textures\Wyvern\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\Wyvern\Wings_co.paa),
                    QPATHTOF(air\laati\data\textures\Wyvern\Weapons_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Akali: KeeliCompany {
                displayName = "Akali";
                textures[] = {
                    QPATHTOF(air\laati\data\textures\Akali\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\Akali\Wings_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class TwiLek: KeeliCompany {
                displayName = "Twi'Lek";
                textures[] = {
                    QPATHTOF(air\laati\data\textures\TwiLek\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\TwiLek\Wings_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Katarina: KeeliCompany {
                displayName = "Katarina";
                textures[] = {
                    QPATHTOF(air\laati\data\textures\Katarina\Hull_co.paa),
                    QPATHTOF(air\laati\data\textures\Katarina\Wings_co.paa),
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class UserActions {
            class Impulse {};

            class DoorsOpen: Impulse {
                displayName = "Open Doors";
                condition = QUOTE(ace_player == currentPilot this and (this animationPhase 'door_L') == 1;);
                statement = QUOTE(this action [ARR_2('LandGear',this)]; this say3D QQCLASS(Sound_LAAT_DoorsOpen););
            };
            class DoorsClose: DoorsOpen {
                displayName = "Close Doors";
                condition = QUOTE(ace_player == currentPilot this and (this animationPhase 'door_L') == 0;);
                statement = QUOTE(this action [ARR_2('LandGearUp',this)]; this say3D QQCLASS(Sound_LAAT_DoorsClose););
            };

            class RampOpen: Impulse {
                displayName = "Open Ramp";
                condition = QUOTE(ace_player == currentPilot this and this animationSourcePhase 'ramp' == 0;);
                statement = QUOTE([ARR_2('ramp',true)] call ls_fnc_keybind_operationFrameWork;);
            };
            class RampClose: RampOpen {
                displayName = "Close Ramp";
                condition = QUOTE(ace_player == currentPilot this and this animationSourcePhase 'ramp' == 1;);
                statement = QUOTE([ARR_2('ramp',true)] call ls_fnc_keybind_operationFrameWork;);
            };

            class LoadVehicle: Impulse {
                displayName = "Load Vehicle";
                condition = QUOTE(ace_player isEqualTo currentPilot this and {this call FUNC(vivCanLoad)});
                statement = QUOTE(this call FUNC(vivLoad));
            };

            class HornWyvern: Impulse {
                displayName = "Play Horn";
                condition = QUOTE(this getVariable [ARR_2(QQGVAR(currentSkin),'')] == 'Wyvern' and {ace_player == currentPilot this});
                statement = QUOTE([ARR_2(this,QQCLASS(Sound_Horn_Wyvern))] call FUNC(playHorn));
            };
        };

        class AnimationSources: AnimationSources {
            class Doors {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class Lamps {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class Turrets {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };

        class Turrets: Turrets {
            class CoPilot;
            class LeftDoorGun;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };

        class pilotCamera: pilotCamera {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;

            ace_missileguidance_usePilotCameraForTargeting = TRUE;
        };
    };

    class CLASS(LAATi_MK1): CLASS(LAATi_Base) {
        SCOPE_PUBLIC;
        displayName = "LAAT/i MK1";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK1);

        class AnimationSources: AnimationSources {
            class Turrets: Turrets {
                initPhase = 1;
            };
        };

        class Turrets: Turrets {
            class CoPilot: CoPilot {};
            class LeftDoorGun: LeftDoorGun {};
            class RightDoorGun: RightDoorGun {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
    };
    class CLASS(LAATi_MK1_Lamps): CLASS(LAATi_MK1) {
        displayName = "LAAT/i MK1 (Lamps)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK1_Lamps);

        class AnimationSources: AnimationSources {
            class Lamps: Lamps {
                initPhase = 1;
            };
            class Turrets: Turrets {
                initPhase = 0;
            };
        };

        class Turrets: Turrets {
            class CoPilot: CoPilot {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
    };

    class CLASS(LAATi_MK2): CLASS(LAATi_Base) {
        SCOPE_PUBLIC;

        displayName = "LAAT/i MK2";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK2);

        class AnimationSources: AnimationSources {
            class Doors: Doors {
                initPhase = 1;
            };
        };

        class Turrets: Turrets {
            class CoPilot: CoPilot {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
    };
    class CLASS(LAATi_MK2_Lamps): CLASS(LAATi_MK2) {
        displayName = "LAAT/i MK2 (Lamps)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK2_Lamps);
        class AnimationSources: AnimationSources {
            class Lamps: Lamps {
                initPhase = 1;
            };
        };
    };
};
