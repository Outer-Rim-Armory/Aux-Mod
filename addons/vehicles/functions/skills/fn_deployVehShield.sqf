


params 
[
	["_obj", objNull, [objNull]]
];

if (isGamePaused) then {continue};

_obj spawn
{
	params ["_obj"];
	
	
	private _radius = missionNamespace getVariable "BNA_KC_vehicles_areaShieldRadius_E";
	private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelShieldConsumption_E";
	private _aceMedLoaded = isClass (configFile >> "CfgPatches" >> "ace_medical_treatment");
	private _aceDmgDisabledObj = _obj getVariable ["BNA_KC_vehicles_DeployVehShield_DisabledDmgACE", []];
	private _fuel = fuel _obj;
	
	waitUntil 
	{
		if (_obj getVariable "BNA_KC_vehicles_DeployVehShield" == false || isNull _obj || fuel _obj == 0) exitWith
		{
			
			{
				_x setVariable ["ace_medical_allowDamage", true];
			} forEach _aceDmgDisabledObj;
			_obj setVariable ["BNA_KC_vehicles_DeployVehShield_DisabledDmgACE",[],true];
			_obj setVariable ["BNA_KC_vehicles_DeployVehShield",false,true];
			true;
		};
		
		private _isFriend = _obj call BIS_fnc_friendlySides; 
		private _near = [_obj,allUnits,_radius,{side _x in _isFriend && {alive _x}}] call CBA_fnc_getNearest;
		_fuel = _fuel - _fuelDeduction;
		_obj setFuel _fuel;
		uiSleep 1;

		for "_i" from 0 to count _near -1 do 
		{
			_unit = _near select _i;

			if (!alive _unit) exitWith {};

			if (_aceMedLoaded) then
			{
			    
			    if (_unit getVariable ["ace_medical_allowDamage", true]) then
			    {
			        _unit setVariable ["ace_medical_allowDamage", false];
			       
			      	if !(_unit in _aceDmgDisabledObj) then
		        	{
		        		_aceDmgDisabledObj pushBack _unit;
		        	};
			    };
			    _unit setDamage 0;
			    [_unit,_obj,_radius] spawn
		        {
		        	params ["_unit","_obj","_radius"];

		        	sleep 1;
		        	_isNear = [_unit,[_obj],_radius] call CBA_fnc_getNearest;
		        	if (_isNear isEqualTo []) then
		        	{
		        	    _unit setVariable ["ace_medical_allowDamage", true];
		        	};
		        };
			} 
			else 
			{
			    _unit setDamage 0;
			};
		};

		false;
	};	
};
