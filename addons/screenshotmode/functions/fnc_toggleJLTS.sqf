#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Toggles UI elements from Just Like The Simulations - The Great War
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_screenshotMode_fnc_toggleJLTS;
 */

private ["_isJetpack"];

// Will need testing, the UI might just be immediately recreate the hud
_isJetpack = [backpack ace_player, true] call JLTS_fnc_jumpIsJumppack;

if (GVAR(active) and _isJetpack) then {
    ("JLTS_jumppack_energyDisplayLayer" call BIS_fnc_rscLayer) cutFadeOut 1;
    missionNamespace setVariable ["JLTS_jumppack_var_energyDisplay", nil];
} else {
    ("JLTS_jumppack_energyDisplayLayer" call BIS_fnc_rscLayer) cutRsc ["JLTS_jumppack_energy_dialog", "PLAIN", 1, false];
};

nil;