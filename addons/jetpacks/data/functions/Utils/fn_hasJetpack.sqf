#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns True/False whether a given unit has a Keeli Company Jetpack.
 *
 * Arguments:
 * 0: The unit to check <Object>
 *
 * Return Value:
 * Boolean - True if unit has a jetpack
 *
 * Example:
 * ace_player call BNA_KC_Jetpacks_fnc_hasJetpack; // Returns true if BNA_KC_Jet_isJetpack is set to 1 in the backpack's config
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_unit"];

private _backpack = backpack _unit;
private _isJetpack = GET_NUMBER(configFile >> "CfgVehicles" >> _backpack >> "BNA_KC_Jet_isJetpack",0);

[false, true] select _isJetpack;