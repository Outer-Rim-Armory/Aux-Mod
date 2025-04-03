


params 
[
	["_obj", objNull, [objNull]]
];

if (isGamePaused) then {continue};

_obj spawn
{
	params ["_obj"];
	
	
	private _radius = missionNamespace getVariable "BNA_KC_vehicles_areaHealRadius_E";
	private _repairRate = missionNamespace getVariable "BNA_KC_vehicles_areaHealRate_E";
	private _repair = missionNamespace getVariable "BNA_KC_vehicles_healAmount_E";
	private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelShieldConsumption_E";
	private _aceVehLoaded = isClass (configFile >> "CfgPatches" >> "ace_vehicles");
	private _fuel = fuel _obj;
	
	waitUntil 
	{
		if (_obj getVariable "BNA_KC_vehicles_DeployModule" == false || isNull _obj || fuel _obj == 0) exitWith
		{
			_obj setVariable ["BNA_KC_vehicles_DeployModule",false,true];
			true;
		};
		
		private _isFriend = _obj call BIS_fnc_friendlySides;
		// private _landVeh = nearestObjects [_obj, ["LandVehicle"], _radius] select {side _x in _isFriend};
		private _landVeh = [_obj,vehicles,_radius,{side _x in _isFriend && {alive _x}}] call CBA_fnc_getNearest;
		_fuel = _fuel - _fuelDeduction;
		_obj setFuel _fuel;
		uiSleep _repairRate;

		for "_i" from 0 to count _landVeh -1 do 
		{
			_veh = _landVeh select _i;
			if (!alive _veh) exitWith {};
			_dmgVeh = damage _veh;
			
			if (_dmgVeh > 0) then
			{
			    if (_aceVehLoaded) then
				{
					[_veh, (_dmgVeh - _repair)] call ace_repair_fnc_setDamage;
				}
				else
				{
					(getAllHitPointsDamage _veh) params [["_allHitPoints", []], ["_allHitPointsSelections", []], ["_allHitPointDamages", []]];

					_veh setDamage (_dmgVeh - _repair);
					{
				    	_veh setHitIndex [_forEachIndex, _x];
					} forEach _allHitPointDamages;
				};
			};
		};
		false;
	};
		
};
