/*
 * Author: DartRuffian
 * Handles automatic weapon attachment switching for different magazines.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Examples:
 * reloaded = "_this call BNAKC_fnc_handleAttachmentSwap";
 */


params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
private ["_isEnabled", "_attachments"];

// Check if enabled and has attachments configured
_isEnabled =
[
    configFile >> "CfgWeapons" >> _weapon,
    "BNA_KC_attachmentSwap",
    0
] call BIS_fnc_returnConfigEntry;

_attachments =
[
    configFile >> "CfgWeapons" >> _weapon,
    "BNA_KC_attachments",
    []
] call BIS_fnc_returnConfigEntry;

if (_isEnabled isEqualTo 0) exitWith {};
if (_attachments isEqualTo []) exitWith
{
    // Debug message
    format ["%1 has BNA_KC_attachmentSwap enabled, but does not have any attachments configured.", _weapon] call BNAKC_fnc_devLog;
};

{
	private ["_property", "_attachment", "_matches"];
    _property = _x#0;
    _attachment = _x#1;
    format ["Checking %1 for %2", _newMagazine#0, _attachment] call BNAKC_fnc_devLog;

    _matches =
    [
        configFile >> "CfgMagazines" >> _newMagazine#0,
        _property,
        0
    ] call BIS_fnc_returnConfigEntry;

    // Only add the first attachment that matches
    if (_matches isEqualTo 1) exitWith
    {
        _unit addWeaponItem [_weapon, _attachment];
        format ["Adding attachment %1 to %2", _attachment, _weapon] call BNAKC_fnc_devLog;
    };
} forEach _attachments;