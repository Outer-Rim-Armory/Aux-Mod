class CfgPatches {
    class KC_Brandings {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
    };
};

class RscPicture {};
class RscStandardDisplay {};
class RscText {};
class RscActiveText {};
class RscActivePicture: RscActiveText {};
class RscButton {};

class RscDisplayLoading {
    class Variants {
        class LoadingOne {
            idd = 250;
            class controls {
                class LoadingPic: RscPicture {
                    idc = 1;
                    x = "SafeZoneX";
                    y = "SafeZoneY";
                    h = "SafeZoneH";
                    w = "SafeZoneW";
                    text = "\ORA\BNA_KC\addons\brandings\images\Testing.paa";
                };
            };
        };
    };
};

class RscDisplayStart: RscStandardDisplay {
    class controls {
        class LoadingPic: RscPicture {
            idc = 1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            h = "SafeZoneH";
            w = "SafeZoneW";
            text = "\ORA\BNA_KC\addons\brandings\images\Testing.paa";
        };
    };
};

class RscDisplayMain: RscStandardDisplay {
    enableDisplay = 0;
    delete Spotlight;

    class Controls {
        delete Spotlight1;
        delete Spotlight2;
        delete Spotlight3;
        delete BackgroundSpotlightRight;
        delete BackgroundSpotlightLeft;
        delete BackgroundSpotlight;


        class Logo: RscPicture {
            idc = -1;
            x = 0.2;
            y = -0.250;
            w = 0.25;
            h = 0.25;
            text = "\ORA\BNA_KC\addons\brandings\images\KCLogo2.paa";
        };
        class Logo2: RscPicture {
            idc = -1;
            x = 0.375;
            y = -0.250;
            w = 0.25;
            h = 0.25;
            text = "\ORA\BNA_KC\addons\brandings\images\KCLogo2.paa";
        };

        class LogoButton: RscButton {
            idc = -1;
            x = 0.375;
            y = -0.250;
            w = 0.25/2;
            h = 0.25;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {1, 1, 1, 0.1};
            colorBorder[] = {0, 0, 0, 0};
            tooltip = "Join KC Campaign Server";
            action = "connectToServer ['217.217.25.9', 2342, 'KC123'];";
        };
        class LogoButton2: RscButton {
            idc = -1;
            x = 0.500;
            y = -0.250;
            w = 0.25/2;
            h = 0.25;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {1, 1, 1, 0.1};
            colorBorder[] = {0, 0, 0, 0};
            tooltip = "Join KC Server 2";
            action = "connectToServer ['216.173.119.203', 2487, 'KC123'];";
        };
    };
    class controlsBackground {
        class LoadingPic: RscPicture {
            idc = 8000;
            x = "SafeZoneX";
            y = "SafeZoneY";
            h = "SafeZoneH";
            w = "SafeZoneW";
            text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_1.paa";
        };
    };
};
