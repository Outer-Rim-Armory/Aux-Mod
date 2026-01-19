#define DP_MORTAR_RSCCOMBO_ADD \
    { \
	  _comboAmmo lbAdd _x; \
	} forEach ["Mortar Strike","Smoke Strike"]; \
	_comboAmmo lbSetCurSel 0;


 #define DP_CRATES_RSCCOMBO_ADD \
    { \
	  _comboCrate lbAdd _x; \
	} forEach [DATAPAD_CRATES_NAMES]; \
	_comboCrate lbSetCurSel 0;

#define DP_JRY_SEL_MORTAR _selAmmo =  if (_ctrlGroupClass == "JRY_mapCtrl_Mortar") then { \
    if ((lbCurSel _comboAmmo) == 0) then {_getAmmo} else \
    { \
        _curSel = lbCurSel _comboColor; \
        switch _curSel do \
        { \
            case 0: {"BNA_KC_Shell_Mortar_SmokeBlue"}; \
            case 1: {"SmokeShellGreen"}; \
            case 2: {"BNA_KC_Shell_Mortar_SmokeRed"}; \
            case 3: {"SmokeShellPurple"}; \
            case 4: {"SmokeShellYellow"}; \
            default {"BNA_KC_Shell_Mortar_SmokeWhite"}; \
        }; \
    }; \
}; \
_selAmmo = if (_ctrlGroupClass == "JRY_mapCtrl_AVArtillery") then {_getAmmo};

#define DP_JRY_MORTAR_FIRE [_markPos, _selAmmo,50,_selShots, [5,10],{false},_selSpread,1000,100] spawn BIS_fnc_fireSupportVirtual;

#define DP_SEL_RESUPPLY  \
    _curSel = lbCurSel _comboCrate; \
    _selCrate = switch _curSel do \
    { \
        case 0 : {QCLASS(Resupply_SquadAmmo)}; \
        case 1 : {QCLASS(Resupply_PlatoonAmmo)}; \
        case 2 : {QCLASS(Resupply_SquadAmmo_Heavy)}; \
        case 3 : {QCLASS(Resupply_PlatoonAmmo_Heavy)}; \
        case 4: {QCLASS(Resupply_SquadMedical)}; \
        case 5: {QCLASS(Resupply_PlatoonMedical)}; \
        case 6: {QCLASS(Resupply_DisposableLaunchers)}; \
        case 7: {QCLASS(Resupply_PlatoonAmmo_Commando)}; \
        case 8: {QCLASS(Resupply_Rockets)}; \
        case 9: {QCLASS(Resupply_Raptor_PlatoonAmmo)}; \
        case 10: {QCLASS(Resupply_Raptor_Drone)}; \
        case 11: {QCLASS(Resupply_Misc)}; \
        case 12: {QCLASS(Resupply_Sapper)}; \
        case 13: {QCLASS(Resupply_Spartan)}; \
        case 14: {QCLASS(Mortar_Crate)}; \
    }; \


#define DP_RESUPPLY_FIRE [_markpos,_selCrate] spawn FUNC(datadrop); \
    _selShots = 1;
