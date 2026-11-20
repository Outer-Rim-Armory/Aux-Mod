
class CfgPatches {
    class KC_Brandings {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main", "BNA_KC_music"};
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {

        BNA_KC_Brandings_MenuMusic = "
            diag_log format [
                '[KC_Brandings] Main menu loaded: %1',
                findDisplay 0
            ];

            uiNamespace setVariable ['BNA_KC_Brandings_loadTime', diag_tickTime];
            uiNamespace setVariable ['BNA_KC_Brandings_done', false];

            (_this select 0) displayAddEventHandler [
                'MouseMoving',
                {
                    if (
                        diag_tickTime -
                        (uiNamespace getVariable [
                            'BNA_KC_Brandings_loadTime',
                            diag_tickTime
                        ]) > 8 &&
                        {
                            !(uiNamespace getVariable [
                                'BNA_KC_Brandings_done',
                                false
                            ])
                        }
                    ) then {

                        uiNamespace setVariable [
                            'BNA_KC_Brandings_done',
                            true
                        ];

                        diag_log '[KC_Brandings] Music diagnostics activated';

                        private _oldStart = uiNamespace getVariable [
                            'BNA_KC_Brandings_startEH',
                            -1
                        ];

                        if (_oldStart >= 0) then {
                            removeMusicEventHandler ['MusicStart', _oldStart];
                        };

                        private _oldStop = uiNamespace getVariable [
                            'BNA_KC_Brandings_stopEH',
                            -1
                        ];

                        if (_oldStop >= 0) then {
                            removeMusicEventHandler ['MusicStop', _oldStop];
                        };

                        uiNamespace setVariable [
                            'BNA_KC_Brandings_startEH',
                            addMusicEventHandler [
                                'MusicStart',
                                {
                                    params ['_music'];

                                    diag_log format [
                                        '[KC_Brandings] MusicStart: %1',
                                        _music
                                    ];

                                    private _d = findDisplay 0;

                                    if (!isNull _d) then {

                                        private _c = uiNamespace getVariable [
                                            'BNA_KC_Brandings_dbgCtrl',
                                            controlNull
                                        ];

                                        if (isNull _c) then {
                                            _c = _d ctrlCreate ['RscText', -1];

                                            _c ctrlSetPosition [
                                                safeZoneX + 0.02,
                                                safeZoneY + 0.02,
                                                1.5,
                                                0.05
                                            ];

                                            uiNamespace setVariable [
                                                'BNA_KC_Brandings_dbgCtrl',
                                                _c
                                            ];
                                        };

                                        _c ctrlSetText format [
                                            'MUSIC STARTED: %1',
                                            _music
                                        ];

                                        _c ctrlCommit 0;
                                    };

                                    if (
                                        _music != 'BNA_KC_Music_fooBAR_Menu_Version' &&
                                        {!isNull findDisplay 0}
                                    ) then {

                                        [] spawn {
                                            uiSleep 0.1;

                                            diag_log '[KC_Brandings] Music override firing';

                                            if (!isNull findDisplay 0) then {
                                                playMusic 'BNA_KC_Music_fooBAR_Menu_Version';
                                            };
                                        };
                                    };
                                }
                            ]
                        ];

                        uiNamespace setVariable [
                            'BNA_KC_Brandings_stopEH',
                            addMusicEventHandler [
                                'MusicStop',
                                {
                                    params ['_music'];

                                    diag_log format [
                                        '[KC_Brandings] MusicStop: %1',
                                        _music
                                    ];

                                    if (
                                        _music == 'BNA_KC_Music_fooBAR_Menu_Version' &&
                                        {!isNull findDisplay 0}
                                    ) then {

                                        [_music] spawn {
                                            uiSleep 0.1;

                                            if (!isNull findDisplay 0) then {
                                                playMusic (_this select 0);
                                            };
                                        };
                                    };
                                }
                            ]
                        ];

                        diag_log '[KC_Brandings] Music handlers registered';

                        playMusic 'BNA_KC_Music_fooBAR_Menu_Version';
                    };
                }
            ];

            playMusic 'BNA_KC_Music_fooBAR_Menu_Version';

            [] spawn {
                uiSleep 0.5;
                diag_log '[KC_Brandings] Main menu music handler running';
            };
        ";

        BNA_KC_Brandings_BgSwap = "
            [_this select 0] spawn {
                disableSerialization;

                params ['_d'];

                if (isNull _d) exitWith {};

                private _pic = _d displayCtrl 9001;

                if (isNull _pic) exitWith {
                    diag_log '[KC_Brandings] ERROR: Main menu image control 9001 missing';
                };

                private _last = -1;

                while {!isNull _d && {!isNull _pic}} do {

                    private _n = 1 + floor random 13;

                    while {_n == _last} do {
                        _n = 1 + floor random 13;
                    };

                    _last = _n;

                    private _number = if (_n < 10) then {
                        '0' + str _n
                    } else {
                        str _n
                    };

                    private _file = format [
                        '\ORA\BNA_KC\addons\brandings\images\Loading_Image_%1.paa',
                        _number
                    ];

                    _pic ctrlSetFade 1;
                    _pic ctrlCommit 1.5;

                    uiSleep 1.6;

                    if (isNull _d || {isNull _pic}) exitWith {};

                    _pic ctrlSetText _file;

                    diag_log format [
                        '[KC_Brandings] Main menu image: %1',
                        _file
                    ];

                    _pic ctrlSetFade 0;
                    _pic ctrlCommit 1.5;

                    uiSleep 8;
                };
            };
        ";
    };

