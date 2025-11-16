#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deletes a Droideka's shield. Works for 3AS and 501st droidekas.
 *
 * Arguments:
 * 0: The droideka <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * _droideka call BNA_KC_droids_fnc_deleteDekaShield
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("fnc_deleteDekaShield",_unit);

switch (true) do {
    case (_vehicle isKindOf "3AS_Deka_Static_Base"): {
        _vehicle setHitPointDamage ["HitShield", 1];
        _vehicle animateSource ["ShieldLayer_BaseFront", 1, true]; // Shield won't update until hit or animated
    };
    case (_vehicle isKindOf "RD501_droideka_mk2_base"): {
        deleteVehicle (_vehicle getVariable ["rd501_dekashield_attached", objNull]);
    };
    default {};
};
