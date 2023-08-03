/*
 * Authors: Clock, modified by DartRuffian
 * Handles spawning the visual effects for jetpacks. Effects are deleted when unit can no longer jetpack or touches the ground.
 * Modified from the same system from JLTS's Jumppacks
 *
 * Arguments:
 * 0: Unit to spawn the effects on <Object>
 *
 * Return Value:
 * None
 *
 * Example:
 * ['BNA_KC_Jet_JetpackFired', BNAKC_fnc_JetpackEffectHandler] call CBA_fnc_addEventHandler;
 */


if !(hasInterface) exitwith {}; // Function only contains visual effects, no need to execute on the server
params ["_unit"];

// Contants and macros
#define POS_SPINE3 [-0.009, -0.008, 0.356]
#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})
#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})

// Don't play effects for units on the ground or who can't jetpack
if (!(_unit call BNAKC_fnc_CanUseJetpack) or isTouchingGround _unit) exitWith {};

private _jetpack = backpack _unit;

// Obtain effect point names
private _effectPoints = getArray(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectPoints");
private _effectFire   = GET_STRING(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectFire", "");
private _effectSparks   = GET_STRING(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectSparks", "");
private _effectSmoke  = GET_STRING(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectSmoke", "");
if (_effectPoints isEqualTo []) exitWith {}; // Don't spawn effects if there aren't any effect points

// Reserve variables
private _effectSources = _unit getVariable ["BNA_KC_Jet_effectSources", []];

// Spawn effects for each effect point
{
    // Get the effect's location in the model
    private _positionModelEffectpoint = (backpackContainer _unit) selectionPosition [_x, "Memory"];

    // [0, 0, 0] is the default value if the point does not exist
    if !(_positionModelEffectpoint isEqualTo [0, 0, 0]) then
    {
        // Calculate effect position relative to player model
        private _offsetEffect = (_positionModelEffectpoint vectorDiff POS_SPINE3);

        if (currentWeapon _unit != "") then
        {
            // Extra offset if unit is holding a weapon, animation causes the jetpack to move but not the points
            _offsetEffect = _offsetEffect vectorAdd [-0.12, 0, 0.1];
        };
        
        // Spawn fire, light and smoke effects
        private _effectSourceFire = "#particlesource" createVehicleLocal [0, 0, 0];
        _effectSourceFire setParticleClass _effectFire;

        private _effectSourceSparks = "#particlesource" createVehicleLocal [0, 0, 0];
        _effectSourceSparks setParticleClass _effectSparks;

        private _effectSourceSmoke = "#particlesource" createVehicleLocal [0, 0, 0];
        _effectSourceSmoke setParticleClass _effectSmoke;

        private _lightSource = "#lightpoint" createVehicleLocal [0, 0, 0];
        _lightSource setLightColor [0, 0.1, 0.9];
        _lightSource setLightAmbient [0, 0, 0];
        _lightSource setLightBrightness 0.5;
        
        // Attach to player
        _effectSourceFire attachTo [_unit, _offsetEffect, "aimPoint"];
        _effectSourceSparks attachTo [_unit, _offsetEffect, "aimPoint"];
        _effectSourceSmoke attachTo [_unit, _offsetEffect, "aimPoint"];
        _lightSource attachTo [_unit, _offsetEffect, "aimPoint"];
        
        // Save for later removal
        _effectSources pushBack _effectSourceFire;
        _effectSources pushBack _effectSourceSparks;
        _effectSources pushBack _lightSource;
        _effectSources pushBack _effectSourceSmoke;
    };
} forEach _effectPoints;

// Save for later removal upon landing by the jetpack handler
_unit setVariable ["BNA_KC_Jet_effectSources", _effectSources];