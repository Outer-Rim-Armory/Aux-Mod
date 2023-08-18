/*
 * Author: DartRuffian
 * Assigns jetpack refuel actions to a specified class(es). May be tweaked in the future, but serves its purpose for now.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * call BNAKC_fnc_JetAddRefuelActions; // Should be used in a XEH
 */


#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})

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
        private _maxFuel = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_fuel", 100);
        [_player, _maxFuel] call BNAKC_fnc_JetpackRefuel; // JetpackRefuel can take either the unit or a backpack object
    },
    {
        // Condition
        params ["_target", "_player", "_params"];
        _player call BNAKC_Jetpacks_fnc_hasJetpack;
    }
] call ace_interact_menu_fnc_createAction;


// Might be re-worked if more flexibility is needed, works for now though
[
    "BNA_KC_Resupply_JetpackFuel", // Class
    0, // 0 for object interaction, 1 for self interaction
    ["ACE_MainActions"], // Path
    _refuelAction,
    true // Inherited classes recieve action
] call ace_interact_menu_fnc_addActionToClass;