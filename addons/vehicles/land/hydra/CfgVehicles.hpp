class CfgVehicles
{
    class APC_Wheeled_02_base_F;
    class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
    {
        class Turrets;
    };
    class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class CLASS(Hydra): O_APC_Wheeled_02_rcws_v2_F
    {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hydra);

        displayName = "Hydra";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        EGVAR(weapons,hasVehicleEMP) = TRUE;
        EGVAR(weapons,vehicleEMPCooldown) = 15;
        EGVAR(weapons,empRadiusDroid) = EMP_RADIUS_DROID_DEFAULT;
        EGVAR(weapons,empRadiusDroideka) = 15;
        EGVAR(weapons,empRadiusVehicle) = 15;

        hiddenSelectionsTextures[] = {};
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        animationList[] = {"showCanisters", FALSE, "showTools", FALSE};

        class TextureSources
        {
            class CamoKC
            {
                author = AUTHOR;
                displayName = "Keeli Company Camo";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\hydra\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoKC\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC\Turret_co.paa),
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\hydra\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoBrown\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown\Turret_co.paa),
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\hydra\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\hydra\data\textures\CamoGrey\Wheels_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey\Turret_co.paa),
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
        };

        class UserActions
        {
            class ActivateEMP
            {
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

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] =
                {
                    QCLASS(Coax_Reek),
                    "GMG_40mm",
                    "SmokeLauncher"
                };
                magazines[] =
                {
                    QCLASS(Mag_500Rnd_Coax),
                    QCLASS(Mag_500Rnd_Coax),
                    QCLASS(Mag_500Rnd_Coax),
                    "96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
                    "SmokeLauncherMag"
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2);
    };
};