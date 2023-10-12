/*
* Author: DartRuffian
* Displays a message whenever the vehicle's shield is turned on or getElevationOffset
*
* Arguments:
* None
*
* Return Value:
* Number - CBA Event Handler ID
*
* Examples:
* call BNAKC_fnc_shieldToggleHandler
*/


[
    "BNA_KC_shieldToggle",
    {
        params ["_vehicle", "_isActive", "_health"];
        private ["_message"];

        _message = "Shield <t color='#FF0000'>Disabled</t>";
        if (_isActive) then
        {
            _health = format
            [
                "<t color='%1'>%2</t>",
                _vehicle call BNAKC_fnc_getShieldHealthColor,
                [_vehicle, true] call BNAKC_fnc_getShieldHealth
            ];
            _health = _health + "%";
            _message = format ["Shield <t color='#00FF00'>Enabled</t> | Strength %1", _health];
        };

        [_message] call ace_common_fnc_displaytextstructured;
    }
] call CBA_fnc_addEventHandler;