#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Ejects players from a vehicle.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * objectParent ace_player call BNA_KC_vehicles_fnc_autoEject;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private [];
TRACE_1("fnc_autoEject",_vehicle);

if (!GVAR(autoEject_enabled) or isNull _vehicle) exitWith {};

if (IS_STOPPED(_vehicle)) then {
    {
        [QGVAR(autoEject), _x, _x] call CBA_fnc_targetEvent;
    } forEach (crew _vehicle);
} else {
    if (GVAR(autoEject_invincibleTimer) > 0) then {
        // Disable damage to prevent dying on crash, gets re-enabled in client event handler
        {_x allowDamage false;} forEach (crew _vehicle);
    };

    [{
        IS_STOPPED(_this);
    }, {
        {
            [QGVAR(autoEject), _x, _x] call CBA_fnc_targetEvent;
        } forEach (crew _this);
    }, _vehicle, GVAR(autoEject_timeout), {
        INFO_2("Timed out while ejecting %1 (%2)",_this,typeOf _this);
    }] call CBA_fnc_waitUntilAndExecute;
};

nil;