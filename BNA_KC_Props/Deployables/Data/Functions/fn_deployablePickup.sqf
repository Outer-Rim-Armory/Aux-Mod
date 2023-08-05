params ["_unit", "_object"];

_unit playAction "PutDown";
[
    {
        params ["_unit", "_object"];
        private _itemClass = getText(configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Deployable_Item");

        // Check if the player has enough space to store the item, if not, drop it on the ground
        if (_unit canAdd _itemClass) then
        {
            _unit addItem _itemClass;
            deleteVehicle _object;
        }
        else
        {
            cutText ["Not enough space to pick up.", "PLAIN DOWN"];
            private _holder = "groundWeaponHolder" createVehicle [0, 0, 0];
            _holder setPosASL getPosASL _object;
            _holder setDir floor (random 360);

            _holder addWeaponCargoGlobal [_itemClass, 1];

            deleteVehicle _object;
        };
    },
    [_unit, _object],
    0.925
] call CBA_fnc_waitAndExecute;