#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can use a jetpack.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * True if unit can use a jetpack, otherwise false <BOOL>
 *
 * Example:
 * ace_player call BNA_KC_jetpacks_fnc_canJetpack;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_canJetpack",_unit);

private _jetpack = backpackContainer _unit;

if (_unit call ace_common_fnc_isAwake and
    {isNull objectParent _unit} and
    {!(_unit getVariable ["TAS_ATRT_isRiding", false])} and
    {!(_unit call EFUNC(core,inFeatureCamera))} and
    {!(surfaceIsWater getPos _unit and {((getPosASLW _unit) select 2) < 0.2})} and
    {_unit call FUNC(hasJetpack)} and
    {_unit call FUNC(getFuel) > 0}
) exitWith {true};

false;