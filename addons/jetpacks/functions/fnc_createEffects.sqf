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

#define WEAPON_OFFSET [-0.12, 0, 0.1]

params ["_unit", "_jetpack"];
TRACE_1("fnc_createEffects",_unit);

GVAR(totalParticles) = missionNamespace getVariable [QGVAR(totalParticles), 0];
if (!hasInterface or
    {!alive _unit} or
    {GVAR(totalParticles) >= GVAR(particleLimit)} or
    {_unit getVariable [QGVAR(effects), []] isNotEqualTo []}
) exitWith {[]};

private _effectPoints = getArray (configOf _jetpack >> QGVAR(effectPoints));
private _effectTypes = getArray (configOf _jetpack >> QGVAR(effects));

// One of each effect type is created for each effect point, plus one for light effect
private _totalNewEffects = (count _effectTypes) * (count _effectPoints) + 1;

if (GVAR(totalParticles) + _totalNewEffects > GVAR(particleLimit)) exitWith {
    TRACE_3("Too many particles to spawn effects.",GVAR(totalParticles),_totalNewEffects,GVAR(particleLimit));
    [];
};
GVAR(totalParticles) = GVAR(totalParticles) + _totalNewEffects;

private _effectSources = [];

{
    private _position = switch (typeName _x) do {
        case "STRING": {
            _jetpack selectionPosition [_x, "Memory"];
        };
        case "ARRAY": {
            _x;
        };
        default {
            [0, 0, 0];
        };
    };

    // Try to account for weapon animation, not perfect especially if weapon is put away afterwards
    if (currentWeapon _unit != "") then {
        _position = _position vectorAdd WEAPON_OFFSET;
    };

    {
        private _effect = "#particleSource" createVehicleLocal [0, 0, 0];
        _effect setParticleClass _x;
        _effect attachTo [_unit, _position, "spine3"];
        _effectSources pushBack _effect;
    } forEach _effectTypes;

    private _lightColor = getArray (configOf _jetpack >> QGVAR(lightColor));
    if (_lightColor isEqualTo []) then {
        _lightColor = [0, 0, 0];
    };

    private _lightSource = "#lightPoint" createVehicleLocal [0, 0, 0];
    _lightSource setLightColor _lightColor;
    _lightSource setLightBrightness 0.5;
    _lightSource attachTo [_unit, [0, -0.4, 0], "aimPoint"];
    _effectSources pushBack _lightSource;
} forEach _effectPoints;

_unit setVariable [QGVAR(effects), _effectSources];

nil;
