/*
 * Author: DartRuffian
 * Event handler to show / hide the jetpack fuel display.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_Jetpacks_fnc_jetDialogShowHideHandlers;
 */


private _sendEvent = { ["BNA_KC_Jet_showHideDisplay"] call CBA_fnc_localEvent; };

["loadout", _sendEvent, true] call CBA_fnc_addPlayerEventHandler; // Inventory changed
["vehicle", _sendEvent, true] call CBA_fnc_addPlayerEventHandler; // Get in/out of vehicle