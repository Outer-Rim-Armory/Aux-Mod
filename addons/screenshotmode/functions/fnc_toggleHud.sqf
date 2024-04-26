#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Toggles most UI elements in-game.
 * Support for mods varies.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_screenshotMode_fnc_toggle;
 */

INFO("Toggling screenshot mode");
GVAR(active) = !GVAR(active);

if (GVAR(active)) then {
    // Hide hud
    GVAR(vanillaHud) = shownHUD;
    showHUD [false, false, false, false, false, false, false, false];
    showChat false;
} else {
    // Show hud
    showHud GVAR(vanillaHud);
    showChat true;
};