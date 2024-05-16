#include "..\script_component.hpp"
/*
 * Author: Clock
 * Modified by DartRuffian
 * Creates jetpack effects for a given unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Jetpack <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_jetpacks_jetpackFired", BNA_KC_jetpacks_fnc_createEffects] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

#define POS_SPINE3 [-0.009, -0.008, 0.356]
#define WEAPON_OFFSET [-0.12, 0, 0.1]

params ["_unit", "_jetpack"];
private ["_effectPoints", "_effectTypes", "_totalNewEffects"];
TRACE_1("fnc_createEffects",_unit);

GVAR(totalParticles) = missionNamespace getVariable [QGVAR(totalParticles), 0];
if (!hasInterface or
    {!alive _unit} or
    {GVAR(totalParticles) >= GVAR(particleLimit)} or
    {_unit getVariable [QGVAR(effects), []] isNotEqualTo []}
) exitWith {[]};

_effectPoints = getArray (configOf _jetpack >> QGVAR(effectPoints));
_effectTypes = getArray (configOf _jetpack >> QGVAR(effects));

// One of each effect type is created for each effect point, plus one for light effect
_totalNewEffects = (count _effectTypes) * (count _effectPoints) + 1;

if (GVAR(totalParticles) + _totalNewEffects > GVAR(particleLimit)) exitWith {
    TRACE_3("Too many particles to spawn effects.",GVAR(totalParticles),_totalNewEffects,GVAR(particleLimit));
    [];
};
GVAR(totalParticles) = GVAR(totalParticles) + _totalNewEffects;

[{
    params ["_unit", "_jetpack", "_effectPoints", "_effectTypes"];
    private ["_effectSources"];

    // Ideally not needed, but better to make sure no effects get "lost"
    _effectSources = [];

    {
        private ["_position", "_effectClasses", "_lightColor", "_lightSource"];
        _position = _jetpack selectionPosition [_x, "Memory"];
        _position = _position vectorDiff POS_SPINE3;

        // Try to account for weapon animation, not perfect especially if weapon is put away
        if (currentWeapon _unit != "") then {
            _position = _position vectorAdd WEAPON_OFFSET;
        };

        {
            private _effect = "#particleSource" createVehicleLocal [0, 0, 0];
            _effect setParticleClass _x;
            _effect attachTo [_unit, _position, "aimPoint"];
            _effectSources pushBack _effect;
        } forEach _effectTypes;

        _lightColor = getArray (configOf _jetpack >> QGVAR(lightColor));
        if (_lightColor isEqualTo []) then {
            _lightColor = [0, 0, 0];
        };

        _lightSource = "#lightPoint" createVehicleLocal [0, 0, 0];
        _lightSource setLightColor _lightColor;
        _lightSource setLightBrightness 0.5;
        _lightSource attachTo [_unit, [0, -0.4, 0], "aimPoint"];
        _effectSources pushBack _lightSource;
    } forEach _effectPoints;

    _unit setVariable [QGVAR(effects), _effectSources];
}, [_unit, _jetpack, _effectPoints, _effectTypes]] call CBA_fnc_waitAndExecute;

nil;