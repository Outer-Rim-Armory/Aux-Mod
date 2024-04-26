#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if the player is a feature camera.
 * This should be used for things that affect movement, like Zeus or arsenals.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Whether the local player is in a feature camera <BOOL>
 *
 * Example:
 * call FUNC(inFeatureCamera);
 */

private _camera = call CBA_fnc_getActiveFeatureCamera;

if (_camera == "" or _camera == QCLASS(screenshotMode)) exitWith {false};
true;