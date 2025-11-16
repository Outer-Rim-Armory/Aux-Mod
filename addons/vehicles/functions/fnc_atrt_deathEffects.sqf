#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates particle effects to visually show that an AT-RT is destroyed.
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * All death effects belonging to the AT-RT <ARRAY>
 *
 * Examples:
 * _atrt call BNA_KC_vehicles_fnc_atrt_deathEffects;
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]]
];
private ["_memPoint", "_effects", "_smoke", "_sparks"];
TRACE_1("fnc_atrt_deathEffects",_atrt);

if (isNull _atrt) exitWith {};

_memPoint = selectRandom [
    "aiming_axis",
    "head_axis",
    "lelbow",
    "relbow"
];

_smoke = "#particlesource" createVehicle [0, 0, 0];
_smoke setParticleClass QCLASS(Cloudlet_ATRT_Smoke);
_smoke attachTo [_atrt, [0, 0, 0], _memPoint];

_sparks = "#particlesource" createVehicle [0, 0, 0];
_sparks setParticleClass "3AS_ImpactSparksPlasma1";
_sparks setDropInterval 0.05;
_sparks attachTo [_atrt, [0, 0, 0], _memPoint];

_effects = _atrt getVariable ["TAS_ATRT_effects", []];
_effects append [_smoke, _sparks];

_atrt setVariable ["TAS_ATRT_effects", _effects, true];
_effects;
