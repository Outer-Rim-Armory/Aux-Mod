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
private ["_rankColor"];

if (isNull _object) exitWith {};

_rankColor =
{
    params ["_rank"];
    private _color = "#FFFFFF";
    if (_rank in RANKS_NCO) then {_color = "#586619";};
    if (_rank in RANKS_OFFICER) then {_color = "#194A66";};
    if (_rank == "MAJ") then {_color = "#7D180A";};
    if (_rank == "COM") then {_color = "#B49403";};
    _color;
};

{
    _object addAction
    [
        format ["<t color='%1'>Grab %2 Uniform</t>", _x call _rankColor, _x],
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_rank"];
            [_rank] call BNAKC_fnc_grabUniform;
        },
        [_x],
        _forEachIndex * 2, // x2 to let other actions sit before/after actions (if needed)
        false,
        false,
        "",
        "player getVariable ['BNAKC_Uniform_Menu', 0] == 1"
    ];
} forEach RANK_LIST;