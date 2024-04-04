#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Init function for a uniform box.
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _box call BNA_KC_gonks_fnc_rankBoxInit;
 *
 * Public: No
 */

params ["_object"];
private ["_fnc_rankColor"];
TRACE_1("fnc_rankBoxInit",_object);

if (isNull _object) exitWith {};

_fnc_rankColor = {
    params ["_rank"];
    private ["_color"];

    _color = switch (true) do {
        case (_rank isEqualTo "COM"): {"#B49403";};
        case (_rank isEqualTo "MAJ"): {"#7D180A";};
        case (_rank in [LOADOUTS_RANKS_OFFICER]): {"#194A66";};
        case (_rank in [LOADOUTS_RANKS_NCO]): {"#586619";};
        default {"#FFFFFF"};
    };
    _color;
};

{
    private ["_detachment", "_label", "_order"];
    _detachment = _x;
    _label = getText (configFile >> QGVAR(ranks) >> _x >> "label");
    _order = getNumber (configFile >> QGVAR(ranks) >> _x >> "order");
    _object addAction [
        format ["<t color='#FFFFFF'>%1</t>", _label], {
            params ["_target", "_caller", "_actionId", "_arguments"];
        },
        [],
        100 - _order,
        false,
        false,
        "",
        QUOTE(GVAR(rankPage) == MENU_PAGE_HOME)
    ];
    // _object addAction [
    //     format ["<t color='%1'>Grab %2 Uniform</t>", _x call _rankColor, _x],
    //     {
    //         params ["_target", "_caller", "_actionId", "_arguments"];
    //         _arguments params ["_rank"];
    //         _rank call FUNC(applyRankLoadout);
    //     },
    //     [_x],
    //     _forEachIndex,
    //     false,
    //     false,
    //     "",
    //     QUOTE(UNIFORMMENU_GETPAGE isEqualTo UNIFORMMENU_PAGE_RANKUNIFORMS)
    // ];
} forEach GVAR(ranks);

nil;