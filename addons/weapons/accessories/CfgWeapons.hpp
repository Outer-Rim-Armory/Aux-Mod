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

            class OpticsModes
            {
                class Sight
                {
                    opticsID = 1;
                    memoryPointCamera = "eye";
                    useModelOptics = FALSE;

                    opticsFlare = FALSE;
                    opticsDisablePeripherialVision = FALSE;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;

                    distanceZoomMax = 50;
                    distanceZoomMin = 50;

                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
    };

    class CLASS(Optic_Pistol): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Pistol Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\Pistol_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\Pistol_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 2.8;
    };

    class CLASS(Optic_Pistol2): CLASS(Optic_Pistol)
    {
        displayName = "[KC] Pistol Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\Pistol_Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\Pistol_Holosight2_ca.paa);
    };

    class CLASS(Optic_MR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Medium Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomMin = __EVAL(0.25/6);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomInit = __EVAL(0.25/2);

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_MR_Holosight2): CLASS(Optic_MR_Holosight)
    {
        displayName = "[KC] Medium Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight2_ca.paa);
    };

    class CLASS(Optic_MR_Holosight3): CLASS(Optic_MR_Holosight)
    {
        displayName = "[KC] Medium Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight3.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight3_ca.paa);
    };
};