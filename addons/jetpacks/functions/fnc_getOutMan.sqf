#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Teleports a unit exiting an airborne vehicle with a jetpack behind the vehicle.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Unused <ANY>
 * 2: The vehicle <OBJECT>
 *
 * Return Value:
 * True if unit was moved, otherwise false <BOOL>
 *
 * Examples:
 * this addEventHandler ["GetOutMan", BNA_KC_jetpacks_fnc_getOutMan];
 *
 * Public: No
 */

#define GETOUT_SPACING 30

params ["_unit", "", "_vehicle"];
TRACE_2("fnc_getOutMan",_unit,_vehicle);

if !(GVAR(easyEjection)) exitWith { false };

if (_unit != ace_player or {
    !(_unit call FUNC(hasJetpack) or {
        private _backpack = backpack _unit;
        _backpack call JLTS_fnc_jumpIsJumppack;
    })
}) exitWith { false };

private _height = (getPosATL _vehicle) select 2;
if (isTouchingGround _vehicle or {_height < 10}) exitWith { false };

private _direction = getDir _vehicle;
private _positionASL = getPosASL _vehicle vectorAdd [-GETOUT_SPACING * sin _direction, -GETOUT_SPACING * cos _direction, 0];

_unit setPosASL _positionASL;
true;