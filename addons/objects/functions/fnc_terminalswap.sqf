#include "..\script_component.hpp"
/*
 * Author: Dogo
 * Swaps terminals
 *
 * Arguments:
 * 0: console/spawn location <OBJECT>
 * 1: Class name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * QUOTE([ARR_2(this,'BNA_KC_AIRSpawner')] call FUNC(terminalSwap));
 */

Params ["_console","_obj"];

private ["_pos","_dir","_veh","_action"];

private _positionASL = getPosASL _console;
private _vectorDirAndUp = [vectorDir _console, vectorUp _console];

_veh = createVehicle [_obj,_positionASL,[],0,"CAN_COLLIDE"];


// _pos set [2,0];
_veh setPosASL _positionASL;
_veh setVectorDirAndUp _vectorDirAndUp;

deleteVehicle _console;

_terminalClassName = typeOf _veh;
if !(_terminalClassName in [QCLASS(SwapTerm),QCLASS(AIRSpawner),QCLASS(LandSpawner),QCLASS(CrateSpawner)]) then {
	_action = _veh addAction [
		"Change back to Swapping terminal",
		{params ["_terminal"]; [_terminal,"BNA_KC_SwapTerm"] call bna_kc_objects_fnc_terminalswap},
		nil,
		20,
		true,
		false,
		" ",
		"true",
		10
	];
};
