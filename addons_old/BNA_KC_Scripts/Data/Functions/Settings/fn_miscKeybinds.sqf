// WIKI: https://cbateam.github.io/CBA_A3/docs/files/keybinding/fnc_addKeybind-sqf.html#CBA_fnc_addKeybind

#include "\a3\ui_f\hpp\defineDIKCodes.inc"  // Key Codes

// Map Markers
[
    ["Keeli Company Aux Mod", "Map"],
    "BNA_KC_Map_CreateMarkBind",
    ["Create Map Marker", "Creates a map marker on the player. Check Addon Settings for customization."],
    {
        [] call BNAKC_fnc_markSelf;
    },     // KeyDown
    {},    // KeyUp
    [],    // Default Key
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_addKeybind;