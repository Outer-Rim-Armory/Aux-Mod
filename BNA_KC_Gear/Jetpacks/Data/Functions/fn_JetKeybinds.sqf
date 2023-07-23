// WIKI: https://cbateam.github.io/CBA_A3/docs/files/keybinding/fnc_addKeybind-sqf.html#CBA_fnc_addKeybind
#include "\a3\ui_f\hpp\defineDIKCodes.inc"  // Key Codes

[
    ["Keeli Company Aux Mod", "Jetpacks & Jumppacks"],
    "BNA_KC_Jetpacks_ActivateJetpack",
    ["Activate Jetpack", "Accellerates the user upward."],
    {
        // ...
    },     // KeyDown
    {},    // KeyUp
    [DIK_SPACE, [true, false, false]],    // Shift + Spacebar
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_AddKeybind;

[
    ["Keeli Company Aux Mod", "Jetpacks & Jumppacks"],
    "BNA_KC_Jetpacks_SlowFall",
    ["Activate Slow Fall", "Slows the user down while falling."],
    {
        // ...
    },     // KeyDown
    {
        // ...
    },     // KeyUp
    [DIK_SPACE, [false, false, false]],    // Spacebar
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_AddKeybind;