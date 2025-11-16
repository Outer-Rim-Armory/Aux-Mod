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
 *
 * Public: No
 */

params ["_unit", "_weapon", "", "_newMagazine"];
private ["_isEnabled", "_attachments"];

_isEnabled = getNumber (configFile >> "CfgWeapons" >> _weapon >> QGVAR(attachmentSwapEnabled));
_attachments = getArray (configFile >> "CfgWeapons" >> _weapon >> QGVAR(attachments));

TRACE_5("fnc_attachmentSwap",_unit,_weapon,_newMagazine,_isEnabled,_attachments);

if (_isEnabled isEqualTo FALSE or
    {_attachments isEqualTo []}
) exitWith {};

{
    private ["_property", "_attachment", "_matches"];
    _x params ["_property", "_attachment"];

    _matches = getNumber (configFile >> "CfgMagazines" >> _newMagazine#0 >> _property);

    // Only add the first attachment that matches
    if (_matches isEqualTo TRUE) exitWith {
        _unit addWeaponItem [_weapon, _attachment, true];
        INFO_2("Adding attachment %1 to %2",_attachment,_weapon);
    };
} forEach _attachments;
nil;
