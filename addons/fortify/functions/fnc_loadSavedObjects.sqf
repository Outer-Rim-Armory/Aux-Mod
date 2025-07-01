#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * ACE Fortify objectPlaced event handler. Used to modify objects after being placed.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_fortify_fnc_loadSavedObjects
 *
 * Public: No
 */

private [];
TRACE_1("fnc_loadSavedObjects",GVAR(saveKey));

if (GVAR(savedObjects) isEqualTo createHashMap) exitWith {
    GVAR(counter) = 0;
};

{
    private ["_counter", "_object", "_jipID", "_action"];
    _counter = _x;
    (GVAR(savedObjects) get _counter) params ["_class", "_side", "_positionASL", "_vectorDirAndUp"];
    TRACE_5("Restoring object:",_counter,_class,_side,_positionASL,_vectorDirAndUp);

    _object = createVehicle [_class, [0, 0, 0], [], 0, "CAN_COLLIDE"];
    _object setPosASL _positionASL;
    _object setVectorDirAndUp _vectorDirAndUp;
    _object setVariable [QGVAR(counter), _counter];

    // There is `acex_fortify_objectPlaced` server event, but it requires the unit placing it
    // Instead, we manually add the actions / map marker
    _jipID = ["ace_fortify_addActionToObject", [_side, _object]] call CBA_fnc_globalEventJIP;
    [_jipID, _object] call CBA_fnc_removeGlobalEventJIP;

    [_side, _object] call FUNC(createMapMarker);
} forEach keys GVAR(savedObjects);
