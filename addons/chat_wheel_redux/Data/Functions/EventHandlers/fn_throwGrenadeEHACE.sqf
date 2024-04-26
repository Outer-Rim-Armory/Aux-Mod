"ace_common found. Starting ACE Event Handler" call CWR_fnc_devLog;

["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    [_unit, _magazine] call CWR_fnc_throwGrenadeMain;
}] call CBA_fnc_addEventHandler;