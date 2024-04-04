#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Init function for a loadout box
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _box call BNA_KC_gonks_fnc_loadoutBoxInit;
 *
 * Public: No
 */

params [
    ["_object", objNull, [objNull]]
];
TRACE_1("fnc_loadoutBoxInit",_object);

if (isNull _object) exitWith {};

{
    private ["_detachment", "_label", "_order"];
    _detachment = _x;
    _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> "label");
    _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> "order");

    _object addAction [
        format ["<t color='#FFFFFF'>%1</t>", _x], {
            params ["_target", "_caller", "_actionId", "_detachment"];
            GVAR(loadoutPage) = LOADOUTMENU_PAGE_SQUAD;
            GVAR(loadoutTab) = _detachment;
        },
        _detachment,
        100 - _order,
        false,
        false,
        "",
        QUOTE(GVAR(loadoutPage) == MENU_PAGE_HOME),
        3
    ];

    {
        _squadType = _x;
        systemChat format ["Squad Type: %1", _squadType];
        _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "label");
        _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "order");

        _object addAction [
            format ["<t color='#FFFFFF'>%1</t>", _label], {
                params ["_target", "_caller", "_actionId", "_arguments"];
                _arguments params ["_detachment", "_squadType"];
                GVAR(loadoutPage) = LOADOUTMENU_PAGE_ROLE;
                GVAR(loadoutSquadType) = _squadType;
            },
            [_detachment, _squadType],
            100 - _order,
            false,
            false,
            "",
            format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_SQUAD and {GVAR(loadoutTab) == '%1'}), _detachment],
            3
        ];
    } forEach _y;
} forEach GVAR(loadouts);

// {
//     _object addAction
//     [
//         format ["<t color='#FFFFFF'>%1</t>", _x],
//         {
//             params ["_target", "_caller", "_actionId", "_arguments"];
//             _arguments params ["_weapon"];
//             _weapon call FUNC(giveWeapon);
//             ace_player setVariable [QGVAR(LoadoutMenu_Page), nil];
//         },
//         [_x],
//         (count LOADOUTS_WEAPONS_LIST) - _forEachIndex,
//         false,
//         false,
//         "",
//         format [QUOTE(%1 call FUNC(canShowWeaponOption)), str _x],
//         3
//     ];
// } forEach LOADOUTS_WEAPONS_LIST;

nil;