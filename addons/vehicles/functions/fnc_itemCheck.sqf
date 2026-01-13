#include "..\script_component.hpp"



inGameUISetEventHandler
['Action',
	'
		params ["_target", "_caller", "_index", "_engineName", "_text", "_priority", "_showWindow", "_hideOnUse", "_shortcut", "_visibleMenu", "_eventName"];

		call
		{
			if (_text == "Deploy Assault Shield" && _priority > 68) exitWith
			{
				_item = QCLASS(VS_Assault_Item);
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith
				{
					6000 cutText ["You do not have Vehicle Skill: Assault","PLAIN DOWN",0];
					true;
				};
				[_target] call FUNC(deployVehShield);
				false;
			};
			if (_text == "Deploy Squad Shield" && _priority > 68) exitWith
			{
				_item = QCLASS(VS_Shield_Item);
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith
				{
					6000 cutText ["You do not have Vehicle Skill: Shield","PLAIN DOWN",0];
					true;
				};
				[_target] call FUNC(deploySquadShield);
				false;
			};
			if (_text == "Deploy CCP" && _priority > 68) exitWith
			{
				_item = QCLASS(VS_Medical_item);
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith
				{
					6000 cutText ["You do not have Vehicle Skill: Medical","PLAIN DOWN",0];
					true;
				};
				[_target] call FUNC(deployCCP);
				false;
			};
			if (_text == "Deploy Repair Module" && _priority > 68) exitWith
			{
				_item = QCLASS(VS_Repair_Item);
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith
				{
					6000 cutText ["You do not have Vehicle Skill: Repair","PLAIN DOWN",0];
					true;
				};
				[_target] call FUNC(deployModuleRepair);
				false;
			};
			if (_text == "Deploy Citadel Shield" && _priority > 68) exitWith
			{
				_item = QCLASS(VS_Citadel_item);
				_hasItem = [_caller, _item] call BIS_fnc_hasItem;
				if !(_hasItem) exitWith
				{
					6000 cutText ["You do not have Vehicle Skill: Citadel","PLAIN DOWN",0];
					true;
				};
				[_target] call FUNC(deployCitadelShield);
				false;
			};
		};

    '
];
