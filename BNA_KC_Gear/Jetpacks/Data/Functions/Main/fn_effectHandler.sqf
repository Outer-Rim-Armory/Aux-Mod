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
 * ['BNA_KC_Jet_JetpackFired', BNAKC_Jetpacks_fnc_effectHandler] call CBA_fnc_addEventHandler;
 */


params ["_unit"];

// Contants and macros
#define POS_SPINE3 [-0.009, -0.008, 0.356]
#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})
#define GET_ARRAY(config, defaultValue) (if (isArray (config)) then {getArray (config)} else {defaultValue})

// Don't play effects for units on the ground or who can't jetpack
if (!(_unit call BNAKC_Jetpacks_fnc_canUseJetpack) or isTouchingGround _unit) exitWith {};

private _jetpack = backpack _unit;

// Obtain effect point names
private _effectPoints = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectPoints", []);
private _effectTypes  = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effects", []);
private _defaultColor = [1, 1, 1]; // Can't include [] with commas inside in a macro
private _lightColor   = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_lightColor", _defaultColor);
if (_effectPoints isEqualTo []) exitWith {}; // Don't spawn effects if there aren't any effect points

// Reserve variables
private _allSources = _unit getVariable ["BNA_KC_Jet_effectSources", [[]]];
private _effectSources = [];

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
        // Spawn all of the effects, attach to player, save to array
        {
            private _effect = "#particlesource" createVehicle [0, 0, 0];
            _effect setParticleClass _x;
            _effect attachTo [_unit, _offsetEffect, "aimPoint"];
            _effectSources pushBack _effect;
        } forEach _effectTypes;

        // Create light
        private _lightSource = "#lightpoint" createVehicle [0, 0, 0];
        _lightSource setLightColor _lightColor;
        _lightSource setLightAmbient [0, 0, 0];
        _lightSource setLightBrightness 0.5;		
        // Attach to player
        _lightSource attachTo [_unit, _offsetEffect, "aimPoint"];
        // Save for later removal
        _effectSources pushBack _lightSource;
    };
} forEach _effectPoints;

// Save for later removal upon landing by the jetpack handler
_allSources pushBack _effectSources;
_allSources call BNAKC_fnc_devLog;
_effectSources call BNAKC_fnc_devLog;
_unit setVariable ["BNA_KC_Jet_effectSources", _allSources, true];