#include "..\script_component.hpp"
/*
 * Author: 104th Devs
 * Deploys a vehicle from terminal
 *
 * Arguments:
 * 0: console/spawn location <OBJECT>
 * 1: Class name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * QUOTE([ARR_2(this,'BNA_KC_Gozanti')] call FUNC(vicSpawner));
 */

private["_console","_vehicle","_dir","_spawn","_veh"];
_console = _this select 0;
_vehicle = _this select 1;
_spawn = getPosASL _console;
_dir = getDir _console;
_veh = createVehicle [_vehicle,[0,0,0],[],0,"NONE"];
_veh setDir _dir;
// _veh setPosASL [(_spawn select 0) + 15, (_spawn select 1) + 0,( _spawn select 2) + 1];
_veh setPos (_console modelToWorld [15,0,1]);

[_veh, 5] call EFUNC(core,tempDisableDamage);
