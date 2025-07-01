#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_loadVehicle),
    ["Load Vehicle", "Attempts to load a vehicle into the pilot's vehicle."],
    {
        private ["_vehicle"];
        _vehicle = objectParent ace_player;

        if (!isNull _vehicle and
            {ace_player isEqualTo currentPilot _vehicle} and
            {_vehicle call FUNC(vivCanLoad)}
        ) then {
            _vehicle call FUNC(vivLoad);
        };
    },
    {},
    [DIK_C, [false, true, false]] // Ctrl + C
] call CBA_fnc_addKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_unloadVehicles),
    ["Unload Vehicles", "Unloads all currently stored vehicles."],
    {
        private ["_vehicle"];
        _vehicle = objectParent ace_player;
        {objNull setVehicleCargo _x;} forEach getVehicleCargo _vehicle;
    },
    {},
    [DIK_V, [false, true, false]] // Ctrl + V
] call CBA_fnc_addKeybind;
