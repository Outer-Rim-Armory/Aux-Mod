#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Toggles the jetpack fuel display.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * True if the display was shown, false otherwise <BOOL>
 *
 * Example:
 * call FUNC(toggleFuelDisplay);
 */

private ["_fnc_isNotCrew", "_jetpack", "_fuel"];
TRACE_1("fnc_toggleFuelDisplay",ace_player);

// Returns true when unit is either not in a vehicle,
// or is specifically a passenger in a vehicle
_fnc_isNotCrew = {
    params ["_unit"];
    private ["_passengers"];

    _vehicle = objectParent _unit;
    if (isNull _vehicle) exitWith {true};

    _passengers = (fullCrew [_vehicle, "cargo"]) apply {_x#0};
    _unit in _passengers;
};

if !(alive ace_player and
    {!(ace_player call EFUNC(core,inFeatureCamera))} and
    {ace_player call _fnc_isNotCrew} and
    {ace_player call BNA_KC_Jetpacks_fnc_hasJetpack}
) exitWith {
    (QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutFadeOut 0.5;
    false;
};

(QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutRsc [
    QGVAR(RscFuelDisplay),
    "PLAIN",
    1,
    false
];

_jetpack = backpackContainer ace_player;
_fuel = _jetpack call FUNC(getFuel);
[ace_player, _jetpack, _fuel, _fuel] call FUNC(updateFuelDisplay);

true;