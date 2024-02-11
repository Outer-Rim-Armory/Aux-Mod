/*
 * Author: DartRuffian
 * Assigns jetpack refuel actions to a specified class(es). May be tweaked in the future, but serves its purpose for now.
 *
 * Arguments:
 * object: Object - The object to add the action to
 * showAction: Number - 1 to create the action, otherwise, do nothing
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, 1] call BNAKC_Jetpacks_fnc_addRefuelActions;
 */


#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_object", "_showAction"];

if (_showAction != 1) exitWith {};

private _refuelAction =
[
    "BNA_KC_Jet_refuelAction", // Action
    "Refuel Jetpack",          // Display Name
    "\z\ace\addons\refuel\ui\icon_refuel_interact.paa", // Icon - ACE fits better than base-game
    {
        // Statement
        params ["_target", "_player", "_params"];
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_start.wss", _player];

        private _jetpack = backpack _player;
        private _maxFuel = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_fuel",100);
        [_player, _maxFuel] call BNAKC_Jetpacks_fnc_setJetpackFuel; // JetpackRefuel can take either the unit or a backpack object
    },
    {
        // Condition
        params ["_target", "_player", "_params"];
        _player call BNAKC_Jetpacks_fnc_hasJetpack;
    }
] call ace_interact_menu_fnc_createAction;


[
    _object,
    0,
    ["ACE_MainActions"],
    _refuelAction
] call ace_interact_menu_fnc_addActionToObject;