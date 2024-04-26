#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Creates suppress overlay
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * [] call BNA_KC_suppress_fnc_initOverlay;
 *
 * Public: No
 */

// Exit if already created
if !(isNull (uiNamespace getVariable [QGVAR(overlay), displayNull])) exitWith {};

waitUntil {
    sleep 0.1;
    QGVAR(overlay) cutRsc [QGVAR(overlay), "PLAIN", -1, false];
    !(isNull (uiNamespace getVariable [QGVAR(overlay), displayNull]))
};

private _display = uiNamespace getVariable QGVAR(overlay);
private _overlayCtrl = _display displayCtrl IDC_OVERLAY;
_overlayCtrl ctrlSetFade 1;
_overlayCtrl ctrlSetText (OVERLAYS_LIST select GVAR(overlayTexture));
_overlayCtrl ctrlSetTextColor [0, 0, 0, GVAR(overlayOpacity)];
_overlayCtrl ctrlCommit 0;