class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class CLASS(Optic_Base): ItemCore {
        SCOPE_PRIVATE;
        author = AUTHOR;
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0;

        class ItemInfo: InventoryOpticsItem_Base_F {
            modelOptics = "\A3\Weapons_F\empty.p3d";
            optics = TRUE;
            opticType = OPTIC_ZOOM_LEVEL_LOW;

            class OpticsModes {
                class Sight {
                    opticsID = 1;
                    cameraDir = "";
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
                    thermalMode[] = {WHOT, BHOT};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
    };

    class CLASS(Optic_Pistol): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Pistol Holosight";
        descriptionShort = "Pistol scope<br/>Magnification: 1x";

        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Pistol_Holosight.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Pistol_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 2.8;

        class ItemInfo: ItemInfo {
            mass = 2;
        };
    };

    class CLASS(Optic_Pistol2): CLASS(Optic_Pistol) {
        displayName = "[KC] Pistol Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Pistol_Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Pistol_Holosight2_ca.paa);
    };

    class CLASS(Optic_SR_Holosight): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Short Range Holosight";
        descriptionShort = "Short range rifle scope<br/>Magnification: 2-4x";

        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight.p3d));
            mass = 8;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    distanceZoomMax = 200;
                    distanceZoomMin = 200;
                };

                class Scope: Sight {
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

    class CLASS(Optic_SR_Holosight2): CLASS(Optic_SR_Holosight) {
        displayName = "[KC] Short Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight2_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight2.p3d));
        };
    };

    class CLASS(Optic_SR_Holosight3): CLASS(Optic_SR_Holosight) {
        displayName = "[KC] Short Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight3.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\SR_Holosight3_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(SR_Holosight3.p3d));
        };
    };

    class CLASS(Optic_MR_Holosight): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Medium Range Holosight";
        descriptionShort = "Medium range rifle scope<br/>Magnification: 2-6x";

        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight.p3d));
            opticType = OPTIC_ZOOM_LEVEL_LONG;
            mass = 8;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                };

                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsFlare = TRUE;
                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_MR_Holosight2): CLASS(Optic_MR_Holosight) {
        displayName = "[KC] Medium Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight2_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight2.p3d));
        };
    };

    class CLASS(Optic_MR_Holosight3): CLASS(Optic_MR_Holosight) {
        displayName = "[KC] Medium Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight3.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\MR_Holosight3_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(MR_Holosight3.p3d));
        };
    };

    class CLASS(Optic_LR_Holosight): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Long Range Holosight";
        descriptionShort = "Long range rifle scope<br/>Magnification: 4-6x";

        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.48584;

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight.p3d));
            opticType = OPTIC_ZOOM_LEVEL_LONG;
            mass = 12;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    distanceZoomMax = 200;
                    distanceZoomMin = 200;

                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                };

                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/6);

                    distanceZoomMax = 1200;
                    distanceZoomMin = 300;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    visionMode[] = {"Normal", "NVG"};
                };
            };
        };
    };

    class CLASS(Optic_LR_Holosight2): CLASS(Optic_LR_Holosight) {
        displayName = "[KC] Long Range Holosight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight2_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight2.p3d));
        };
    };

    class CLASS(Optic_LR_Holosight3): CLASS(Optic_LR_Holosight) {
        displayName = "[KC] Long Range Holosight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight3.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight3_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight3.p3d));
        };
    };

    class CLASS(Optic_LR_Holosight4): CLASS(Optic_LR_Holosight) {
        displayName = "[KC] Long Range Holosight 4";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight4.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\LR_Holosight3_ca.paa);

        class ItemInfo: ItemInfo {
            modelOptics = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(LR_Holosight4.p3d));
        };
    };

    class CLASS(Optic_Holosight): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Holo Sight";
        descriptionShort = "Holo sight<br/>Magnification: 1x";

        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Holosight.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight_ca.paa);

        ace_scopeHeightAboveRail = 4.66933;

        class ItemInfo: ItemInfo {
            mass = 6;

            class OpticsModes: OpticsModes {
                class Sight: Sight {};
            };
        };
    };

    class CLASS(Optic_Holosight2): CLASS(Optic_Holosight) {
        displayName = "[KC] Holo Sight 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight2_ca.paa);
    };

    class CLASS(Optic_Holosight3): CLASS(Optic_Holosight) {
        displayName = "[KC] Holo Sight 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Holosight3.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight3_ca.paa);
    };

    class CLASS(Optic_Holoscope): CLASS(Optic_Holosight) {
        displayName = "[KC] Holo Scope";
        descriptionShort = "Holo scope<br/>Magnification: 2x";

        class ItemInfo: ItemInfo {
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            mass = 6;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomMin = 0.25;

                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                };

                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";
                    useModelOptics = TRUE;

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/2);

                    distanceZoomMin = 100;
                    distanceZoomMax = 100;

                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_Holoscope2): CLASS(Optic_Holoscope) {
        displayName = "[KC] Holo Scope 2";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Holosight2.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight2_ca.paa);
    };

    class CLASS(Optic_Holoscope3): CLASS(Optic_Holoscope) {
        displayName = "[KC] Holo Scope 3";
        model = QPATHTOF(SUBCOMPONENT\data\optics\CLASS(Holosight3.p3d));
        picture = QPATHTOF(SUBCOMPONENT\data\ui\Holosight3_ca.paa);
    };

    class CLASS(Optic_Reflex): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Reflex Scope";

        model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_Reflex_f.p3d";
        picture = "\A3\Weapons_F_EPA\Acc\data\UI\gear_acco_yorris_CA.paa";

        class ItemInfo: ItemInfo {
            mass = 6;
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomMin = 0.25;

                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                };

                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";
                    useModelOptics = TRUE;

                    opticsZoomInit = __EVAL(0.25/2);
                    opticsZoomMax = __EVAL(0.25/2);
                    opticsZoomMin = __EVAL(0.25/2);

                    distanceZoomMin = 100;
                    distanceZoomMax = 100;

                    visionMode[] = {"Normal", "NVG"};
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                };
            };
        };
    };

    class CLASS(Optic_LRPS): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] LRPS Scope";
        descriptionShort = "Long range sniper scope<br/>Magnification: 6x-25x";

        model = "\A3\Weapons_F_EPA\Acc\acco_marksman_F.p3d";
        picture = "\A3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";

        inertia = 0.2;

        ace_scopeAdjust_horizontal[] = {-8, 8};
        ace_scopeAdjust_horizontalIncrement = 0.1;
        ace_scopeAdjust_vertical[] = {0, 27};
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeHeightAboveRail = 4.2098;

        class ItemInfo: ItemInfo {
            modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F.p3d";
            mass = 16;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 0;
                    discreteFov[] = {};
                    discreteInitIndex = 0;
                    distanceZoomMax = 200;
                    distanceZoomMin = 200;
                    modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F", "\A3\Weapons_F\acc\reticle_lrps_z_F"};
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomMin = 0.25;
                };

                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";
                    useModelOptics = TRUE;

                    opticsZoomInit = 0.042;
                    opticsZoomMax = 0.042;
                    opticsZoomMin = 0.01;

                    opticsDisablePeripherialVision = TRUE;
                    opticsFlare = TRUE;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};

                    discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                    discreteDistanceInitIndex = 2;
                    discreteFov[] = {0.042, 0.01};

                    distanceZoomMax = 2400;
                    distanceZoomMin = 300;

                    visionMode[] = {"Normal", "NVG", "TI"};
                };
            };
        };
    };

    class CLASS(Optic_DC15X): CLASS(Optic_LRPS) {
        displayName = "[KC] DC-15X Scope";

        model = "\MRC\JLTS\weapons\DC15X\DC15X_scope.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"};
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_scope_ui_ca.paa";

        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class Scope: Scope {};
            };
        };
    };

    class CLASS(Optic_WestarM5): CLASS(Optic_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Westar-M5 Long Scope";
        model = "\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_scope_ui.paa";

        class ItemInfo: ItemInfo {
            modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
            mass = 7;

            class OpticsModes: OpticsModes {
                class Sight: Sight {
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.1;
                    opticsZoomMin = 0.375;

                    discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
                    discreteDistanceInitIndex = 1;
                    discreteFov[] = {};
                    discreteInitIndex = 0;

                    distanceZoomMax = 1000;
                    distanceZoomMin = 100;

                    modelOptics[] = {"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"};
                    nFovLimit = 0.07;
                };
                class Scope: Sight {
                    opticsID = 2;
                    memoryPointCamera = "opticView";
                    useModelOptics = TRUE;

                    discreteFov[] = {0.0416, 0.0138};
                    discreteInitIndex = 0;

                    opticsDisablePeripherialVision = TRUE;
                    opticsFlare = TRUE;

                    opticsZoomInit = 0.0416;
                    opticsZoomMax = 0.0416;
                    opticsZoomMin = 0.0138;

                    visionMode[] = {"Normal", "NVG", "TI"};
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                };
            };
        };
    };
};
