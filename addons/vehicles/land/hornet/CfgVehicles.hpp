class CfgVehicles
{
    class O_LSV_02_unarmed_F;
    class CLASS(Hornet_Unarmed): O_LSV_02_unarmed_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        action = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\hornet\data\previews\CLASS(Hornet_Unarmed).jpg);

        displayName = "Hornet Strike Vehicle";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] =
        {
            QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "Keeli Company Aux Team";
                displayName = "Brown Camo";
                factions[] = {};
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;
    };

    class Car_F;
    class LSV_02_base_F: Car_F
    {
        class AnimationSources;
        class Turrets;
    };
    class LSV_02_armed_base_F: LSV_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class CLASS(Hornet_MG): O_LSV_02_armed_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        action = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\hornet\data\previews\CLASS(Hornet_MG).jpg);

        displayName = "Hornet Strike Vehicle (MG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] =
        {
            QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "Keeli Company Aux Team";
                displayName = "Brown Camo";
                factions[] = {};
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MG"};
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources
        {
            class Minigun
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_hide
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MG";
            };
        };
    };
    class CLASS(Hornet_Armed): CLASS(Hornet_MG)
    {
        SCOPE_HIDDEN;
    };

    class LSV_02_AT_base_F: LSV_02_base_F
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class CLASS(Hornet_AT): O_LSV_02_AT_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        action = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Cars);
        editorPreview = QPATHTOF(land\hornet\data\previews\CLASS(Hornet_AT).jpg);

        displayName = "Hornet Strike Vehicle (AT)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] =
        {
            QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            QCLASS(land\hornet\data\textures\Launcher_co.paa),
            QCLASS(land\hornet\data\textures\Launcher_co.paa)
        };
        class TextureSources
        {
            class BrownCamo
            {
                author = "Keeli Company Aux Team";
                displayName = "Brown Camo";
                factions[] = {};
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    QCLASS(land\hornet\data\textures\Launcher.paa),
                    QCLASS(land\hornet\data\textures\Launcher.paa)
                };
            };
            class GreyCamo: BrownCamo
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QCLASS(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    QCLASS(land\hornet\data\textures\Launcher.paa),
                    QCLASS(land\hornet\data\textures\Launcher.paa)
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class AnimationSources: AnimationSources
        {
            class VoronaMuzzle_reload
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_reloadMagazine
            {
                source = "reloadMagazine";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_revolving
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MissileLauncher"};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};