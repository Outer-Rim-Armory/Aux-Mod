#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * EMP radius statement.
 *
 * Arguments:
 * 0: Not used
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * Stat text <STRING>
 *
 * Public: No
 */

params ["", "_config"];
private ["_text"];
TRACE_1("fnc_statTextStatement_empRadius",_config);

_text = "Droids: %1 | Droidekas: %2 | Vehicles: %3";
format [_text,
    getNumber (_config >> QGVAR(empRadiusDroid)),
    getNumber (_config >> QGVAR(empRadiusDroideka)),
    getNumber (_config >> QGVAR(empRadiusVehicle))
];
