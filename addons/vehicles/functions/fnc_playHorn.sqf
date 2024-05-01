#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound effect from an object
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The CfgSounds class <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [objectParent ace_player, "BNA_KC_Sound_Horn_Wyvern"] call BNA_KC_vehicles_fnc_playHorn;
 *
 * Public: No
 */

params ["_vehicle", "_sound"];
private [];
TRACE_2("fnc_playHorn",_vehicle,_sound);

(getArray (configFile >> "CfgSounds" >> _sound >> "sound")) params ["", "", "", "_distance"];
[QEGVAR(core,forceSay3D), [_vehicle, _sound, _distance]] call CBA_fnc_globalEvent;
nil;