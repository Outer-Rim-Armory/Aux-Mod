#include "..\script_component.hpp"
/*
 * Authors: Junrey, Edited by Dogo and Dart
 * Deploys a vehicle's Repair module
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Mode <STRING>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_vehicle, undeploy] call BNA_KC_vehicles_fnc_deployModuleRepair
 *
 * Public: No

 * Dogo Note: idk what im doing with this box, im just filling in what info fits
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
		// systemChat "Deployed";
		inGameUISetEventHandler ['Action', "hint 'repair start'; true"];
		_obj setVariable [QGVAR(DeployModule),true,true];
		playSound3D [QPATHTOEF(vehicles,data\audio\Deploy.wss), _obj, false, getposASL _obj, 1];
		private _vD = vectorDir _obj;
		private _vU = vectorUp _obj;
		private _hold = "Land_HelipadEmpty_F" createVehicle getPos _obj;
		_hold setPosWorld getPosWorld _obj;
		_hold setDir (getDir _obj);
		_hold setVectorDirAndUp [_vD,_vU];
		_obj attachTo [_hold];
		_sfx = createSoundSource [QCLASS(SoundSource_Repair_loop), position _obj, [], 0];
		_sfx attachTo [_obj];
		[_obj,_hold,_sfx] spawn
		{
			params ["_obj", "_hold","_sfx"];

			private _radius = missionNamespace getVariable "BNA_KC_vehicles_areaHealRadius_E";
			private _repairRate = missionNamespace getVariable "BNA_KC_vehicles_areaHealRate_E";
			private _repair = missionNamespace getVariable "BNA_KC_vehicles_healAmount_E";
			private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelShieldConsumption_E";
			private _aceRepair = missionNamespace getVariable ["ace_repair_enabled", false];
			private _fuel = fuel _obj;

			waitUntil
			{
				// systemChat "Wait";
				if (_obj getVariable QGVAR(DeployModule) == false || isNull _obj || fuel _obj == 0) exitWith
				{
					detach _sfx;
					deleteVehicle _sfx;
					detach _obj;
					deleteVehicle _hold;
					_obj setVariable [QGVAR(DeployModule),false,true];
					true;
				};

				private _landVeh = [_obj,vehicles,_radius,{alive _x}] call CBA_fnc_getNearest;
				_fuel = _fuel - _fuelDeduction;
				_obj setFuel _fuel;
				sleep _repairRate;

				for "_i" from 0 to count _landVeh -1 do
				{
					_veh = _landVeh select _i;
					if (!alive _veh) exitWith {};
					_dmgVeh = damage _veh;

					// systemChat (format ["%1",_Veh]); // debug print near vics
                    // this script is held together by ductape and dogo's sanity
                    private _allHitpointDamage = getAllHitPointsDamage _veh;
                    if (_allHitpointDamage isEqualTo []) exitWith {}; // should exit if hitpoints null
                    // sleep 1;
                    // private _damage = _allHitpointDamage select 2;
					private _HitpointsA = _allHitpointDamage select 0;
                    // systemChat (format ["dmg %1",_damage]);
                    // systemChat (format ["hp %1",_HitpointsA]);
                    {
                        private _damage = _veh getHitPointDamage (_HitpointsA select _forEachIndex); // selects the dammage of the current hitpoint
						// if (((count _damage) - _forEachIndex) >= 0 ) then
						// {
                        private _currDamage = ((_damage /* select _forEachIndex*/) - _repair) max 0;
                        // systemChat (format ["dmg %1",_damage]);
						// systemChat (format ["cdmg %1",_currDamage]);
						// systemChat (format ["index %1", _forEachIndex]);
						// systemChat (format["ALLHP %1", _allHitpointDamage]);
                       	[QGVAR(setHitPointDamage), [_veh, _x, _currdamage], _veh] call CBA_fnc_targetEvent
						// }
						// else {};
                    } forEach _HitpointsA; // Loop over hitpoint names

					if (_dmgVeh > 0) then
					{
					    if (_aceRepair) then
						{
							[_veh, (_dmgVeh - _repair)] call ace_repair_fnc_setDamage;
							// systemChat "REPAIRING WITH ACE";

						}
						else
						{


							_veh setDamage (_dmgVeh - _repair);
							{
						    	_veh setHitIndex [_forEachIndex, _x];
							} forEach _allHitPointDamages;
							// systemChat "base repair ?";
						};
					};
				};
				false;
			};
		};
	};
	case "undeploy":
	{
		// systemChat "Undeployed";
		playSound3D [QPATHTOEF(vehicles,data\audio\Undeploy.wss), _obj, false, getposASL _obj, 1];
		_obj setVariable [QGVAR(DeployModule),false,true];
	};
};
