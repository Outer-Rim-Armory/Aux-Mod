params["_object"];

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
private _loadout = GET_NUMBER(configFile >> "CfgVehicles" >> (typeOf _object) >> "BNA_LoadoutSelection",0);

systemChat(format["Loadout Selection:%1		Object:%2		Object Classname:%3",_loadout,_object,(typeOf _object)]);


if (isNil "_loadout") exitWith{systemChat "Loadout Selection is nil"};


switch (_loadout) do
{
	case 1:{
		_object addAction ["Grab Basic Qual Loadout", {Player setUnitLoadout "BNA_KC_Unit_Trooper2"}];
	};
	default{
		systemChat "Loadout selection out of bounds";
	};
};