    class RscDisplayLoading {

        BNA_KC_Brandings_LoadSwap = "
            private _d = _this select 0;

            [_d] spawn {
                disableSerialization;

                params ['_d'];

                if (isNull _d) exitWith {};

                private _pic = _d displayCtrl 9001;

                if (isNull _pic) exitWith {
                    diag_log '[KC_Brandings] ERROR: Loading image control missing';
                };

                private _last = -1;

                while {!isNull _d && {!isNull _pic}} do {

                    private _n = 1 + floor random 13;

                    while {_n == _last} do {
                        _n = 1 + floor random 13;
                    };

                    _last = _n;

                    private _number = if (_n < 10) then {
                        '0' + str _n
                    } else {
                        str _n
                    };

                    private _file = format [
                        '\ORA\BNA_KC\addons\brandings\images\Loading_Image_%1.paa',
                        _number
                    ];

                    _pic ctrlSetFade 1;
                    _pic ctrlCommit 1.5;

                    uiSleep 1.6;

                    if (isNull _d || {isNull _pic}) exitWith {};

                    _pic ctrlSetText _file;

                    diag_log format [
                        '[KC_Brandings] Loading image: %1',
                        _file
                    ];

                    _pic ctrlSetFade 0;
                    _pic ctrlCommit 1.5;

                    uiSleep 8;
                };
            };
        ";
    };

    class RscDisplayStart {

        BNA_KC_Brandings_StartSwap = "
            private _d = _this select 0;

            [_d] spawn {
                disableSerialization;

                params ['_d'];

                if (isNull _d) exitWith {};

                private _pic = _d displayCtrl 9001;

                if (isNull _pic) exitWith {
                    diag_log '[KC_Brandings] ERROR: Start image control missing';
                };

                private _last = -1;

                while {!isNull _d && {!isNull _pic}} do {

                    private _n = 1 + floor random 13;

                    while {_n == _last} do {
                        _n = 1 + floor random 13;
                    };

                    _last = _n;

                    private _number = if (_n < 10) then {
                        '0' + str _n
                    } else {
                        str _n
                    };

                    private _file = format [
                        '\ORA\BNA_KC\addons\brandings\images\Loading_Image_%1.paa',
                        _number
                    ];

                    _pic ctrlSetFade 1;
                    _pic ctrlCommit 1;

                    uiSleep 1.1;

                    if (isNull _d || {isNull _pic}) exitWith {};

                    _pic ctrlSetText _file;

                    diag_log format [
                        '[KC_Brandings] Start image: %1',
                        _file
                    ];

                    _pic ctrlSetFade 0;
                    _pic ctrlCommit 1;

                    uiSleep 4;
                };
            };
        ";
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

                class BlackBG: RscText {
                    idc = -1;
                    x = "SafeZoneX";
                    y = "SafeZoneY";
                    w = "SafeZoneW";
                    h = "SafeZoneH";
                    text = "";
                    colorBackground[] = {0,0,0,1};
                };

                class LoadingPic: RscPicture {
                    idc = 9001;
                    x = "SafeZoneX";
                    y = "SafeZoneY";
                    w = "SafeZoneW";
                    h = "SafeZoneH";
                    text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_08.paa";
                };
            };
        };
    };
};

class RscDisplayStart: RscStandardDisplay {

    class controls {

        class BlackBG: RscText {
            idc = -1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
            text = "";
            colorBackground[] = {0,0,0,1};
        };

        class LoadingPic: RscPicture {
            idc = 9001;
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
            text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_06.paa";
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
            colorBackground[] = {0,0,0,0};
            colorBackgroundActive[] = {1,1,1,0.1};
            colorBorder[] = {0,0,0,0};
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
            colorBackground[] = {0,0,0,0};
            colorBackgroundActive[] = {1,1,1,0.1};
            colorBorder[] = {0,0,0,0};
            tooltip = "Join KC Server 2";
            action = "connectToServer ['216.173.119.203', 2487, 'KC123'];";
        };
    };

    class controlsBackground {

        class BlackBG: RscText {
            idc = -1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
            text = "";
            colorBackground[] = {0,0,0,1};
        };

        class LoadingPic: RscPicture {
            idc = 9001;
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
            text = "\ORA\BNA_KC\addons\brandings\images\Loading_Image_13.paa";
        };
    };
};
