class CfgVehicles
{
    class B_UGV_01_F;
    class CLASS(Khezu_Unarmed): B_UGV_01_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Drones);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Khezu_Unarmed);

        displayName = "Khezu (Unarmed)";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
            QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa)
        };
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company Camo";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa)
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body2_co.paa)
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body2_co.paa)
                };
            };
        };
    };

    class Car_F;
    class UGV_01_base_F: Car_F
    {
        class Turrets;
    };
    class UGV_01_rcws_base_F: UGV_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
        };
        class AnimationSources;
    };
    class B_UGV_01_rcws_F: UGV_01_rcws_base_F {};
    class CLASS(Khezu_Armed): B_UGV_01_rcws_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Drones);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Khezu_Armed);

        displayName = "Khezu (HMG/GMG)";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
            QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa),
            QPATHTOF(data\csatTurret\CamoKC\Turret_co.paa)
        };
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company Camo";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC\Turret_co.paa)
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown\Turret_co.paa)
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey\Turret_co.paa)
                };
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {QCLASS(Coax_Reek), "GMG_40mm"};
                magazines[] =
                {
                    QCLASS(Mag_1000rnd_Coax),
                    QCLASS(Mag_1000rnd_Coax),
                    QCLASS(Mag_1000rnd_Coax),
                    "200Rnd_40mm_G_belt"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
        };

        class AnimationSources: AnimationSources
        {
            class muzzle_rot_MG
            {
                source = "ammorandom";
                weapon = QCLASS(Coax_Reek);
            };
            class muzzle_hide_MG
            {
                source = "reload";
                weapon = QCLASS(Coax_Reek);
            };
        };
    };
};