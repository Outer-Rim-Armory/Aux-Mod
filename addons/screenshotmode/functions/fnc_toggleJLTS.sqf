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

_isJetpack = backpack ace_player call JLTS_fnc_jumpIsJumppack;
if !(_isJetpack) exitWith {};

if (GVAR(active)) then {
    [{
        ("JLTS_jumppack_energyDisplayLayer" call BIS_fnc_rscLayer) cutFadeOut 0;
        missionNamespace setVariable ["JLTS_jumppack_var_energyDisplay", [displayNull]];
    }, {GVAR(active)}] call EFUNC(core,tempPFH);
} else {
    ("JLTS_jumppack_energyDisplayLayer" call BIS_fnc_rscLayer) cutRsc ["JLTS_jumppack_energy_dialog", "PLAIN", 1, false];
};

nil;