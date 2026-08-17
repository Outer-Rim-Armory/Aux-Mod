/*
    KC_fnc_mainMenuVisuals — DEBUG VERSION
*/

playMusic "KC_MainTheme";
systemChat "KC: onLoad fired, music started";

private _display = findDisplay 49;
if (isNull _display) exitWith {
    systemChat "KC: ERROR - display 49 not found";
};

private _pic = _display displayCtrl 8000;
if (isNull _pic) exitWith {
    systemChat "KC: ERROR - control 8000 not found";
};

systemChat "KC: control 8000 found, starting loop";

private _i = 1;

while {!isNull (findDisplay 49)} do {
    systemChat format ["KC: setting image %1", _i];
    _pic ctrlSetText format ["\ORA\BNA_KC\addons\brandings\images\Loading_Image_%1.paa", _i];
    _i = (_i % 4) + 1;
    sleep 6;
};

systemChat "KC: loop exited (display 49 closed)";
