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
        case (_rank == "COM"): {"#B49403";};
        case (_rank in ["MAJ", "CAP"]): {"#7D180A";};
        case (_rank in [LOADOUTS_RANKS_OFFICER]): {"#194A66";};
        case (_rank in [LOADOUTS_RANKS_NCO]): {"#586619";};
        default {"#FFFFFF"};
    };
    _color;
};

{
    private ["_detachment", "_label", "_order"];
    _detachment = _x;
    _label = getText (configFile >> QGVAR(ranks) >> _detachment >> "label");
    _order = getNumber (configFile >> QGVAR(ranks) >> _detachment >> "order");
    _object addAction [
        format ["<t color='#FFFFFF'>%1</t>", _label], {
            params ["_target", "_caller", "_actionId", "_detachment"];
            GVAR(rankPage) = RANKMENU_PAGE_UNIFORMS;
            GVAR(rankTab) = _detachment;
        },
        _detachment,
        100 - _order,
        false,
        false,
        "",
        QUOTE(GVAR(rankPage) == MENU_PAGE_HOME),
        3
    ];

    {
        [_object,
            format ["<t color='%1'>Grab %2 Uniform</t>", _x call _fnc_rankColor, _x],
            {(_this select 3) call FUNC(applyRank);},
            [_detachment, _x],
            format [QUOTE(GVAR(rankPage) == RANKMENU_PAGE_UNIFORMS and {GVAR(rankTab) == '%1'}), _detachment],
            100 - _y#0
        ] call FUNC(addAction);
    } forEach _y;
} forEach GVAR(ranks);

[ _object, "<t font='RobotoCondensedBold' color='#FFFFFF'>Home</t>",{
    GVAR(rankPage) = MENU_PAGE_HOME;
    GVAR(rankTab) = "";
}] call FUNC(addAction);

nil;