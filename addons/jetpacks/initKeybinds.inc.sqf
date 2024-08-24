#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_activateJetpack),
    ["Activate Jetpack", "Accellerates the user upward."],
    {
        // KeyDown
        // Save original hover state
        GVAR(hoverOriginal) = missionNamespace getVariable [QGVAR(hover), false];

        GVAR(hover) = false;
        GVAR(rise) = true;
        [true] call FUNC(jetpackStart);
    }, {
        // KeyUp
        GVAR(rise) = false;
        GVAR(hover) = GVAR(hoverOriginal);
        GVAR(hoverOriginal) = nil;
    },
    [DIK_SPACE, [true, false, false]]    // Shift + Spacebar
] call CBA_fnc_AddKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_deactivateJetpack),
    ["Deactivate Jetpack", "Deactivates the user's jetpack."],
    {
        // KeyDown
        [] call FUNC(jetpackStop);
    }
] call CBA_fnc_AddKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_slowFall),
    ["Activate Slow Fall", "Slows the user down while falling."], {
        // KeyDown
        if !(isTouchingGround ace_player) then {
            GVAR(slowFall) = true;
            [] call FUNC(jetpackStart);
        };
    }, {
        // KeyUp
        GVAR(slowFall) = false;
    },
    [DIK_SPACE, [false, false, false]]    // Spacebar
] call CBA_fnc_AddKeybind;

[
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_toggleHover),
    ["Toggle Hover", "Puts the user into a hover state. Only activates if not touching the ground."],
    {
        if (getNumber (configOf backpackContainer ace_player >> QGVAR(canHover)) <= FALSE) exitWith {};
        if !(isTouchingGround ace_player) then {
            GVAR(hover) = !GVAR(hover);
        };
    },     // KeyDown
    {},    // KeyUp
    [DIK_SPACE, [false, true, false]]    // Ctrl + Spacebar
] call CBA_fnc_addKeybind;