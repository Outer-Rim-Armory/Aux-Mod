#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Is Bacta condition.
 *
 * Arguments:
 * 0: Not used
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * True to show the stat, otherwise false <BOOL>
 *
 * Public: No
 */

params ["", "_config"];
private ["_ammo"];
TRACE_1("fnc_statCondition_isBacta",_config);

_ammo = getText (_config >> "ammo");
getNumber (configFile >> "CfgAmmo" >> _ammo >> QGVAR(ammoType)) isEqualTo AMMO_TYPE_BACTA;
