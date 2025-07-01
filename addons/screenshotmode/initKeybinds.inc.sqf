#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_toggle),
    ["Toggle HUD", "Hides most UI elements, useful for taking screenshots."],
    {
        [] call FUNC(toggleHud);
    },     // KeyDown
    {},    // KeyUp
    [DIK_HOME, [false, false, false]]    // Home
] call CBA_fnc_addKeybind;
