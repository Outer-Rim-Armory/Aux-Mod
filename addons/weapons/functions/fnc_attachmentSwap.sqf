#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Swaps weapons attachments on compatible weapons when reloading.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Examples:
 * reloaded = "_this call BNA_KC_weapons_fnc_handleAttachmentSwap";
 */


params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
private ["_isEnabled", "_attachments"];

_isEnabled = [
    configFile >> "CfgWeapons" >> _weapon,
    QGVAR(attachmentSwapEnabled),
    FALSE
] call BIS_fnc_returnConfigEntry;

_attachments = [
    configFile >> "CfgWeapons" >> _weapon,
    QGVAR(attachments),
    []
] call BIS_fnc_returnConfigEntry;

TRACE_5("fnc_attachmentSwap",_unit,_weapon,_newMagazine,_isEnabled,_attachments);

if (_isEnabled isEqualTo FALSE) exitWith {};
if (count _attachments isEqualTo 0) exitWith {
    WARNING_2("Weapon %1 has %2 enabled but does not have any attachments set.",_weapon,QGVAR(attachmentSwapEnabled))
};

{
    private ["_property", "_attachment", "_matches"];
    _x params ["_property", "_attachment"];

    _matches = [
        configFile >> "CfgMagazines" >> _newMagazine#0,
        _property,
        FALSE
    ] call BIS_fnc_returnConfigEntry;

    // Only add the first attachment that matches
    if (_matches isEqualTo TRUE) exitWith {
        _unit addWeaponItem [_weapon, _attachment, true];
        INFO_2("Adding attachment %1 to %2",_attachment,_weapon);
    };
} forEach _attachments;