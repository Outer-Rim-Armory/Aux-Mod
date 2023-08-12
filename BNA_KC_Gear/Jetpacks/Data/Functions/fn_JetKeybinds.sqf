// WIKI: https://cbateam.github.io/CBA_A3/docs/files/keybinding/fnc_addKeybind-sqf.html#CBA_fnc_addKeybind
#include "\a3\ui_f\hpp\defineDIKCodes.inc"  // Key Codes

[
    ["Keeli Company Aux Mod", "Jetpacks"],
    "BNA_KC_Jetpacks_ActivateJetpack",
    ["Activate Jetpack", "Accellerates the user upward."],
    {
        // ace_player includes remote controlling AI
        ace_player setVariable ["BNA_KC_Jet_rise", true];
        call BNAKC_fnc_Jetpack;
    },     // KeyDown
    {
        ace_player setVariable ["BNA_KC_Jet_rise", false];
    },     // KeyUp
    [DIK_SPACE, [true, false, false]],    // Shift + Spacebar
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_AddKeybind;

[
    ["Keeli Company Aux Mod", "Jetpacks"],
    "BNA_KC_Jetpacks_SlowFall",
    ["Activate Slow Fall", "Slows the user down while falling."],
    {
        ace_player setVariable ["BNA_KC_Jet_slowFall", true];
        call BNAKC_fnc_SlowFall;
    },     // KeyDown
    {
        ace_player setVariable ["BNA_KC_Jet_slowFall", false];
    },     // KeyUp
    [DIK_SPACE, [false, false, false]],    // Spacebar
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_AddKeybind;

[
    ["Keeli Company Aux Mod", "Jetpacks"],
    "BNA_KC_Jetpacks_Hover",
    ["Toggle Hover", "Puts the user into a hover state. Only activates if not touching the ground."],
    {
        private _hoverState = switch (ace_player getVariable ["BNA_KC_Jet_hover", false]) do
        {
            case true: { false; };
            case false: { true; };
        };
        ace_player setVariable ["BNA_KC_Jet_hover", _hoverState]
    },     // KeyDown
    {},    // KeyUp
    [DIK_SPACE, [false, true, false]],    // Ctrl + Spacebar
    false, // Hold Key
    0,     // Hold Key Delay
    false  // Overwrite
] call CBA_fnc_addKeybind;