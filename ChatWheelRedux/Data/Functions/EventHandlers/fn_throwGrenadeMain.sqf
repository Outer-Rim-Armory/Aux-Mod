/*
 * Author: DartRuffian
 * Main code for the automated grenade messages. Handles formatting the message and sending it to nearby units.
 *
 * Arguments:
 * unit: Object - The unit throwing the grenade
 * magazine: String - The classname of the magazine being used
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "SmokeShell"] call CWR_fnc_throwGrenadeMain;
 */


params ["_unit", "_magazine"];

if !(_magazine isKindOf ["HandGrenade", configFile >> "CfgMagazines"]) exitWith {};

// Determine the type of grenade, assume explosive as default
private _grenadeType = "Grenade";

if (_magazine isKindOf ["SmokeShell", configFile >> "CfgMagazines"]) then
{
    _grenadeType = "Smoke";
};

private _nearbyUnits = (getPosATL _unit) nearEntities ["CAManBase", 30];
[_unit, format ["[vl-Throw%1]%1 out, [bearing]!", _grenadeType]] remoteExecCall ["CWR_fnc_sendLocalMessage", (_nearbyUnits)];