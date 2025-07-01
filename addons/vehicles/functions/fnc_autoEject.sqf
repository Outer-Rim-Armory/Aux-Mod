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
private ["_fnc_eject"];
TRACE_1("fnc_autoEject",_vehicle);

if (!GVAR(autoEject_enabled) or isNull _vehicle) exitWith {};

_fnc_eject = {
    params ["_unit"];
    if (!alive _unit or
        {!(_unit getVariable ["ace_isUnconscious", false])} or
        {!(_x call ace_common_fnc_isPlayer)}
    ) exitWith {};

    if (GVAR(autoEject_invincibleTimer) > 0) then {
        INFO_1("Disabling damage for %1",_unit);
        _unit allowDamage false;
        [{
            INFO_1("Enabling damage for %1",_this);
            _this allowDamage true;
        }, _unit, GVAR(autoEject_invincibleTimer)] call CBA_fnc_waitAndExecute;
    };

    INFO_1("Ejecting %1",_unit);
    ["ace_common_displayTextStructured", ["You have been ejected.", 1.5, _unit], _unit] call CBA_fnc_targetEvent;
    moveOut _unit;
};

if (IS_STOPPED(_vehicle)) then {
    {
        _x call _fnc_eject;
    } forEach (crew _vehicle);
} else {
    if (GVAR(autoEject_invincibleTimer) > 0) then {
        // Disable damage to prevent dying on crash, gets re-enabled later
        {
            INFO_1("Disabling damage for %1",_x);
            _x allowDamage false;
        } forEach (crew _vehicle);
    };

    [{
        params ["_vehicle"];
        IS_STOPPED(_vehicle);
    }, {
        params ["_vehicle", "_fnc_eject"];
        {_x call _fnc_eject;} forEach (crew _vehicle);
    }, [_vehicle, _fnc_eject], GVAR(autoEject_timeout), {
        params ["_vehicle"];
        INFO_2("Timed out while ejecting %1 (%2)",_vehicle,typeOf _vehicle);
    }] call CBA_fnc_waitUntilAndExecute;
};

nil;
