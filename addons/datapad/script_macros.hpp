// var1 class name, var2 display name
#define DP_DISPLAY(var1,var2) class CLASS(var1): JRY_mapCtrl_Mortar \
{ \
	class controls \
	{ \
		class Background: RscText \
		{ \
			onLoad = "(_this # 0) ctrlEnable false;"; \
			idc = 1000; \
			x = 0; \
			y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "5.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			colorBackground[] = {0,0,0,0.7}; \
		}; \
		class Title: RscText \
		{ \
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"}; \
			idc = 1001; \
			text = QUOTE(var2); \
			x = 0; \
			y = 0; \
			w = "11 * 	 		(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class ShotsTxt: RscStructuredText \
		{ \
			colorBackground[] = {0,0,0,0.7}; \
			text = "Shots "; \
			x = 0.01; \
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class Shots: RscXListBox \
		{ \
			idc = 4654321; \
			sizeEx = "3 * (1 / (getResolution select 3)) * pixelGrid * 0.5"; \
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class SpreadTxt: ShotsTxt \
		{ \
			text = "Spread "; \
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class Spread: RscToolbox \
		{ \
			onCheckBoxesSelChanged = "_ctrl = (_this # 0); _ctrlVal = (_this # 1); uiNamespace setVariable ['BNA_KC_CtrlSpread',_ctrlVal];"; \
			idc = 1231321; \
			columns = 2; \
			strings[] = {"Enable","Disable"}; \
			values[] = {0,1}; \
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class ButtonMenuOK: RscButtonMenuOK \
		{ \
			idc = 9946432; \
			x = 0; \
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "4.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
		class ButtonMenuCancel: RscButtonMenuCancel \
		{ \
			onButtonClick = "_display = ctrlParent (_this # 0); if ('BNA_KC_Marker_Datapad' in allMapMarkers) then {deleteMarker 'BNA_KC_Marker_Datapad';}; ctrlDelete (_display displayCtrl 1112350); "; \
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)"; \
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"; \
		}; \
	}; \
};

#define DP_CTRLCREATEJRY(var1) _display ctrlCreate [configFile >> QUOTE(var1),1112350];
#define DP_CTRLCREATE(var1) _display ctrlCreate [configFile >> QCLASS(var1),1112350];



// ammo selection, would require massive display macro

// #define DP_SELAMMO_6_JRY(var1,def,one,two,three,four,five) 		_selAmmo = if (_ctrlGroupClass == QUOTE(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             case 2: {three}; \
//             case 3: {four}; \
//             case 4: {five}; \
//             default {def}; \
//         }; \
//     }; \
// }

// #define DP_SELAMMO_2(var1,def,one) 		_selAmmo = if (_ctrlGroupClass == QCLASS(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             default {def}; \
//         }; \
//     }; \
// }

// #define DP_SELAMMO_3(var1,def,one,two) 		_selAmmo = if (_ctrlGroupClass == QCLASS(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             default {def}; \
//         }; \
//     }; \
// }

// #define DP_SELAMMO_4(var1,def,one,two,three) 		_selAmmo = if (_ctrlGroupClass == QCLASS(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             case 2: {three}; \
//             default {def}; \
//         }; \
//     }; \
// }

// #define DP_SELAMMO_5(var1,def,one,two,three,four) 		_selAmmo = if (_ctrlGroupClass == QCLASS(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             case 2: {three}; \
//             case 3: {four}; \
//             default {def}; \
//         }; \
//     }; \
// }

// #define DP_SELAMMO_6(var1,def,one,two,three,four,five) 		_selAmmo = if (_ctrlGroupClass == QCLASS(var1)) then \
// { \
//     if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
//     { \
//         _curSel = lbCurSel _comboColor; \
//         switch _curSel do \
//         { \
//             case 0: {one} \
//             case 1: {two}; \
//             case 2: {three}; \
//             case 3: {four}; \
//             case 4: {five}; \
//             default {def}; \
//         }; \
//     }; \
// }

#define DATAPAD_CRATES  QCLASS(Resupply_SquadAmmo), \
QCLASS(Resupply_PlatoonAmmo), \
QCLASS(Resupply_SquadAmmo_Heavy), \
QCLASS(Resupply_PlatoonAmmo_Heavy), \
QCLASS(Resupply_SquadMedical), \
QCLASS(Resupply_PlatoonMedical), \
QCLASS(Resupply_DisposableLaunchers), \
QCLASS(Resupply_PlatoonAmmo_Commando), \
QCLASS(Resupply_Rockets), \
QCLASS(Resupply_Raptor_PlatoonAmmo), \
QCLASS(Resupply_Raptor_Drone), \
QCLASS(Resupply_Misc), \
QCLASS(Resupply_Sapper), \
QCLASS(Resupply_Spartan), \
QCLASS(Mortar_Crate)

#define DATAPAD_CRATES_NAMES 'Ammo (Squad)','Ammo (Platoon)','Ammo Heavy (Squad)','Ammo Heavy (Platoon)','Medical (Squad)','Medical (Platoon)','Disposable AT','RC Ammo (Platoon)','Rockets','Raptor Ammo (Platoon)','Raptor Drone','Misc','Sapper','Spartan','Mortar'
