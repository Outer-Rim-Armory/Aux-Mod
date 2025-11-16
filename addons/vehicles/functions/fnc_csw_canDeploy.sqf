#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Condition function for deploying weapons using ACE's Crew Served Weapons feature.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * True if weapon can be deployed, otherwise false <BOOL>
 *
 * Examples:
 * ace_player call BNA_KC_vehicles_fnc_csw_canDeploy;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_csw_canDeploy",_unit);

if (!(_unit getVariable [QEGVAR(jetpacks,usingJetpack), false]) and
    {ace_player call ace_csw_fnc_canDeployTripod}
) exitWith {true};

false;
