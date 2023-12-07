/*
 * Author: DartRuffian
 * Creates a map marker on the player's position.
 * The channel of the mark is based on BNA_KC_Map_MarkChannel.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * String - The marker's name or empty string if the marker name is not unique.
 *
 * Example:
 * call BNAKC_fnc_markSelf;
 */


params [["_channel", BNA_KC_Map_MarkChannel, [0]], ["_color", BNA_KC_Map_MarkColor, [""]]];

// -2 is used as an "auto" value in the addon options, since -1 is used by createMarker by default and shows to all players
if (_channel isEqualTo -2) then { _channel = currentChannel; };

private _marker = createMarkerLocal
[
    format ["_USER_DEFINED #%1/%2/%3", getPlayerID ace_player, diag_tickTime, _channel], // Extra data passed so the player actually shows as the owner
    position ace_player,
    _channel,
    ace_player
];

_marker setMarkerTypeLocal "hd_dot";       // Markers are invisible by default
_marker setMarkerColorLocal _color;
_marker setMarkerText "";
_marker;