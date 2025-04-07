


params 
[
	["_obj", objNull, [objNull]]
];

if (isGamePaused) then {continue};

private _vD = vectorDir _obj;
private _vU = vectorUp _obj;
private _hold = "3AS_ShieldTank_Shield" createVehicle position _obj;
_hold setDir (getDir _obj);
_hold setVectorDirAndUp [_vD,_vU];
_obj attachTo [_hold]; 

[_obj,_hold] spawn
{
	params ["_obj", "_hold"];

	private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelCitadelConsumption";
	private _fuel = fuel _obj;
	
	waitUntil 
	{
		if (_obj getVariable "BNA_KC_vehicles_DeployCitadelShield" == false || isNull _obj || fuel _obj == 0) exitWith
		{
			_obj setVariable ["BNA_KC_vehicles_DeployCitadelShield",false,true];
			detach _obj;
			deleteVehicle _hold;
			true;
		};
		
		_fuel = _fuel - _fuelDeduction;
		_obj setFuel _fuel;
		sleep 1;
		false;
	};	
};
