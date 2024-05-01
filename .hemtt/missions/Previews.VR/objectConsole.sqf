/*
 * Author: DartRuffian
 * Assigns actions to show or hide given object presets.
 *
 * Arguments:
 * object: Object - The object to assign the actions to.
 *
 * Return Value:
 * None
 *
 * Example:
 * this execVM "objectConsole.sqf";
 */


params ["_object"];

private _presetOne =
[
    barrier_1,
    barrier_2,
    barrier_3 /*
    barrier_4,
    barrier_5,
    barrier_6,
    barrier_7,
    barrier_8,
    barrier_9,
    barrier_10,
    barrier_11,
    barrier_12,
    barrier_13,
    barrier_14,
    barrier_15,
    barrier_16,
    barrier_17,
    barrier_18,
    barrier_19,
    barrier_20,
    barrier_21,
    barrier_22,
    barrier_23,
    barrier_24,
    barrier_25,
    barrier_26,
    barrier_27,
    barrier_28,
    barrier_29,
    barrier_30,
    barrier_31,
    barrier_32,
    barrier_33,
    barrier_34,
    barrier_35,
    barrier_36,
    barrier_37,
    barrier_38,
    barrier_39,
    barrier_40,
    barrier_41,
    barrier_42,
    barrier_43,
    barrier_44,
    barrier_45,
    barrier_46,
    barrier_47,
    barrier_48,
    barrier_49,
    barrier_50,
    barrier_51,
    barrier_52,
    barrier_53,
    barrier_54,
    barrier_55,
    barrier_56,
    barrier_57,
    barrier_58,
    barrier_59,
    barrier_60,
    barrier_61,
    barrier_62,
    barrier_63,
    barrier_64,
    barrier_65,
    barrier_66,
    barrier_67,
    barrier_68,
    barrier_69,
    barrier_70,
    barrier_71,
    barrier_72,
    barrier_73,
    barrier_74,
    barrier_75,
    barrier_76,
    barrier_77,
    barrier_78,
    barrier_79,
    barrier_80,
    barrier_81,
    barrier_82,
    barrier_83,
    barrier_84,
    barrier_85,
    barrier_86,
    barrier_87,
    barrier_88,
    barrier_89,
    barrier_90,
    barrier_91,
    barrier_92,
    barrier_93,
    barrier_94,
    barrier_95,
    barrier_96,
    barrier_97,
    barrier_98,
    barrier_99,
    barrier_100,
    barrier_101,
    barrier_102,
    barrier_103,
    barrier_104,
    barrier_105,
    barrier_106,
    barrier_107,
    barrier_108,
    barrier_109,
    barrier_110,
    barrier_111,
    barrier_112,
    barrier_113,
    barrier_114,
    barrier_115,
    barrier_116,
    barrier_117*/
];

private _presetTwo =
[
    barrier_3
];
private _presetThree =
[
    barrier_2,
    barrier_3
];

private _allObjects = _presetOne + _presetTwo + _presetThree;
_allObjects arrayIntersect _allObjects; // Removes duplicate objects (such as if the same object is in two presets)

#define ACTION_SETTINGS 100, true, true, "", "true", 5
BNAKC_loadPreset =
{
    params ["_allObjects", "_presetObjects"];
    { _x hideObjectGlobal true; } forEach _allObjects;
    { _x hideObjectGlobal false; } forEach _presetObjects;	
};


// Actions
_object addAction
[
    "Show All",
    {
        _this select 3 params ["_allObjects"]; // Gets the _allObjects list from the parameters
        [_allObjects, _allObjects] remoteExec ["BNAKC_loadPreset"];
    },
    [_allObjects],
    ACTION_SETTINGS
];

_object addAction
[
    "Hide All",
    {
        _this select 3 params ["_allObjects"];
        [_allObjects, []] remoteExec ["BNAKC_loadPreset"];
    },
    [_allObjects],
    ACTION_SETTINGS
];

_object addAction
[
    "Configuration One",
    {
        _this select 3 params ["_allObjects", "_presetOne"];
        [_allObjects, _presetOne] remoteExec ["BNAKC_loadPreset"];
    },
    [_allObjects, _presetOne],
    ACTION_SETTINGS
];

_object addAction
[
    "Not Configured Two",
    {
        _this select 3 params ["_allObjects", "_presetTwo"];
        [_allObjects, _presetTwo] remoteExec ["BNAKC_loadPreset"];
    },
    [_allObjects, _presetTwo],
    ACTION_SETTINGS
];

_object addAction
[
    "Not Configured Three",
    {
        _this select 3 params ["_allObjects", "_presetThree"];
        [_allObjects, _presetThree] remoteExec ["BNAKC_loadPreset"];
    },
    [_allObjects, _presetThree],
    ACTION_SETTINGS
];