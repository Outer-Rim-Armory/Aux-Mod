#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Disables shields for 3AS and 501st droidekas. 3AS droidekas are done via a hitpoint while the 501st droidekas have an object created on them.
 * The 3AS droidekas have the hitpoint destroyed while the 501st shield objects (or any object passed to it) are simply deleted.
 *
 * Arguments:
 * 0: 3AS droidekas <ARRAY>
 * 1: Shield objects <ARRAY>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [[_tasDroidekas], [_shieldObjects]] call BNA_KC_weapons_fnc_disableDroidekaShields;
 *
 * Public: Yes
 */

params [
    ["_droidekas", [], [[]]],
    ["_shields", [], [[]]]
];
TRACE_2("fnc_disableDroidekaShields",_droidekas,_shields);

if (!GVAR(empDisableDroidkaShields)) exitWith {};

{
    _x setHitPointDamage ["HitShield", 1];
    _x animateSource ["ShieldLayer_BaseFront", 1, true]; // Shield won't update until hit or animated
} forEach _droidekas;

{deleteVehicle _x;} forEach _shields;
nil;