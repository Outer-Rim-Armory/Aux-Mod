"ace_common not loaded. Starting vanilla Event Handler" call CWR_fnc_devLog;

player addEventHandler ["Fired", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
    [_unit, _magazine] call CWR_fnc_throwGrenadeMain;
}];
