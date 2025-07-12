class CfgVehicles {
    class Helicopter_Base_H;
    class ls_vehicle_laatc_base: Helicopter_Base_H {
        class VehicleTransport {
            class Carrier;
        };
    };
    class ls_vehicle_laatc: ls_vehicle_laatc_base {
        class ACE_SelfActions;
        class UserActions;
    };
    class ls_vehicles_laatc: ls_vehicle_laatc_base {
        class ACE_SelfActions;
        class UserActions;
    };
    class CLASS(LAATc): ls_vehicle_laatc {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATc);

        displayName = "LAAT/c";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_CMFlareLauncher"
            };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green"
            };

        backRotorForceCoef = 1.8;
        backRotorSpeed = 1;
        bodyFrictionCoef = 1.9845;
        brakeDistance = 400;

        cyclicAsideForceCoef = 2.8;
        cyclicForwardForceCoef = 2;

        liftForceCoef = 3;

        maxMainRotorDive = 7;
        maxSpeed = 600;
        startDuration = 4.5;

        hiddenSelections[] = {"_auxiliary","_cockpit","_glass","_hull","_wings"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
            QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
            "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
            QPATHTOF(air\laatc\data\textures\Hull_co.paa),
            QPATHTOF(air\laatc\data\textures\Wings_co.paa)
        };
        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\ls\core\addons\vehicles_laatc\data\auxiliary_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\cockpit_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
                    "\ls\core\addons\vehicles_laatc\data\hull_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\wings_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
                    QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
                    "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
                    QPATHTOF(air\laatc\data\textures\Hull_co.paa),
                    QPATHTOF(air\laatc\data\textures\Wings_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class UserActions: UserActions {
            class LoadVehicle {
                displayName = "Load Vehicle";
                condition = QUOTE(ace_player isEqualTo currentPilot this and {this call FUNC(vivCanLoad)});
                statement = QUOTE(this call FUNC(vivLoad));
            };
        };

        INVENTORY_VEHICLE_BASE(1);

        class VehicleTransport: VehicleTransport {
            class Carrier: Carrier {
                cargoBayDimensions[] = {
                    {-5.3, 6.29704, -6.038520},
                    { 4,  -11.3391, -0.820282}
                    /* Original
                    {-4,  6.29704, -6.038520},
                    { 4, -11.3391, -0.820282}
                    */
                };
            };
        };
    };

    class CLASS(LAATc_New): ls_vehicles_laatc {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATc);

        displayName = "LAAT/c";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_CMFlareLauncher"
            };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green"
            };

        backRotorForceCoef = 1.8;
        backRotorSpeed = 1;
        bodyFrictionCoef = 1.9845;
        brakeDistance = 400;

        cyclicAsideForceCoef = 2.8;
        cyclicForwardForceCoef = 2;

        liftForceCoef = 3;

        maxMainRotorDive = 7;
        maxSpeed = 600;
        startDuration = 4.5;

        hiddenSelections[] = {"_auxiliary","_cockpit","_glass","_hull","_wings"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
            QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
            "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
            QPATHTOF(air\laatc\data\textures\Hull_co.paa),
            QPATHTOF(air\laatc\data\textures\Wings_co.paa)
        };
        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\ls\core\addons\vehicles_laatc\data\auxiliary_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\cockpit_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
                    "\ls\core\addons\vehicles_laatc\data\hull_co.paa",
                    "\ls\core\addons\vehicles_laatc\data\wings_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
                    QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
                    "\ls\core\addons\vehicles_laatc\data\glass_ca.paa",
                    QPATHTOF(air\laatc\data\textures\Hull_co.paa),
                    QPATHTOF(air\laatc\data\textures\Wings_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class UserActions: UserActions {
            class LoadVehicle {
                displayName = "Load Vehicle";
                condition = QUOTE(ace_player isEqualTo currentPilot this and {this call FUNC(vivCanLoad)});
                statement = QUOTE(this call FUNC(vivLoad));
            };
        };

        INVENTORY_VEHICLE_BASE(1);

        class VehicleTransport: VehicleTransport {
            class Carrier: Carrier {
                cargoBayDimensions[] = {
                    {-5.3, 6.29704, -6.038520},
                    { 4,  -11.3391, -0.820282}
                    /* Original
                    {-4,  6.29704, -6.038520},
                    { 4, -11.3391, -0.820282}
                    */
                };
            };
        };
    };
};
