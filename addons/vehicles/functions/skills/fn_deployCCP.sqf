

params 
[
    ["_obj", objNull, [objNull]]
];

if (isGamePaused) then {continue};

private _vD = vectorDir _obj;
private _vU = vectorUp _obj;
private _hold = "Land_HelipadEmpty_F" createVehicle position _obj;
_hold setDir (getDir _obj);
_hold setVectorDirAndUp [_vD,_vU];
_obj attachTo [_hold];

[_obj,_hold] spawn
{

	params ["_obj", "_hold"];

	private _radius = missionNamespace getVariable "BNA_KC_vehicles_areaHealRadius_M";
	private _rate = missionNamespace getVariable "BNA_KC_vehicles_areaHealRate_M";
	private _healAmount = missionNamespace getVariable "BNA_KC_vehicles_healAmount_M";
	private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelHealConsumption_M";
	private _aceMedLoaded = isClass (configFile >> "CfgPatches" >> "ace_medical_treatment");
	private _fuel = fuel _obj;

	waitUntil
	{
		if (_obj getVariable "BNA_KC_vehicles_DeployCCP" == false || isNull _obj || fuel _obj == 0) exitWith 
		{
			_obj setVariable ["BNA_KC_vehicles_DeployCCP",false,true];
			detach _obj;
			deleteVehicle _hold;
			true;
		};
		
		private _isFriend = _obj call BIS_fnc_friendlySides;
		private _near = [_obj,allUnits,_radius,{side _x in _isFriend && {alive _x}}] call CBA_fnc_getNearest;
		_fuel = _fuel - _fuelDeduction;
		_obj setFuel _fuel;
		sleep _rate;
	
		for "_i" from 0 to count _near -1 do 
		{
			_unit = _near select _i;
			if (!alive _unit) exitWith {};
			_dmg = damage _unit;
			
			if (_aceMedLoaded) then
			{
				[_unit] call ace_medical_treatment_fnc_fullheallocal;
				if (_dmg > 0) then 
				{
					if (isNull objectParent _unit) then
					{
						_unit setDamage (_dmg - _healAmount);
					}
					else
					{
					 	_unit setDamage (_dmg - (_healAmount / 2));
					};
				};
			}
			else
			{
				if (_dmg > 0) then 
				{
					if (isNull objectParent _unit) then
					{
						_unit setDamage (_dmg - _healAmount);
					}
					else
					{
					 	_unit setDamage (_dmg - (_healAmount / 2));
					};
				};
			};
		};
		false;
	};
};