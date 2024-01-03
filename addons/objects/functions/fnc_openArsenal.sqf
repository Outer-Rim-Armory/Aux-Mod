#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Opens a type of custom arsenal for ace_player.
 *
 * Arguments:
 * 0: The type of arsenal to open <STRING>
 *    - "customs": Custom armor, helmets, vests, etc.
 *    - "attachments": All types of attachments for the player's weapons
 *
 * Return Value:
 * None
 *
 * Example:
 * ["customs"] call BNA_KC_objects_fnc_openArsenal;
 */

params [
    ["_type", "", [""]]
];
private ["_arsenalItems"];
TRACE_1("fnc_openArsenal",_type);

_arsenalItems = switch (toLowerANSI _type) do {
    case "customs": {
        missionNamespace getVariable [QEGVAR(customArmor,customItems), []];
    };

    case "attachments": {
        private ["_attachments"];
        _attachments = [primaryWeapon ace_player, secondaryWeapon ace_player, handgunWeapon ace_player];
        _attachments = _attachments apply {compatibleItems _x};
        flatten _attachments;
    };
};

[ace_player, _arsenalItems] call ace_arsenal_fnc_addVirtualItems;
[ace_player, ace_player] call ace_arsenal_fnc_openBox;