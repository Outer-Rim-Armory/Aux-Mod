/*
 * Author: DartRuffian
 * Makes a given object a BIS Arsenal and an ACE Arsenal.
 * This function does have a hard coded turret path, so it is not compatibile with every vehicle, it was designed for AATs.
 *
 * Arguments:
 * 0: Array of vehicles to disable <ARRAY>
 * 1: Amount of time in seconds to disable the vehicle for <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[vic1, vic2], 5] call BNAKC_fnc_tempDisableVehicles;
 */

params ["_vehicles", "_time"];

{
    format ["Disabling %1", _x] call BNAKC_fnc_devLog;

    _vehicle = _x; // Clears up some possible confusion in loops
    // Save the current amount of fuel and ammo
    _savedFuel = fuel _vehicle;
    _savedMags = magazines _vehicle;
    _savedTurretMags = _vehicle magazinesTurret [0, 0];

    // Remove fuel and ammo from the vehicle and its turret
    _vehicle setFuel 0;
    { _vehicle removeMagazines _x; } forEach _savedMags;
    { _vehicle removeMagazinesTurret [_x, [0, 0]]; } forEach _savedTurretMags;
    format ["Removed mags and fuel from %1", _x] call BNAKC_fnc_devLog;

    sleep _time;

    // Restore the fuel and ammo
    _vehicle setFuel _savedFuel;
    { _vehicle addMagazine _x; } forEach _savedMags;
    { _vehicle addMagazineTurret [_x, [0, 0]]; } forEach _savedTurretMags;
    format ["Restored mags and fuel from %1", _x] call BNAKC_fnc_devLog;
} forEach _vehicles;