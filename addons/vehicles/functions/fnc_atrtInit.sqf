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
 * _atrt call FUNC(atrtInit);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]]
];
private [];
TRACE_1("fnc_atrtInit",_atrt);

if (isNull _atrt) exitWith {};

_atrt setAnimSpeedCoef 1.5;
_atrt disableAI "all";
_atrt enableStamina false;

_atrt addAction ["Drive", {
        params ["_atrt", "_rider"];
        [_atrt, _rider] call FUNC(mountATRT);
    }, [], 1.5, true, true, "",
    QUOTE([ARR_2(_originalTarget,_this)] call FUNC(canMountATRT)), 4
];

_atrt addAction ["Dismount", {
        params ["_atrt"];
        _atrt call FUNC(dismountATRT);
    }, [], 1.5, true, true, "",
    QUOTE([ARR_2(_originalTarget,ace_player)] call FUNC(canDismountATRT)), 4
];