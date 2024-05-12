#include "..\script_component.hpp"
/*
 * Author: Seb
 * Modified by DartRuffian
 * Creates a map marker for a created static object but only for sides friendly to the creator side.
 * Modified from ACE to use a side instead of a unit.
 *
 * Arguments:
 * 0: Side the object "belongs" to <SIDE>
 * 1: Created fortify object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [west, cursorObject] call BNA_KC_fortify_fnc_createObjectMarker
 *
 * Public: No
 */

params ["_side", "_object"];
private ["_bbr", "_p1", "_p2", "_maxWidth", "_maxLength", "_direction", "_markerNameStr", "_channel", "_marker"];
TRACE_2("createObjectMarker",_side,_object);

// Get Object size and direction
_bbr = 0 boundingBoxReal _object;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
_maxLength = abs ((_p2 select 1) - (_p1 select 1));
_direction = getDir _object;

// Marker name unique to this object
_markerNameStr = format ["ace_fortify_marker_%1", hashValue _object];
_channel = parseNumber (ace_fortify_markObjectsOnMap != 2);

_marker = createMarkerLocal [_markerNameStr, _object, _channel];
TRACE_2("created",_marker,_channel);
_marker setMarkerShapeLocal "RECTANGLE";
_marker setMarkerBrushLocal "SolidFull";
_marker setMarkerSizeLocal [(_maxWidth / 2),(_maxLength / 2)];
_marker setMarkerDirLocal _direction;
_marker setMarkerColor "ColorGrey";
_object setVariable ["ace_fortify_mapMarker", _marker];

_object addEventHandler ["Deleted", {
    params ["_object"];
    private _marker = _object getVariable "ace_fortify_mapMarker";
    TRACE_2("cleaning up marker",_object,_marker);
    deleteMarker _marker
}];