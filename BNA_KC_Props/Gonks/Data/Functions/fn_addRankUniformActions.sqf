/*
 * Author: DartRuffian
 * Adds UserActions for the rank uniforms to an object.
 *
 * Arguments:
 * object: Object - The object to add the actions to
 *
 * Return Value:
 * None
 *
 * Example:
 * box call BNAKC_fnc_addRankUniformActions;
 */


#include "script_component.sqf"
params [["_object", objNull, [objNull]]];

if (isNull _object) exitWith {};

{
    _object addAction
    [
        format ["Grab %1 Uniform", _x],
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_rank"];
            [_rank] call BNAKC_fnc_grabUniform;
        },
        [_x],
        1.5,
        false,
        false,
        "",
        "true"
    ];
} forEach RANK_LIST;