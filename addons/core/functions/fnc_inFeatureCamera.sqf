#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if the player is a feature camera.
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

!(call CBA_fnc_getActiveFeatureCamera isEqualTo "");