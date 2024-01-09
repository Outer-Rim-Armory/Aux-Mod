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
    class CLASS(OLV20): O_APC_Wheeled_02_rcws_v2_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        side = BLUFOR;
        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_APCs);
        editorPreview = QPATHTOF(land\olv20\data\previews\CLASS(OLV20).jpg);

        displayName = "OLV-20";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        animationList[] = {"showCanisters", FALSE, "showTools", FALSE};

        class TextureSources
        {
            class CamoKC
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company Camo";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\olv20\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\olv20\data\textures\CamoKC\Wheels_co.paa),
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
                    QPATHTOF(land\olv20\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\olv20\data\textures\CamoBrown\Wheels_co.paa),
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
                    QPATHTOF(land\olv20\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\olv20\data\textures\CamoGrey\Wheels_co.paa),
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

                // condition = QUOTE(this call BNAKC_fnc_canUseEMP;);
                // statement = QUOTE(this call BNAKC_fnc_activateEMP;);
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
                    QCLASS(Mag_500rnd_Coax),
                    QCLASS(Mag_500rnd_Coax),
                    QCLASS(Mag_500rnd_Coax),
                    "96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
                    "SmokeLauncherMag"
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2);
    };

    class CLASS(APC_OLV20): CLASS(OLV20)
    {
        SCOPE_HIDDEN;
    };
};