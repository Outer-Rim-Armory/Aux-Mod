#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Replaces deprecated classes in ace arsenal loadouts.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_core_fnc_onArsenalOpen_ace;
 *
 * Public: No
 */

private ["_loadouts", "_fnc_getReplacementItem", "_fnc_filterLoadout"];
TRACE_0("fnc_onArsenalOpen_ace");

_loadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];

_fnc_getReplacementItem = {
    params ["_class"];
    [configFile >> QGVARMAIN(replacementItems), _class, _class] call BIS_fnc_returnConfigEntry;
};

// From: https://github.com/acemod/ACE3/blob/master/addons/arsenal/functions/fnc_verifyLoadout.sqf#L39-L85
_fnc_filterLoadout = {
    _this apply {
        if (_x isEqualType "" && {_x != ""}) then {
            _name = _x call _fnc_getReplacementItem;
            _name
        } else {
            if (_x isEqualType []) then {
                _itemArray = _x call _fnc_filterLoadout;
                if (count _itemArray == 2 && {(_itemArray select 0) isEqualTo ""} && {(_itemArray select 1) isEqualType []}) then {
                    _itemArray = [];
                };
                _itemArray
            } else {
                _x
            };
        };
    };
};

_loadouts = _loadouts apply {
    _x call _fnc_filterLoadout;
};

profileNamespace setVariable ["ace_arsenal_saved_loadouts", _loadouts];
nil;