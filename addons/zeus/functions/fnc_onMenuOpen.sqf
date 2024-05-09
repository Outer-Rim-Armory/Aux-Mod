#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when the Zeus interface is opened.
 *
 * Arguments:
 * 0: Player unit <OBJECT>
 * 1: Type of feature camera <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * ["featureCamera", BNA_KC_zeus_onMenuOpen] call CBA_fnc_addPlayerEventHandler;
 *
 * Public: No
 */

params ["_player", "_camera"];
TRACE_2("fnc_onMenuOpen",_player,_camera);

// Hide blueforce tracker
if (GVAR(hideZeusGroup)) then {
    group _player setVariable ["ace_map_hideBlueForceMarker", _camera == "curator", true];
};

nil;