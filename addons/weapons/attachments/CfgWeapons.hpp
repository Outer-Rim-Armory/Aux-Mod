class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class CLASS(Optic_Base): ItemCore
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        weaponInfoType = "RscWeaponZeroing";
        intertia = 0;

        class ItemInfo: InventoryOpticsItem_Base_F
        {
            modelOptics = "\A3\Weapons_F\empty.p3d";
            optics = TRUE;
            opticType = OPTIC_ZOOM_LEVEL_LOW;
        };
    };

    class CLASS(Optic_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Holosight";

        model = QPATHTOF(attachments\data\optics\Holosight.p3d);
        picture = QPATHTOF(attachments\data\optics\Holosight_ca.paa);

        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsID = 1;
                    useModelOptics = FALSE;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = FALSE;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
    };
};