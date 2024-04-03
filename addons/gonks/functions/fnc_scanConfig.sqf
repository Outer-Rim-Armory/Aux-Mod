#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Scans config for loadouts, weapon options, etc.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNA_KC_gonks_fnc_scanConfig;
 *
 * Public: No
 */

private ["_loadoutConfig", "_weaponsConfig"];
TRACE_0("fnc_scanConfig");

_loadoutConfig = "true" configClasses (configFile >> QGVAR(loadouts));

{
    private ["_detachment", "_value"];
    _detachment = _x;
    _value = [];

    {
        private ["_squadType"];
        _squadType = _x;
        {
            private ["_loadout"];
            _loadout = _x;
            _value = [
                getText (_loadout >> "label"),
                getText (_loadout >> "handgun"),
                getText (_loadout >> "launcher"),
                getText (_loadout >> "binoculars"),
                getText (_loadout >> "vest"),
                getText (_loadout >> "backpack"),
                getArray (_loadout >> "weapons"),
                getArray (_loadout >> "magazines"),
                getArray (_loadout >> "items")
            ];
        } forEach ("true" configClasses _squadType);
    } forEach ("true" configClasses _detachment);

    GVAR(loadouts) set [configName _detachment, _value];
} forEach _loadoutConfig;

publicVariable QGVAR(loadouts);

_weaponsConfig = "true" configClasses (configFile >> QGVAR(weapons));

{
    private _magazines = getArray (_x >> "magazines");
    GVAR(weapons) set [configName _x, _magazines];
} forEach _weaponsConfig;

publicVariable QGVAR(weapons);