/*
 * Author: DartRuffian
 * Spawns smoke/spark particles on an AT-RT unit, used to visually tell if a unit is dead.
 *
 * Arguments:
 * atrt: Object - The unit to spawn particles on
 *
 * Return Value:
 * None
 *
 * Example:
 * atrt call BNAKC_fnc_spawnATRTSmoke;
 */


params ["_atrt"];

// Possible points to spawn effects, others are either similar / spawn above the unit
private _allPoints =
[
    "aiming_axis",
    "head_axis",
    "lelbow",
    "relbow"
];

for "_i" from 0 to 1 do
{
    private _randomPoint = selectRandom _allPoints;
    _allPoints deleteAt (_allPoints find _randomPoint);

    private _smoke = "#particlesource" createVehicle [0, 0, 0];
    _smoke setParticleClass "BNA_KC_Effects_ATRT_Smoke";
    _smoke attachTo [_atrt, [0, 0, 0], _randomPoint];

    private _sparks = "#particlesource" createVehicle [0, 0, 0];
    _sparks setParticleClass "3AS_ImpactSparksPlasma1";
    _sparks setDropInterval 0.05;
    _sparks attachTo [_atrt, [0, 0, 0], _randomPoint];
    
    private _allEffects = _atrt getVariable ["BNA_KC_ATRT_effects", []];
    _allEffects pushBack _effect;
    _atrt setVariable ["BNA_KC_ATRT_effects", _allEffects];
};