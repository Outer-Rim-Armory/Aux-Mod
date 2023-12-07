/*
* Author: DartRuffian
* Displays a message to the pilot of the vehicle's current shield health.
*
* Arguments:
* None
*
* Return Value:
* Number - CBA Event Handler ID
*
* Examples:
* call BNAKC_fnc_shieldDamagedHandler
*/


#include "script_component.sqf"

[
    "BNA_KC_shieldHealthChanged",
    {
        params ["_vehicle", "_oldHealth", "_newHealth"];
        private ["_shieldHealthFormatted", "_message"];

        _shieldHealthFormatted = format
        [
            "<t color='%1'>%2</t>",
            _vehicle call BNAKC_fnc_getShieldHealthColor,
            [_vehicle, true] call BNAKC_fnc_getShieldHealth
        ] + "%";
        _message = format ["Strength %1", _shieldHealthFormatted];
        [_message] remoteExecCall ["ace_common_fnc_displaytextstructured", currentPilot _vehicle];
    }
] call CBA_fnc_addEventHandler;