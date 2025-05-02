
inGameUISetEventHandler 
['Action',
	'
		params ["_target", "_caller", "_index", "_engineName", "_text", "_priority", "_showWindow", "_hideOnUse", "_shortcut", "_visibleMenu", "_eventName"];

		call
		{
			if (_text == "Deploy Assault Shield" && _priority > 68) exitWith
			{
				_item = "BNA_Assault_Module";
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith 
				{
					6000 cutText ["You do not have Vehicle Skill: Assault","PLAIN DOWN",0];
					true;
				};
				[_target] call BNA_KC_vehicles_fnc_deployVehShield;
				false;
			};
			if (_text == "Deploy Squad Shield" && _priority > 68) exitWith
			{
				_item = "BNA_Shield_Module";
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith 
				{
					6000 cutText ["You do not have Vehicle Skill: Shield","PLAIN DOWN",0];
					true;
				};
				[_target] call BNA_KC_vehicles_fnc_deploySquadShield;
				false;
			};
			if (_text == "Deploy CCP Option" && _priority > 68) exitWith
			{
				_item = "BNA_Medical_Module";
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith 
				{
					6000 cutText ["You do not have Vehicle Skill: Medical","PLAIN DOWN",0];
					true;
				};
				[_target] call BNA_KC_vehicles_fnc_deployCCP;
				false;
			};
			if (_text == "Deploy Repair Module" && _priority > 68) exitWith
			{
				_item = "BNA_Repair_Module";
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith 
				{
					6000 cutText ["You do not have Vehicle Skill: Repair","PLAIN DOWN",0];
					true;
				};
				[_target] call BNA_KC_vehicles_fnc_deployModuleRepair;
				false;
			};
			if (_text == "Deploy Citadel Shield" && _priority > 68) exitWith
			{
				_item = "BNA_Citadel_Module";
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith 
				{
					6000 cutText ["You do not have Vehicle Skill: Citadel","PLAIN DOWN",0];
					true;
				};
				[_target] call BNA_KC_VEHICLES_fnc_deployCitadelShield;
				false;
			};
		};

	'
];
