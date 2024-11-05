#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Initalizes an AT-RT
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * _atrt call FUNC(atrt_init);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]]
];
TRACE_1("fnc_atrt_init",_atrt);

if (isNull _atrt) exitWith {};

_atrt setAnimSpeedCoef 3;
_atrt disableAI "all";
_atrt enableStamina false;

_atrt addAction ["Drive", {
        params ["_atrt", "_rider"];
        [_atrt, _rider] call FUNC(atrt_mount);
    }, [], 1.5, true, true, "",
    QUOTE([ARR_2(_originalTarget,_this)] call FUNC(atrt_canMount)), 4
];

_atrt addAction ["Dismount", {
        params ["_atrt"];
        _atrt call FUNC(atrt_dismount);
    }, [], 1.5, true, true, "",
    QUOTE([ARR_2(_originalTarget,ace_player)] call FUNC(atrt_canDismount)), 4
];

_atrt addEventHandler ["HandleDamage", LINKFUNC(atrt_handleDamage)];
_atrt addEventHandler ["Deleted", {
    params ["_entity"];
    private ["_allEffects"];
    _allEffects = _entity getVariable ["TAS_ATRT_effects", []];
    { deleteVehicle _x; } forEach _allEffects;
}];