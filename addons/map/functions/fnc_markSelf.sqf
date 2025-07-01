#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates a map marker on the player's position.
 *
 * Arguments:
 * 0: Channel to create the marker in (optional, default: markSelfChannel setting) <NUMBER>
 * 1: Class name of marker color (optional, default: markSelfColor setting) <STRING>
 *
 * Return Value:
 * Marker's name or empty string if not unique <STRING>
 *
 * Example:
 * call FUNC(markSelf);
 *
 * Public: Yes
 */

params [
    ["_channel", GVAR(markSelfChannel), [0]],
    ["_color", GVAR(markSelfColor), [""]]
];
private ["_marker"];
TRACE_2("fnc_markSelf",_channel,_color);

if (_channel isEqualTo -2) then {_channel = currentChannel};

_marker = createMarkerLocal [
    format [
        "_USER_DEFINED #%1/%2/%3",
        getPlayerID ace_player,
        diag_tickTime,
        _channel
    ],
    position ace_player,
    _channel,
    ace_player
];

_marker setMarkerTypeLocal "hd_dot";
_marker setMarkerColorLocal _color;
_marker setMarkerText "";
_marker;
