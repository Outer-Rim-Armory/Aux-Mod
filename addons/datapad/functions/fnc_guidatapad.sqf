#include "..\script_component.hpp"

params	["_ctrl"];


private _display = ctrlParent _ctrl;
private _ctrlDatapad = _display displayCtrl 1112350;
private _unit = missionNamespace getVariable "BNA_KC_player";

if !(ctrlShown _ctrlDatapad) then
{
	_mPos = getMousePosition;
	_worldPos = _ctrl posScreenToWorld _mPos;
	_allMarker = allMapMarkers;
	if !("BNA_KC_Marker_Datapad" in _allMarker) then
	{
		_marker = createMarker ["BNA_KC_Marker_Datapad",_worldPos];
		_ctrl ctrlAddEventHandler ["Draw",
		{
			(_this select 0) drawIcon
			[
				"\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa",
				[1,0,0,1],
				getMarkerPos "BNA_KC_Marker_Datapad",
				24,24,0,"",2
			];
		}];
	}
	else
	{
		deleteMarker "BNA_KC_Marker_Datapad";
	};

	_ctrlGroupDataPad = switch (currentMagazine _unit) do
	{
		case QCLASS(Datapad_Mag_MortarStrike) : {DP_CTRLCREATEJRY(JRY_mapCtrl_Mortar)};
		case QCLASS(Datapad_Mag_AV7AStrike) : {DP_CTRLCREATEJRY(JRY_mapCtrl_AVArtillery)};
		case QCLASS(Datapad_Mag_TurboLaserV) : {DP_CTRLCREATE(mapCtrl_TurbolaserV)};
		case QCLASS(Datapad_Mag_Resupply) : {DP_CTRLCREATE(mapCtrl_resup)};
	};

	_ctrlGroupDataPad ctrlSetPositionX (_mPos # 0) + 0.02;
	_ctrlGroupDataPad ctrlSetPositionY (_mPos # 1);
	_ctrlGroupDataPad ctrlCommit 0;
	_ctrl ctrlAddEventHandler ["MouseZChanged",
	{
		_display = ctrlParent (_this # 0);
		_ctrlGroupDataPad = _display displayCtrl 1112350;
		_worldPos = getMarkerPos "BNA_KC_Marker_Datapad";
		_screenPos = (_this # 0) ctrlMapWorldToScreen _worldPos;
		_ctrlGroupDataPad ctrlSetPositionX (_screenPos # 0) + 0.02;
		_ctrlGroupDataPad ctrlSetPositionY (_screenPos # 1);
		_ctrlGroupDataPad ctrlCommit 0;
	}];

	_curAmmo = _unit ammo currentWeapon _unit;
	_comboAmmo = _display displayCtrl 103;
	_comboCrate = _display displayCtrl 1036;
	_ctrlShots = _display displayCtrl 4654321;
	_comboColor = _display displayCtrl 104;
	_chckSpread = _display displayCtrl 1231321;
	_btnOK = _display displayCtrl 9946432;

	for "_i" from 1 to _curAmmo do
	{
		_ctrlShots lbAdd str _i;
		_ctrlShots lbSetValue [(_i - 1),_i];
	};
	_ctrlShots lbSetCurSel 0;

	DP_MORTAR_RSCCOMBO_ADD
	DP_CRATES_RSCCOMBO_ADD

	_chckSpread ctrlSetChecked [0,true];


	_btnOK ctrlAddEventHandler ["ButtonClick",
	{
		params ["_ctrl"];

		_display = ctrlParent _ctrl;
		_ctrlGroupParent = ctrlParentControlsGroup _ctrl;
		_ctrlGroupClass = ctrlClassName _ctrlGroupParent;
		_comboAmmo = _display displayCtrl 103;
		_ctrlShots = _display displayCtrl 4654321;
		_comboColor = _display displayCtrl 104;
		_comboCrate = _display displayCtrl 1036;
		_chckSpread = _display displayCtrl 1231321;
		_btnOK = _display displayCtrl 9946432;

		_unit = missionNamespace getVariable "BNA_KC_player";
		_getAmmo = getText (configfile >> "CfgMagazines" >> currentMagazine _unit  >> "ammo");

		_selShots = _ctrlShots lbValue (lbCurSel _ctrlShots);
		_selColor = _comboColor lbText (lbCurSel _comboColor);
		_selCrate = _comboCrate lbText (lbCurSel _comboCrate);
		_selSpread = if (_chckSpread lbValue (lbCurSel _chckSpread) == 0) then {5} else {0};
		_selRad75 = if (_chckSpread lbValue (lbCurSel _chckSpread) == 0) then {75} else {0};
		_markPos = getMarkerPos "BNA_KC_Marker_Datapad";
		_curAmmo = _unit ammo currentWeapon _unit;



		DP_JRY_SEL_MORTAR
		DP_SEL_RESUPPLY

		switch (currentMagazine _unit) do {
			case QCLASS(Datapad_Mag_MortarStrike): {DP_JRY_MORTAR_FIRE};
			case QCLASS(Datapad_Mag_AV7AStrike): {[_markPos, _getAmmo,50,_selShots, [5,10],{false},_selSpread,1000,100] spawn BIS_fnc_fireSupportVirtual;};
			case QCLASS(Datapad_Mag_TurboLaserV): {[_markPos,_selRad75,_selShots] spawn PHAN_ScifiSupportPlus_fnc_SW_TurboLaserVolley;};
			case QCLASS(Datapad_Mag_Resupply):{DP_RESUPPLY_FIRE};
			// [_position, _Ship_direction,_destructionradius,_Killradius,_EndWithJumpOut]
		};

		_unit setAmmo [currentWeapon _unit, _curAmmo - _selShots];
		_display closeDisplay 1;



		// systemChat str format ["AMMO: %1 SHOTS: %2 COLOR: %3 SPREAD: %4",_selAmmo,_selShots,_selColor,_selSpread];
	}];
};
