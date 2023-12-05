#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_STRING(config,default) (if (isText (config)) then {getText (config)} else {default})

//* This script does NOT work properly for helmets with built in night vision and thermals
//* Arma will always put the player back the the normal vision mode when recieving a new helmet

player addEventHandler ["VisionModeChanged", 
{
	params ["_person", "_visionMode", "_TIindex", "_visionModePrev", "_TIindexPrev", "_vehicle", "_turret"];
	private _helmet = headgear _person;
	
	private _isEnabled = GET_NUMBER(configFile >> "CfgWeapons" >> _helmet >> "BNAKC_Helmet_Toggle",0);
	
	if (_isEnabled > 0) then
	{
		private _helmetOff = GET_STRING(configFile >> "CfgWeapons" >> _helmet >> "BNAKC_Helmet_Off","");
		private _helmetOn = GET_STRING(configFile >> "CfgWeapons" >> _helmet >> "BNAKC_Helmet_On","");
		
		if (!(_helmetOff == "") && !(_helmetOn == "")) then
		{
			//systemChat(format["%1",_visionMode]);
			if (_visionMode == 0) then
			{
				_person addHeadgear _helmetOff;
			}
			else
			{
				_person addHeadgear _helmetOn;
			};
		}
		else
		{
			systemChat("Your helmet is not set up correctly for BNAKC NVG Switch!!");
		};
	};
}];