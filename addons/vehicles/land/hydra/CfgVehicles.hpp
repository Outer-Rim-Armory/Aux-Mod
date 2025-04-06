class CfgVehicles {
    class APC_Wheeled_02_base_F;
    class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F {
        class Turrets;
    };
    class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class CLASS(Hydra): O_APC_Wheeled_02_rcws_v2_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hydra);

        displayName = "Hydra";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 4;

        EGVAR(weapons,hasVehicleEMP) = TRUE;
        EGVAR(weapons,vehicleEMPCooldown) = 15;
        EGVAR(weapons,empRadiusDroid) = EMP_RADIUS_DROID_DEFAULT;
        EGVAR(weapons,empRadiusDroideka) = 15;
        EGVAR(weapons,empRadiusVehicle) = 15;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hydra\data\textures\KeeliCompanyWhite\Body_co.paa),
            QPATHTOF(land\hydra\data\textures\KeeliCompanyWhite\Wheels_co.paa),
            QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa),
            "", // Camo Net Texture
            ""  // Cage Texture
        };
        textureList[] = {
            "KeeliCompanyWhite", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGrey", 0,
            "Bailout", 0
        };
        animationList[] = {"showCanisters", FALSE, "showTools", FALSE};

        class TextureSources {
            class KeeliCompanyWhite {
                author = AUTHOR;
                displayName = "Keeli Company (White)";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hydra\data\textures\KeeliCompanyWhite\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\KeeliCompanyWhite\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa),
                    "",
                    ""
                };
            };
            class CamoKC: KeeliCompanyWhite {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\hydra\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoKC\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa),
                    "",
                    ""
                };
            };
            class CamoBrown: KeeliCompanyWhite {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hydra\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoBrown\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown_Turret_co.paa),
                    "",
                    ""
                };
            };
            class CamoGrey: KeeliCompanyWhite {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hydra\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoGrey\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey_Turret_co.paa),
                    "",
                    ""
                };
            };

            class Bailout: KeeliCompanyWhite {
                displayName = "Bailout";
                textures[] = {
                    QPATHTOF(land\hydra\data\textures\Bailout\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoKC\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa),
                    "",
                    ""
                };
            };
        };

        class UserActions {
            class ActivateEMP {
                displayName = "<t font='RobotoCondensedBold'>Activate EMP</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\iconLightning_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(ace_player isEqualTo currentPilot this and this call EFUNC(weapons,canUseVehicleEMP););
                statement = QUOTE(this call EFUNC(weapons,useVehicleEMP););
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    QCLASS(Coax_Reek),
                    "GMG_40mm",
                    "SmokeLauncher"
                };
                magazines[] = {
                    QCLASS(Mag_500Rnd_Coax),
                    QCLASS(Mag_500Rnd_Coax),
                    QCLASS(Mag_500Rnd_Coax),
                    "96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
                    "SmokeLauncherMag"
                };
            };
        };

        INVENTORY_VEHICLE_HYDRA(2);
    };
};