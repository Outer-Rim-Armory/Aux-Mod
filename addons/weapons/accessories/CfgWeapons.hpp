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
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomMin = 0.25;

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
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Pistol_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 2.8;
    };

    class CLASS(Optic_Pistol2): CLASS(Optic_Pistol)
    {
        displayName = "[KC] Pistol Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\Pistol_Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Pistol_Holosight2_ca.paa);
    };

    class CLASS(Optic_SR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Short Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\SR_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Sight: Sight {};

                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_SR_Holosight2): CLASS(Optic_SR_Holosight)
    {
        displayName = "[KC] Short Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\SR_Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight2_ca.paa);
    };

    class CLASS(Optic_SR_Holosight3): CLASS(Optic_SR_Holosight)
    {
        displayName = "[KC] Short Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\SR_Holosight3.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight3_ca.paa);
    };

    class CLASS(Optic_MR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Medium Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Sight: Sight {};

                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

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
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight2_ca.paa);
    };

    class CLASS(Optic_MR_Holosight3): CLASS(Optic_MR_Holosight)
    {
        displayName = "[KC] Medium Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\MR_Holosight3.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight3_ca.paa);
    };

    class CLASS(Optic_LR_Holosight): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Long Range Holosight";

        model = QPATHTOF(SUBCOMPONENT\data\optics\LR_Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Sight: Sight {};

                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_LR_Holosight2): CLASS(Optic_LR_Holosight)
    {
        displayName = "[KC] Long Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\LR_Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight2_ca.paa);
    };

    class CLASS(Optic_LR_Holosight3): CLASS(Optic_LR_Holosight)
    {
        displayName = "[KC] Long Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\LR_Holosight3.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight3_ca.paa);
    };

    class CLASS(Optic_LR_Holosight4): CLASS(Optic_LR_Holosight)
    {
        displayName = "[KC] Long Range Holosight 4";
        model = QPATHTOF(SUBCOMPONENT\data\optics\LR_Holosight4.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight3_ca.paa);
    };

    class CLASS(Optic_Holoscope): CLASS(Optic_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Holo Scope";

        model = QPATHTOF(SUBCOMPONENT\data\optics\Holosight.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.66933;

        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class Sight: Sight {};

                class Scope: Sight
                {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

                    distanceZoomMin = 300;
                    distanceZoomMax = 300;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_Holoscope2): CLASS(Optic_Holoscope)
    {
        displayName = "[KC] Holo Scope 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\Holosight2.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight2_ca.paa);
    };

    class CLASS(Optic_Holoscope3): CLASS(Optic_Holoscope)
    {
        displayName = "[KC] Holo Scope 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\Holosight3.p3d);
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight3_ca.paa);
    };
};