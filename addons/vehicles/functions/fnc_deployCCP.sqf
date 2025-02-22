#include "..\script_component.hpp"
/*
 * Authors: Junrey, Rewritten by DartRuffian
 * Deploys a vehicle's CCP.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_vehicle, player] call BNA_KC_vehicles_fnc_deployCCP
 *
 * Public: No
 */

params ["_vehicle", "_player"];
TRACE_2("fnc_deployCCP",_vehicle,_player);

_vehicle setVariable [QGVAR(deployedCCP), true, true];
[_vehicle, "blockEngine", QGVAR(deployedCCP), true] call ace_common_fnc_statusEffect_set;
[QEGVAR(core,forceSay3D), [_vehicle, QCLASS(Deploy), 100]] call CBA_fnc_globalEvent;

private _handle = [
    _vehicle,
    GVAR(hermitaurAreaHealRadius_M),
    GVAR(hermitaurAreaHealRate_M),
    GVAR(hermitaurHealAmount_M),
    GVAR(hermitaurHealAmount_M)
] call EFUNC(medical,areaSlowHeal);

[{
    // fuel / setFuel are 0..1 percentages
    // 0 = no fuel, 1 = 100% fuel
    params ["", "_vehicle"];
    _vehicle setFuel (fuel _vehicle - GVAR(hermitaurFuelHealConsumption_M));
}, {
    // Run for as long as the ccp is deployed
    params ["", "_vehicle"];
    _vehicle getVariable [QGVAR(deployedCCP), false];
}, {}, 1, [_vehicle]] call EFUNC(core,tempPFH);

// Save the machine that created the PFH, so that it can be later removed
// Needs to be synced since any other machine could remove it
// Handle is only needed locally on the machine that created the PFH
_vehicle setVariable [QGVAR(ccpOwner), clientOwner, true];
_vehicle setVariable [QGVAR(ccpHandle), _handle];