class CfgVehicles {
    class 3AS_ATRT_Base;
    class 3AS_ATRT: 3AS_ATRT_Base {
    };
    class ls_vehicle_atrt_base;
    class ls_vehicle_atrt: ls_vehicle_atrt_base {};

    class CLASS(ATRT): 3AS_ATRT {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Walkers);
        // editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,ATRT);

        displayName = "AT-RT";
        uniformClass = QCLASS(Uniform_ATRT);
        nakedUniform = QCLASS(Uniform_ATRT);
        impactEffectsBlood = "ImpactMetal";

        weapons[] = {QCLASS(Turret_ATRT)};
        magazines[] = {QCLASS(Mag_9999Rnd_ATRT)};

        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Euro"};

        hiddenSelectionsTextures[] = {QPATHTOF(land\atrt\data\textures\Body_co.paa)};

        // The texture lists don't work like those for normal vehicles
        // These properties exist soley for the texture switcher, which is why the numbers are not present.
        textureList[] = {
            "Standard",
            "KeeliCompany",
            "CamoBrown",
            "CamoGrey"
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\ATRT\textures\ATRT_CO.paa"
                };
            };
            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(land\atrt\data\textures\Body_co.paa)
                };
            };

            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\atrt\data\textures\KeeliCompanyWhite_Body_co.paa)
                };
            };

            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\atrt\data\textures\CamoBrown_Body_co.paa)
                };
            };

            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\atrt\data\textures\CamoGrey_Body_co.paa)
                };
            };
        };

        class VehicleTransport {
            class Cargo {
                GVAR(vivOverride) = TRUE;
            };
        };
    };
    class CLASS(ATRT_LS): ls_vehicle_atrt {
        SCOPE_PUBLIC;
        author = AUTHOR;
        displayName = "[KC] AT-RT (LS)";
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Walkers);
        uniformClass = QCLASS(Uniform_ATRT_LS);
        nakedUniform = QCLASS(Uniform_ATRT_LS);
        ls_crew = "Unit_Scout_CT";
        weapons[] = {QCLASS(Turret_ATRT)};
        respawnWeapons[] = {QCLASS(Turret_ATRT)};
        magazines[] = {QCLASS(Mag_9999Rnd_ATRT)};
        respawnMagazines[] = {QCLASS(Mag_9999Rnd_ATRT)};
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    };

    // AT-RT requires a different "Switch Textures" action
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(atrt_switchSkin) {
                displayName = "Switch Vehicle Skin";
                condition = QUOTE(call FUNC(atrt_skin_canSwitch));
                insertChildren = QUOTE(call FUNC(atrt_skin_insertChildren));

            };
        };
    };
};
