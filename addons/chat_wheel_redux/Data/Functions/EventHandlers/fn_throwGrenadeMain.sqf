/*
 * Author: DartRuffian
 * Main code for the automated grenade messages. Handles formatting the message and sending it to nearby units.
 *
 * Arguments:
 * sender: Object - The sender throwing the grenade
 * magazine: String - The classname of the magazine being used
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "SmokeShell"] call CWR_fnc_throwGrenadeMain;
 */


params ["_sender", "_magazine"];

if !(_magazine isKindOf ["HandGrenade", configFile >> "CfgMagazines"]) exitWith {};
"Grenade thrown" call CWR_fnc_devLog;

// Determine the type of grenade, assume explosive as default
private _grenadeType = "Grenade";
private _grenadeName = "";

if (_magazine isKindOf ["SmokeShell", configFile >> "CfgMagazines"]) then {
    _grenadeType = "Smoke";
};

if (toLowerANSI _magazine find "shield" isEqualTo -1) then {
    _grenadeType = "Shield";

    if (toLowerANSI _magazine find "squad" isEqualTo -1) then {
        _grenadeType = "SquadShield";
        _grenadeName = "Squad Shield";
    };
};

if (_grenadeName == "") then {
    _grenadeName = _grenadeType
};

private _nearbyUnits = (getPosATL _sender) nearEntities ["CAManBase", 30];
_nearbyUnits = _nearbyUnits select { isPlayer _x; };

// Tags are processed here to avoid mismatched data and multiple voice lines playing
// If processed in the remoteExec, bearing would be *that* player's bearing and the voice
// line would be played for each unit in range (i.e. 10 players would hear the voiceline 10 times)
private _message = format ["[vl-Throw%1]%2 out, [bearing]!", _grenadeType, _grenadeName] call CWR_fnc_processTags;

{
    [_sender, _message] remoteExecCall ["CWR_fnc_sendLocalMessage", _x];
} forEach _nearbyUnits;