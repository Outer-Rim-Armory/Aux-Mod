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
 * call BNA_KC_jetpacks_fnc_toggleFuelDisplay;
 *
 * Public: No
 */

TRACE_1("fnc_toggleFuelDisplay",ace_player);

// Returns true when unit is either not in a vehicle,
// or is specifically a passenger in a vehicle
private _fnc_isNotCrew = {
    params ["_unit"];

    _vehicle = objectParent _unit;
    if (isNull _vehicle) exitWith {true};

    private _passengers = (fullCrew [_vehicle, "cargo"]) apply {_x#0};
    _unit in _passengers;
};

if !(alive ace_player and
    {call CBA_fnc_getActiveFeatureCamera == ""} and
    {ace_player call _fnc_isNotCrew} and
    {ace_player call FUNC(hasJetpack)}
) exitWith {
    (QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutFadeOut 0.5;
    false;
};

private _display = uiNamespace getVariable [QGVAR(RscFuelDisplay), displayNull];
if (isNull _display) then {
    (QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutRsc [
        QGVAR(RscFuelDisplay),
        "PLAIN",
        1,
        false
    ];
};


ace_player call FUNC(updateFuelDisplay);

true;
