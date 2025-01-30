class CfgVehicles {
    class Tank;
    class Tank_F: Tank {
        class Turrets;
    };
    class 3AS_RX200_Base: Tank_F {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class CLASS(RX200_Base): 3AS_RX200_Base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,RX200_Base);

        displayName = "RX-200";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 3;

        hiddenSelectionsTextures[] = {QPATHTOF(land\rx200\data\textures\Body_KC_co.paa)};

        textureList[] = {
            "Standard", 0,
            "KeeliCompany", 1,
            "KeeliCompanyWhite", 0,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {"\3AS\3AS_RX200\data\DefaultMaterial_CO.paa"};
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {QPATHTOF(land\rx200\data\textures\Body_KC_co.paa)};
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {QPATHTOF(land\rx200\data\textures\Body_KCWhite_co.paa)};
            };
            class CamoKC: KeeliCompany {
                displayName = "Keeli Company Camo";
                textures[] = {QPATHTOF(land\rx200\data\textures\Body_CamoKC_co.paa)};
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {QPATHTOF(land\rx200\data\textures\Body_CamoBrown_co.paa)};
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {QPATHTOF(land\rx200\data\textures\Body_CamoGrey_co.paa)};
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                startEngine = FALSE;
            };
        };

        INVENTORY_VEHICLE_BASE(2);
    };

    class CLASS(RX200_AA): CLASS(RX200_Base) {
        SCOPE_PUBLIC;

        displayName = "RX-200AA (Anti-Air)";

        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class CLASS(RX200_Artillery): CLASS(RX200_Base) {
        SCOPE_PUBLIC;

        displayName = "RX-200ART (Artillery)";

        artilleryScanner = TRUE;
        availableForSupportTypes[] = {"Artillery"};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"mortar_155mm_AMOS"};
                magazines[] = {
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