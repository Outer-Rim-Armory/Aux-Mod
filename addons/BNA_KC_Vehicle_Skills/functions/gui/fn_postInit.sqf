waitUntil { not isNull player };

private _JRY_useraction1 = player addEventHandler 
["Reloaded", 
{
	params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

	private _display = uiNamespace getVariable "BNA_KC_Display_Datapad";

	private _uiAction = _unit getVariable "BNA_KC_Datapad_Action";
	if (!isNull _display || {_uiAction == true}) exitWith {};
	
	if (_weapon isEqualTo "BNA_KC_Launcher_Datapad" && {(_unit ammo _weapon) > 0 && {_uiAction == false  }}) then
	{
		private _accessDatapad = _unit addAction 
		["Access Data Pad",
			{
				params ["_target", "_caller", "_actionId", "_arguments"];
				[_target,_caller,_actionId] call BNA_KC_VEHICLES_fnc_accessDatapad;
			},nil,1.5,false,true,"","true"
		];
		_unit setVariable ["BNA_KC_Datapad_ActionID",_accessDatapad];
		_unit setVariable ["BNA_KC_Datapad_Action",true];
	};
}];

private _JRY_useraction2 = player addEventHandler 
["WeaponChanged", 
{
	params ["_object", "_oldWeapon", "_newWeapon", "_oldMode", "_newMode", "_oldMuzzle", "_newMuzzle", "_turretIndex"];

	missionNamespace setvariable ["BNA_KC_Player",_object];
	private _uiAction = _object getVariable ["BNA_KC_Datapad_Action",false];

	if (_oldWeapon isEqualTo "BNA_KC_Launcher_Datapad" && {_uiAction == true }) then
	{
		_actionId = _object getVariable "BNA_KC_Datapad_ActionID";
		_object removeAction _actionId;
		_object setVariable ["BNA_KC_Datapad_Action",false];
	};

	if (!isNull (uiNamespace getVariable "BNA_KC_Display_Datapad") || {_uiAction == true  }) exitWith {};
	
	if (_newWeapon isEqualTo "BNA_KC_Launcher_Datapad" && {(_object ammo _newWeapon) > 0}) then
	{
		private _accessDatapad = _object addAction 
		["Access Data Pad",
			{
				params ["_target", "_caller", "_actionId", "_arguments"];
				[_target,_caller,_actionId] call BNA_KC_VEHICLES_fnc_accessDatapad;
			},nil,1.5,false,true,"","true"
		];
		_object setVariable ["BNA_KC_Datapad_ActionID",_accessDatapad];
		_object setVariable ["BNA_KC_Datapad_Action",true];
	};
}];