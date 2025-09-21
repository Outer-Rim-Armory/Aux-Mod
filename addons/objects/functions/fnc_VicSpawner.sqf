#include "..\script_component.hpp"

// sqf file from 104th jango armoury aux mod
// got permision to copy over - dogo
// spawns vehicle a small distance away


private["_console","_vehicle","_dir","_spawn","_veh"];
_console = _this select 0;
_vehicle = _this select 1;
_spawn = getPosAsL _console;
_dir = getDir _console;
_veh = createVehicle [_vehicle,[0,0,0],[],0,"NONE"];
_veh setDir _dir;
// _veh setPosASL [(_spawn select 0) + 15, (_spawn select 1) + 0,( _spawn select 2) + 1];
_veh setPos (_console modelToWorld [15,0,1]);

[_veh, 5] call EFUNC(core,tempDisableDamage);
