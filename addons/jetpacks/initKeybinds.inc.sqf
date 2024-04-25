#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_activateJetpack),
    ["Activate Jetpack", "Accellerates the user upward."],
    {
        // Save original hover state
        ace_player setVariable [
            "BNA_KC_Jet_hoverOriginal",
            ace_player getVariable ["BNA_KC_Jet_hover", false]
        ];
        // Disable hover
        ace_player setVariable ["BNA_KC_Jet_hover", false];

        ace_player setVariable ["BNA_KC_Jet_rise", true];
        true call BNA_KC_Jetpacks_fnc_jetpack;
    },     // KeyDown
    {
        ace_player setVariable ["BNA_KC_Jet_rise", false];
        // Reset hover state to original value (before rising)
        ace_player setVariable [
            "BNA_KC_Jet_hover",
            ace_player getVariable ["BNA_KC_Jet_hoverOriginal", false]
        ];
        ace_player setVariable ["BNA_KC_Jet_hoverOriginal", nil]; // Remove old variable
    },     // KeyUp
    [DIK_SPACE, [true, false, false]]    // Shift + Spacebar
] call CBA_fnc_AddKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_slowFall),
    ["Activate Slow Fall", "Slows the user down while falling."],
    {
        if !(isTouchingGround ace_player) then {
            ace_player setVariable ["BNA_KC_Jet_slowFall", true];
            false call BNA_KC_Jetpacks_fnc_jetpack;
        };
    },     // KeyDown
    {
        ace_player setVariable ["BNA_KC_Jet_slowFall", false];
    },     // KeyUp
    [DIK_SPACE, [false, false, false]]    // Spacebar
] call CBA_fnc_AddKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_toggleHover),
    ["Toggle Hover", "Puts the user into a hover state. Only activates if not touching the ground."],
    {
        if (getNumber (configOf backpackContainer ace_player >> QGVAR(canHover)) <= FALSE) exitWith {};
        if !(isTouchingGround ace_player) then {
            _hoverState = !(ace_player getVariable ["BNA_KC_Jet_hover", false]);
            ace_player setVariable ["BNA_KC_Jet_hover", _hoverState];
        };
    },     // KeyDown
    {},    // KeyUp
    [DIK_SPACE, [false, true, false]]    // Ctrl + Spacebar
] call CBA_fnc_addKeybind;