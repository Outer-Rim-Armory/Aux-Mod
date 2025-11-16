#include "..\script_component.hpp"
#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"
/*
 * Author: commy2, johnb43, based on BIS_fnc_errorMsg and BIS_fnc_guiMessage by Karel Moricky (BI)
 * Modified by DartRuffian
 * Creates a configurable error message dialog.
 *
 * Arguments:
 * 0: Header <STRING>
 * 1: Content <STRING>
 * 2: Ok callback <CODE>
 *      - Code to run when the Ok button is pressed, called directly from ButtonClick EH
 * 3: Cancel callback <CODE>
 *      - Code to run when the Cancel button is pressed, called directly from ButtonClick EH
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Header", "Content"] call BNA_KC_core_fnc_errorMessage;
 *
 * Public: No
 */

// Force stop any loading screens
endLoadingScreen;

// No message without interface possible
if (!hasInterface) exitWith {};

[{
    !isNull (call BIS_fnc_displayMission)
}, {
    params ["_textHeader", "_textMessage", ["_okCode", {}], ["_cancelCode", {}]];

    disableSerialization;

    // Use curator display if present
    private _curatorDisplay = findDisplay 312;

    private _mainDisplay = if (!isNull _curatorDisplay) then { _curatorDisplay } else { [] call BIS_fnc_displayMission };

    if (_textMessage isEqualType "") then {
        _textMessage = parseText _textMessage;
    };

    private _display = _mainDisplay createDisplay "RscDisplayCommonMessagePause";

    if (isNull _display) exitWith {};

    private _ctrlRscMessageBox =          _display displayCtrl 2351;
    private _ctrlBcgCommonTop =           _display displayCtrl 235100;
    private _ctrlBcgCommon =              _display displayCtrl 235101;
    private _ctrlText =                   _display displayCtrl 235102;
    private _ctrlBackgroundButtonOK =     _display displayCtrl 235103;
    private _ctrlBackgroundButtonMiddle = _display displayCtrl 235104;
    private _ctrlBackgroundButtonCancel = _display displayCtrl 235105;
    private _ctrlButtonOK =               _display displayCtrl 235106;
    private _ctrlButtonCancel =           _display displayCtrl 235107;

    _ctrlBcgCommonTop ctrlSetText _textHeader;

    private _ctrlButtonOKPos = ctrlPosition _ctrlButtonOK;
    private _ctrlBcgCommonPos = ctrlPosition _ctrlBcgCommon;
    private _bottomSpaceY = (_ctrlButtonOKPos select 1) - ((_ctrlBcgCommonPos select 1) + (_ctrlBcgCommonPos select 3));

    private _ctrlTextPos = ctrlPosition _ctrlText;
    private _marginX = (_ctrlTextPos select 0) - (_ctrlBcgCommonPos select 0);
    private _marginY = (_ctrlTextPos select 1) - (_ctrlBcgCommonPos select 1);

    _ctrlText ctrlSetStructuredText _textMessage;
    private _ctrlTextPosH = ctrlTextHeight _ctrlText;

    _ctrlBcgCommon ctrlSetPosition [
        _ctrlBcgCommonPos select 0,
        _ctrlBcgCommonPos select 1,
        _ctrlBcgCommonPos select 2,
        _ctrlTextPosH + _marginY * 2
    ];
    _ctrlBcgCommon ctrlCommit 0;

    _ctrlText ctrlSetPosition [
        (_ctrlBcgCommonPos select 0) + _marginX,
        (_ctrlBcgCommonPos select 1) + _marginY,
        (_ctrlBcgCommonPos select 2) - _marginX * 2,
        _ctrlTextPosH
    ];
    _ctrlText ctrlCommit 0;

    private _bottomPosY = (_ctrlBcgCommonPos select 1) + _ctrlTextPosH + (_marginY * 2) + _bottomSpaceY;

    {
        private _xPos = ctrlPosition _x;

        _xPos set [1, _bottomPosY];
        _x ctrlSetPosition _xPos;
        _x ctrlCommit 0;
    } forEach [
        _ctrlBackgroundButtonOK,
        _ctrlBackgroundButtonMiddle,
        _ctrlBackgroundButtonCancel,
        _ctrlButtonOK,
        _ctrlButtonCancel
    ];

    private _ctrlRscMessageBoxPosH = _bottomPosY + (_ctrlButtonOKPos select 3);

    _ctrlRscMessageBox ctrlSetPosition [
        0.5 - (_ctrlBcgCommonPos select 2) / 2,
        0.5 - _ctrlRscMessageBoxPosH / 2,
        (_ctrlBcgCommonPos select 2) + 0.5,
        _ctrlRscMessageBoxPosH
    ];

    _ctrlRscMessageBox ctrlEnable true;
    _ctrlRscMessageBox ctrlCommit 0;

    if (_okCode isEqualTo {}) then {
        _okCode = {
            (ctrlParent (_this select 0)) closeDisplay 1;
            true
        };
    };

    // Enable ok button
    _ctrlButtonOK ctrlEnable true;
    _ctrlButtonOK ctrlSetFade 0;
    _ctrlButtonOK ctrlSetText localize "STR_DISP_OK";
    _ctrlButtonOK ctrlCommit 0;
    _ctrlButtonOK ctrlAddEventHandler ["ButtonClick", _okCode];

    // Enable cancel button
    if (_cancelCode isNotEqualTo {}) then {
        _ctrlButtonCancel ctrlEnable true;
        _ctrlButtonCancel ctrlSetFade 0;
        _ctrlButtonCancel ctrlSetText localize "STR_DISP_CANCEL";
        _ctrlButtonCancel ctrlCommit 0;
        _ctrlButtonCancel ctrlAddEventHandler ["ButtonClick", _cancelCode];
    };

    // Intercept all keystrokes except the enter keys
    _display displayAddEventHandler ["KeyDown", {!((_this select 1) in [DIK_RETURN, DIK_NUMPADENTER])}];
}, _this] call CBA_fnc_waitUntilAndExecute;
