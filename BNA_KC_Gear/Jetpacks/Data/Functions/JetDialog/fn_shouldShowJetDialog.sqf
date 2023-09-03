/*
 * Author: DartRuffian
 * Returns whether the jetpack fuel display should be shown.
 *
 * Arguments:
 * unit: Object - The unit to check
 *
 * Return Value:
 * Boolean - True if the display should be shown
 *
 * Example:
 * ace_player call BNAKC_Jetpacks_fnc_shouldShowJetDialog; // Returns true if the display should be shown
 */


params ["_unit"];

private _isNotVehicleCrew =
{
    params ["_unit"];
    if (isNull objectParent _unit) exitWith { true };   // objectParent is null if not in vehicle

    private _vehicle = objectParent _unit;
    private _passengers = fullCrew [_vehicle, "cargo"]; // Gets all passenger seats
    _passengers = _passengers apply { _x select 0 };    // Gets the actual units

    _unit in _passengers;
};

private _showDialog =
(
    _unit call BNAKC_Jetpacks_fnc_hasJetpack and // True if unit is wearing a KC jetpack
    alive _unit and                              // True if unit is alive
    _unit call _isNotVehicleCrew and             // True if unit is either not in a vehicle, or is specifically a passenger
    !(_unit call BNAKC_fnc_inCustomCamera) and   // True if unit is local player and is not in zeus, arsenal, etc.
    !(_unit call ace_common_fnc_isswimming)      // True if unit is not swimming
);
_showDialog;