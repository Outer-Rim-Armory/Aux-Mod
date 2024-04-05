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
TRACE_1("fnc_scanConfig",isServer);

if (!isServer) exitWith {};

GVAR(loadouts) = createHashmap;
GVAR(ranks) = createHashmap;
GVAR(weapons) = createHashmap;

_loadoutConfig = "true" configClasses (configFile >> QGVAR(loadouts));

{
    private ["_detachment", "_value"];
    _detachment = _x;
    _squadTypes = createHashmap;

    {
        private ["_squadType"];
        _squadType = _x;
        _squadLoadouts = createHashmap;
        {
            private ["_loadout"];
            _squadLoadouts set [configName _x, [
                getNumber (_x >> "order"),
                getText (_x >> "label"),
                getText (_x >> "handgun"),
                getText (_x >> "launcher"),
                getText (_x >> "binoculars"),
                getText (_x >> "vest"),
                getText (_x >> "backpack"),
                getArray (_x >> "weapons"),
                getArray (_x >> "magazines"),
                getArray (_x >> "items")
            ]];
        } forEach ("true" configClasses _squadType);

        _squadTypes set [configName _squadType, _squadLoadouts];
    } forEach ("true" configClasses _detachment);

    GVAR(loadouts) set [configName _detachment, _squadTypes];
} forEach _loadoutConfig;

publicVariable QGVAR(loadouts);

_ranksConfig = "true" configClasses (configFile >> QGVAR(ranks));

{
    private ["_detachment", "_value"];
    _detachment = _x;
    _value = createHashmap;

    {
        _value set [configName _x, [
            getNumber (_x >> "order"),
            getText (_x >> format ["helmetP%1", GVAR(armorPhase)]),
            getText (_x >> format ["uniformP%1", GVAR(armorPhase)]),
            getText (_x >> format ["vestP%1", GVAR(armorPhase)]),
            getText (_x >> format ["nvgP%1", GVAR(armorPhase)])
        ]];
    } forEach ("true" configClasses _detachment);

    GVAR(ranks) set [configName _detachment, _value];
} forEach _ranksConfig;

publicVariable QGVAR(ranks);

_weaponsConfig = "true" configClasses (configFile >> QGVAR(weapons));

{
    private _weapon = getText (_x >> "weapon");
    private _magazines = getArray (_x >> "magazines");
    GVAR(weapons) set [configName _x, [_weapon, _magazines]];
} forEach _weaponsConfig;

publicVariable QGVAR(weapons);