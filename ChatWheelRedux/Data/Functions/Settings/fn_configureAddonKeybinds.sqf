// WIKI: https://cbateam.github.io/CBA_A3/docs/files/keybinding/fnc_addKeybind-sqf.html#CBA_fnc_addKeybind

#include "\a3\ui_f\hpp\defineDIKCodes.inc"  // Key Codes

[
    ["ARMA 3 Chat Wheel - Redux", "Menu"],
    "CWR_OpenMenu",
    ["Open Menu", "Opens the custom chat menu."],
    {
        call CWR_fnc_openChatWheel;
    },     // KeyDown
    {},    // KeyUp
    [],    // Default Key
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_addKeybind;
