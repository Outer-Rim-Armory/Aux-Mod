

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
		// private _near = entities [["CAManBase"], [], true, true] select {side _x == side _obj};
		private _near = [_obj,allUnits,_radius,{side _x in _isFriend && {alive _x}}] call CBA_fnc_getNearest;
		_fuel = _fuel - _fuelDeduction;
		_obj setFuel _fuel;
		uiSleep _rate;
	
		for "_i" from 0 to count _near -1 do 
		{
			_unit = _near select _i;
			if (!alive _unit) exitWith {};
			_dmg = damage _unit;
			
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

			if (_aceMedLoaded) then
			{
			    _blood = _unit getVariable "ace_medical_bloodVolume";
				_cardiac = _unit getVariable ["ace_medical_inCardiacArrest", false];
				_pain = _unit getVariable ["ace_medical_pain", 0];
				_conscious = _unit getVariable ["ACE_isUnconscious",false];
				

				if ((["ace_fire"] call ace_common_fnc_isModLoaded) && {[_unit] call ace_fire_fnc_isBurning}) then 
				{
	    			_unit setVariable ["ace_fire_intensity", 0, true];
				};
				if (_cardiac) then 
				{
					_unit setVariable ["ace_medical_inCardiacArrest",false];
				};
				if (_pain > 0) then 
				{
					if (isNull objectParent _unit) then
					{
					  _pain = _pain - _healAmount;
					}
					else
					{
					  _pain = _pain - (_healAmount / 2);
					};
					_unit setVariable ["ace_medical_pain",_pain, true];
				};
				if (_blood < 6) then 
				{
					if (isNull objectParent _unit) then
					{
					  _blood = _blood + _healAmount;
					}
					else
					{
					  _blood = _blood + (_healAmount / 2);
					};
					_unit setVariable ["ace_medical_bloodVolume",_blood, true];
				};
				if (_conscious) then
				{
				    _unit setVariable ["ACE_isUnconscious", false, true];
				};
				{
	    			if (_x != 0) then 
	    			{
	        			[_unit, "ACE_tourniquet"] call ace_common_fnc_addToInventory;
	   				};
				} forEach (_unit getVariable ["ace_medical_tourniquets", [0,0,0,0,0,0]]);
				_unit setVariable ["ace_medical_tourniquets", [0,0,0,0,0,0], true];
				_unit setVariable ["ace_medical_occludedMedications", nil, true];
				_unit setVariable ["ace_medical_openWounds", createHashMap, true];
				_unit setVariable ["ace_medical_bandagedWounds", createHashMap, true];
				_unit setVariable ["ace_medical_stitchedWounds", createHashMap, true];
				_unit setVariable ["ace_medical_isLimping", false, true];
				_unit setVariable ["ace_medical_fractures", [0,0,0,0,0,0], true];
				_unit setVariable ["ace_medical_heartRate", 80, true];
				_unit setVariable ["ace_medical_bloodPressure", [80, 120], true];
				_unit setVariable ["ace_medical_peripheralResistance", 100, true];
				_unit setVariable ["ace_medical_spo2", 97, true];
				_unit setVariable ["ace_medical_oxygenDemand", 0, true];
				_unit setVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0], true];
				_unit setVariable ["ace_medical_hemorrhage", 0, true];
				_unit setVariable ["ace_medical_inPain", false, true];
				_unit setVariable ["ace_medical_painSuppress", 0, true];
			};
		};
		false;
	};
};