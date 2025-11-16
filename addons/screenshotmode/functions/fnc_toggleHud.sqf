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
 * [] call BNA_KC_screenshotMode_fnc_toggleHud;
 */

INFO("Toggling screenshot mode");
GVAR(active) = !GVAR(active);

if (GVAR(active)) then {
    // Hide hud
    GVAR(vanillaHud) = shownHUD;
    showHUD [false, false, false, false, false, false, false, false];
    showChat false;
    hintSilent "";

    call FUNC(toggleJLTS);
} else {
    // Show hud
    showHUD GVAR(vanillaHud);
    showChat true;
    call FUNC(toggleJLTS);
};
