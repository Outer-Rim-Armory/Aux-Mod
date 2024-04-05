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

    [
        _object,
        format ["<t color='#FFFFFF'>%1</t>", _label], {
            params ["_target", "_caller", "_actionId", "_detachment"];
            GVAR(loadoutPage) = LOADOUTMENU_PAGE_SQUAD;
            GVAR(loadoutTab) = _detachment;
        },
        _detachment,
        QUOTE(GVAR(loadoutPage) == MENU_PAGE_HOME),
        100 - _order
    ] call FUNC(addAction);

    {
        _squadType = _x;
        private _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "label");
        private _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "order");

        [
            _object,
            format ["<t color='#FFFFFF'>%1</t>", _label], {
                params ["", "", "", "_squadType"];
                GVAR(loadoutPage) = LOADOUTMENU_PAGE_ROLE;
                GVAR(loadoutSquadType) = _squadType;
            },
            _squadType,
            format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_SQUAD and {GVAR(loadoutTab) == '%1'}), _detachment],
            100 - _order
        ] call FUNC(addAction);

        {
            private _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> _x >> "label");
            private _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> _x >> "order");
            private _allowedWeapons = getArray (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> _x >> "weapons");
            [
                _object,
                format ["<t color='#FFFFFF'>%1</t>", _label], {
                    params ["", "", "", "_arguments"];
                    _arguments params ["_detachment", "_squadType", "_loadout", "_allowedWeapons"];
                    [_detachment, _squadType, _loadout] call FUNC(applyLoadout);
                    GVAR(loadoutPage) = LOADOUTMENU_PAGE_WEAPONS;
                    GVAR(allowedWeapons) = _allowedWeapons;
                },
                [_detachment, _squadType, _x, _allowedWeapons],
                format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_ROLE and {GVAR(loadoutTab) == '%1'}), _detachment],
                100 - _order
            ] call FUNC(addAction);
        } forEach _y;
    } forEach _y;
} forEach GVAR(loadouts);

{
    private _label = getText (configFile >> QGVAR(weapons) >> _x >> "label");
    private _order = getNumber (configFile >> QGVAR(weapons) >> _x >> "order");
    [
        _object,
        format ["<t color='#FFFFFF'>%1</t>", _label], {
            params ["", "", "", "_weapon"];
            _weapon call FUNC(giveWeapon);
            GVAR(loadoutPage) = LOADOUTMENU_PAGE_ROLE;
            GVAR(allowedWeapons) = [];
        },
        _x,
        format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_WEAPONS and {'%1' in GVAR(allowedWeapons)}), _x],
        100 - _order
    ] call FUNC(addAction);
} forEach GVAR(weapons);

[_object, "<t font='RobotoCondensedBold' color='#FFFFFF'>Home</t>",{
    GVAR(loadoutPage) = MENU_PAGE_HOME;
    GVAR(loadoutTab) = "";
    GVAR(loadoutSquadType) = "";
    GVAR(allowedWeapons) = [];
}] call FUNC(addAction);

nil;