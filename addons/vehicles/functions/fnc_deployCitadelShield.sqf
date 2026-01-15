#include "..\script_component.hpp"
/*
 * Authors: Junrey, Edited by Dogo
 * Deploys a vehicle's Citadel Shield.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Mode <STRING>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_vehicle, undeploy] call BNA_KC_vehicles_fnc_deployCitadelShield
 *
 * Public: No
 */


params
[
	["_obj", objNull, [objNull]],
	["_mode", "deploy", [""]]
];


if (isGamePaused) then {continue};



switch _mode do
{
	case "deploy":
	{
		inGameUISetEventHandler ['Action',""];
		_obj setVariable [QGVAR(DeployCitadelShield),true,true];
		[_obj, "blockEngine", QGVAR(DeployCitadelShield), true] call ace_common_fnc_statusEffect_set;
		playSound3D [QPATHTOEF(vehicles,data\audio\Deploy.wss), _obj, false, getposASL _obj, 1];
		private _vD = vectorDir _obj;
		private _vU = vectorUp _obj;
		private _hold = "3AS_ShieldTank_Shield" createVehicle getPos _obj;
		private _height = if (_obj isKindOf "3AS_Rho_REP_F" || _obj isKindOf "3AS_Nu_REP_F") then {(_obj call CBA_fnc_realHeight) + 5} else {(_obj call CBA_fnc_realHeight)};

		_hold setDir (getDir _obj);
		_hold setVectorDirAndUp [_vD,_vU];
		_hold setPosWorld getPosWorld _obj;
		[_hold,_height,(_obj modelToWorld (getCenterOfMass _obj))] call BIS_fnc_setHeight;
		if (_obj isKindOf "3AS_Jug") then
		{
			_obj attachTo [_hold];
		}
		else
		{
			_hold attachTo [_obj];
		};


		[_obj,_hold] spawn
		{
			params ["_obj", "_hold"];

			private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelCitadelConsumption";
			private _fuel = fuel _obj;

			waitUntil
			{
				if (_obj getVariable QGVAR(DeployCitadelShield) == false || isNull _obj || fuel _obj == 0) exitWith
				{
					if (_obj isKindOf "3AS_Jug") then
					{
						detach _obj;
						deleteVehicle _hold;
					}
					else
					{
						detach _hold;
						deleteVehicle _hold;
					};

					_obj setVariable [QGVAR(DeployCitadelShield),false,true];
					true;
				};

				_fuel = _fuel - _fuelDeduction;
				_obj setFuel _fuel;
				sleep 1;
				false;
			};
		};
	};
	case "undeploy":
	{
		playSound3D [QPATHTOEF(vehicles,data\audio\Undeploy.wss), _obj, false, getposASL _obj, 1];
		_obj setVariable [QGVAR(DeployCitadelShield),false,true];
	};
};
