#include "\ORA\BNA_KC\addons\core\data\hpp\defineDIKCodes.inc"

[
	[QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    QGVAR(key_markSelf),
    ["Create Map Marker", "Creates a map marker on the player. Check Addon Settings for customization."],
    {[] call FUNC(markSelf);},
    {},
    [],
    false,
    0,
    false
] call CBA_fnc_addKeybind;