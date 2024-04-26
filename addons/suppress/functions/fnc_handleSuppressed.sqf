#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Handles suppressed EH
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Suppressed
 *
 * Return Value:
 * None
 *
 * Examples:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Suppressed
 *
 * Public: No
 */

params ["_unit", "_distance", "_shooter", "", "_projectile"];
private ["_newSuppress", "_display", "_overlayCtrl", "_curSuppress", "_suppress"];
TRACE_4("fnc_handleSuppressed",_unit,_distance,_shooter,_projectile);

if (
    // Exit if EH is triggered for remote unit - should not happen
    !(local _unit) ||
    // Exit if unit is dead (can be spectator)
    {!(alive _unit)} ||
    // Exit if some display is interrpting (arsenal, spectator, curator, etc.)
    {GVAR(displayInterrupt)} ||
    // Exit if unit in vehicle
    {!(isNull (objectParent _unit))} ||
    // Exit if unit is unconscious
    {_unit getVariable ["ACE_isUnconscious", false]} ||
    // Exit if shooter is closer than min distance
    {!(isNull _shooter) && {((_unit distance _shooter) < GVAR(shooterMinDistance))}}
) exitWith {};

_newSuppress = linearConversion [GVAR(projectileMaxDistance), 1, _distance, 0, 1, true];

// Exit if shot has no effect
if (_newSuppress isEqualTo 0) exitWith {};

// Check line of sight
if (GVAR(checkLOS) && {
    (lineIntersectsSurfaces [eyePos _unit, getPosASL _projectile, _unit, _projectile, true, 1]) isNotEqualTo []
}) exitWith {};

_display = uiNamespace getVariable [QGVAR(overlay), displayNull];
// Exit if no display - should not happen
if (isNull _display) exitWith {};

_overlayCtrl = _display displayCtrl IDC_OVERLAY;
_curSuppress = 1 - (ctrlFade _overlayCtrl);

_suppress = (_newSuppress + _curSuppress) min 1;

_overlayCtrl ctrlSetFade (1 - _suppress);
_overlayCtrl ctrlCommit 0.07;
[{
    _this ctrlSetFade 1;
    _this ctrlCommit GVAR(overlayFadeoutTime);
}, _overlayCtrl, 0.07] call CBA_fnc_waitAndExecute;

nil;