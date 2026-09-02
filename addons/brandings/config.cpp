class CfgPatches {
    class KC_Brandings {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main", "BNA_KC_music"};
    };
};

class Extended_PreInit_EventHandlers {
    class KC_Brandings_Settings {
        init = "['KC_Brandings_EnableBackgroundMusic','CHECKBOX',['Enable Background Image & Music','Controls whether the KC background image and main menu music are enabled.'],['KC Brandings','Background Image & Music'],true,0] call CBA_fnc_addSetting;";
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        BNA_KC_Brandings_MenuMusic = "[] spawn {uiSleep 0.5; if (!(missionNamespace getVariable ['KC_Brandings_EnableBackgroundMusic',true])) exitWith {}; if (isNil 'BNA_KC_Brandings_menuMusicLoopEH') then {BNA_KC_Brandings_menuMusicLoopEH = addMusicEventHandler ['MusicStop',{params ['_music']; if (_music == 'BNA_KC_Music_fooBAR_Menu_Version' && {missionNamespace getVariable ['KC_Brandings_EnableBackgroundMusic',true]}) then {uiSleep 0.1; playMusic 'BNA_KC_Music_fooBAR_Menu_Version';};}];}; playMusic 'BNA_KC_Music_fooBAR_Menu_Version';};";
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
                    text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_04.paa";
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
            text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_01.paa";
        };
    };
};

class RscDisplayMain: RscStandardDisplay {
    enableDisplay = 0;

    delete Spotlight;

    onLoad = "params ['_display']; [_display] spawn {params ['_display']; uiSleep 0.1; if (!(missionNamespace getVariable ['KC_Brandings_EnableBackgroundMusic',true])) then {private _background = _display displayCtrl 1; if (!isNull _background) then {_background ctrlShow false;}; stopMusic;};};";

    class Controls {
        delete Spotlight1;
        delete Spotlight2;
        delete Spotlight3;
        delete BackgroundSpotlightRight;
        delete BackgroundSpotlightLeft;
        delete BackgroundSpotlight;

        class Logo: RscPicture {
            idc = -1;
            x = 0.375;
            y = -0.375;
            w = 0.25;
            h = 0.35;
            text = "\ORA\BNA_KC\addons\brandings\images\KCLogo2.paa";
        };

        class LogoButton: RscButton {
            idc = -1;
            x = 0.375;
            y = -0.375;
            w = 0.125;
            h = 0.35;
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
            y = -0.375;
            w = 0.125;
            h = 0.35;
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
            idc = 1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            h = "SafeZoneH";
            w = "SafeZoneW";
            text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_04.paa";
        };
    };
};
