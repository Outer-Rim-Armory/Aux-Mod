#include "..\script_component.hpp"
/*
 * Author: Dogo
 * Creates a vehicle attached to parachute.
 *
 * Arguments:
 * 0: Position <ARRAY>
 * 1: Class name of crate <STRING>
 *
 * Return Value:
 * N/A
 *
 * Examples:
 * [getposATL player,BNA_KC_Resupply_PlatoonAmmo] call BNA_KC_datapad_datadrop;
 */

params ["_pos","_crate"];

private _posY = ((_pos select 2) + 200);
private _CposY = ((_pos select 2) + 203);
_Parachutepos = _pos;
_Resupplypos = _pos;
_Parachutepos set [2,_CposY];
_Resupplypos set [2,_posY];
_ent = createVehicle[_crate,(_Resupplypos)];
_Parachuteent = createVehicle["i_parachute_02_f",(_Parachutepos)];
_ent attachTo [_Parachuteent,[0,0,0]];
_Smoke = "SmokeShellYellow" createVehicle (_Resupplypos);
_Smoke attachTo [_ent];
