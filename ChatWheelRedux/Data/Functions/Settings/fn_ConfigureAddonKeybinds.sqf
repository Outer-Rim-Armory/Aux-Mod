// WIKI: https://cbateam.github.io/CBA_A3/docs/files/keybinding/fnc_addKeybind-sqf.html#CBA_fnc_addKeybind

#include "\a3\ui_f\hpp\defineDIKCodes.inc"  // Key Codes

[
    ["Keeli Company Aux Mod", "Chat Wheel Menu"],
    "CWR_OpenMenu",
    ["Open Menu", "Opens the custom chat menu."],
    {
        call CWR_fnc_OpenChatWheel;
    },     // KeyDown
    {},    // KeyUp
    [],    // Default Key
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_AddKeybind;