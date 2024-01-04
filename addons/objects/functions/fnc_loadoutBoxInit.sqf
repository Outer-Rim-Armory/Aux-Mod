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
 * _box call BNA_KC_objects_fnc_loadoutBoxInit;
 */

params [
    ["_object", objNull, [objNull]]
];
TRACE_1("fnc_loadoutBoxInit",_object);

if (isNull _object) exitWith {};

{
    _object addAction [
        format ["<t color='#FFFFFF'>%1</t>", _x],
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_loadout"];

            ace_player setVariable [QGVAR(mos), _loadout];
            _loadout call FUNC(applyLoadout);

            ace_player setVariable [QGVAR(LoadoutMenu_Page), LOADOUTMENU_PAGE_WEAPONS];
        },
        [_x],
        (count LOADOUTS_KITS_LIST) - _forEachIndex,
        false,
        false,
        "",
        QUOTE(LOADOUTMENU_GETPAGE isEqualTo MENU_PAGE_HOME)
    ];
} forEach LOADOUTS_KITS_LIST;

{
    _object addAction
    [
        format ["<t color='#FFFFFF'>%1</t>", _x],
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_weapon"];
            _weapon call FUNC(giveWeapon);
            ace_player setVariable [QGVAR(LoadoutMenu_Page), nil];
        },
        [_x],
        (count LOADOUTS_WEAPONS_LIST) - _forEachIndex,
        false,
        false,
        "",
        format [QUOTE(%1 call FUNC(canShowWeaponOption)), str _x]
    ];
} forEach LOADOUTS_WEAPONS_LIST;

nil;