#define VEHICLE_TRANSPORT class VehicleTransport { \
    class Cargo { \
        canBeTransported = TRUE; \
        dimensions[] = { \
            "wheel_1_2_axis", \
            "wheel_2_7_bound" \
        }; \
        parachuteClass = "B_Parachute_02_F"; \
        parachuteHeightLimit = 40; \
    }; \
}

class CfgVehicles {
    class 3AS_Saber_Base;
    class 3AS_Saber_M1: 3AS_Saber_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1): 3AS_Saber_M1 {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,TX130_M1);

        displayName = "TX-130 Saber Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 3;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\tx130\data\textures\KeeliCompany\Hull_co.paa),
            QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "KeeliCompanyWhite", 0, "CamoGrey", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_hull_co.paa",
                    "\3AS\3AS_Saber\data\saber_weapons_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_Imp_hull_co.paa",
                    "\3AS\3AS_Saber\data\saber_Imp_weapons_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Weapons_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Weapons_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3);
        VEHICLE_TRANSPORT;

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
    };

    class 3AS_Saber_03_Base;
    class 3AS_Saber_M1Recon: 3AS_Saber_03_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1_Recon): 3AS_Saber_M1Recon {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,TX130_M1_Recon);

        displayName = "TX-130 Saber Recon Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 3;

        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Saber\data\Saber_hull_co.paa",
            "\3AS\3AS_Saber\data\Saber_weapons_scout_co.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "KeeliCompanyWhite", 0, "CamoGrey", 0, "Grey", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_Saber\data\Saber_hull_co.paa",
                    "\3AS\3AS_Saber\data\Saber_weapons_scout_co.paa"
                };
            };

            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_Imp_hull_co.paa",
                    "\3AS\3AS_Saber\data\saber_weapons_scout_Imp_co.paa"
                };
            };

            class Grey: Standard {
                author = AUTHOR;
                displayName = "Grey";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\Grey\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\Grey\Weapons_Scout_co.paa)
                };
            };

            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_Scout_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Weapons_Scout_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Weapons_Scout_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3);
        VEHICLE_TRANSPORT;

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
    };

    class 3AS_Saber_02_Base;
    class 3AS_Saber_M1G: 3AS_Saber_02_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1_GL): 3AS_Saber_M1G {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,TX130_M1_GL);

        displayName = "TX-130 Saber Tank (GL)";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 3;

        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Saber\data\Saber_hull_co.paa",
            "\3AS\3AS_Saber\data\Saber_weaponsgmg_co.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "KeeliCompanyWhite", 0, "CamoGrey", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_Saber\data\Saber_hull_co.paa",
                    "\3AS\3AS_Saber\data\Saber_weaponsgmg_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_Imp_hull_co.paa",
                    "\3AS\3AS_Saber\data\Saber_weaponsgmg_Imp_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Weapons_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Weapons_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3);
        VEHICLE_TRANSPORT;

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
    };

    class 3AS_Saber_Super_base;
    class 3AS_Saber_Super: 3AS_Saber_Super_base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_Super): 3AS_Saber_Super {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,TX130_Super);

        displayName = "TX-130 Super Saber Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 3;

        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Saber\data\saber_hull_co.paa",
            "\3AS\3AS_Saber\data\saber_weapons_co.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "KeeliCompanyWhite", 0, "CamoGrey", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_hull_co.paa",
                    "\3AS\3AS_Saber\data\saber_weapons_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_Saber\data\saber_Imp_hull_co.paa",
                    "\3AS\3AS_Saber\data\saber_Imp_weapons_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompany\Weapons_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\KeeliCompanyWhite\Weapons_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Hull_co.paa),
                    QPATHTOF(land\tx130\data\textures\CamoGrey\Weapons_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(3);
        VEHICLE_TRANSPORT;

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
    };
};
