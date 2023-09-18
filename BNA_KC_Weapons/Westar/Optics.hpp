class ItemCore;
class 3AS_Optic_Scope_WestarM5: ItemCore
{
    class ItemInfo;
};
class BNA_KC_WestarM5_Scope: 3AS_Optic_Scope_WestarM5
{
    displayName = "[KC] Westar-M5 Long Scope";
    class ItemInfo: ItemInfo
    {
        class OpticsModes
        {
            class BNA_KC_M5_Scope_Optics
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] =
                {
                    "OpticsCHAbera1",
                    "OpticsBlur1"
                };
                opticsZoomMin = 0.0138;
                opticsZoomMax = 0.0416;
                opticsZoomInit = 0.0416;
                discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 1000;
                nFovLimit = 0.07;
                discreteFov[] = {0.0416,0.0138};
                discreteInitIndex = 0;
                modelOptics[] =
                {
                    "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"
                };
                memoryPointCamera = "opticView";
                visionMode[] =
                {
                    //"Normal",
                    //"NVG",
                    //"TI"
                };
                //thermalMode[] = {0};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class BNA_KC_M5_OverSights_Optic
            {
                opticsID = 2;
                useModelOptics = 0;
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                discretefov[] = {};
            };
        };
    };
};