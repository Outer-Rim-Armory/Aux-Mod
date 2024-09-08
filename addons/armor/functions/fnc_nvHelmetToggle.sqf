#include "..\script_component.hpp"
/*
 * Author: SweMonkey
 * Edited by DartRuffian
 *
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#VisionModeChanged
 *
 * Return Value:
 * None
 *
 * Example:
 * ["visionMode", _this call BNA_KC_armor_fnc_nvHelmetToggle, false] call CBA_fnc_addPlayerEventHandler;
 */

params ["_person", "_visionMode", "_TIindex", "_visionModePrev", "_TIindexPrev", "_vehicle", "_turret"];
private ["_canToggle", "_helmetOff", "_helmetOn"];

_canToggle = [configFile >> "CfgWeapons" >> headgear _person, QGVAR(nvCanToggle), FALSE] call BIS_fnc_returnConfigEntry;
_helmetOff = [configFile >> "CfgWeapons" >> headgear _person, QGVAR(nvHelmetOff), ""] call BIS_fnc_returnConfigEntry;
_helmetOn = [configFile >> "CfgWeapons" >> headgear _person, QGVAR(nvHelmetOn), ""] call BIS_fnc_returnConfigEntry;
TRACE_3("fnc_nvHelmetToggle",_canToggle,_helmetOff,_helmetOn);

if (_canToggle isEqualTo FALSE) exitWith {};
if (_helmetOff isEqualTo "" or _helmetOn isEqualTo "") exitWith {
    WARNING_2("Headgear %1 has %2 enabled but does not have an on and/or off version set.",headgear _person,QGVAR(nvCanToggle))
};

switch (_visionMode) do {
    case VISION_NORMAL: {
        _person addHeadgear _helmetOff;
    };
    default {
        _person addHeadgear _helmetOn;
    };
};