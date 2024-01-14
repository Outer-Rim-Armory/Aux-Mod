class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class CLASS(Optic_Base): ItemCore
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0;

        class ItemInfo: InventoryOpticsItem_Base_F
        {
            modelOptics = "\A3\Weapons_F\empty.p3d";
            optics = TRUE;
            opticType = OPTIC_ZOOM_LEVEL_LOW;
        };
    };

    class CLASS(Optic_SR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Short Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class Sight
                {
                    opticsID = 1;
                    useModelOptics = FALSE;

                    opticsFlare = FALSE;
                    opticsDisablePeripherialVision = FALSE;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;

                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memoryPointCamera = "eye";

                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
    };
};