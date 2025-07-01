private ["_markerColors", "_markerColorNames"];

[
    QGVAR(showMarkSelfAction),
    "CHECKBOX",
    ["Show ACE Self Action", "Toggles the ACE Self Interact option to mark yourself on the map."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(markSelfChannel),
    "LIST",
    ["Channel", "The channel to create markers in."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [[-2, 0, 1, 2, 3, 4, 5], ["Auto", "Global", "Side", "Command", "Group", "Vehicle", "Direct"], 2]
] call CBA_fnc_addSetting;


_markerColors = configProperties [
    configFile >> "CfgMarkerColors"
] apply {configName _x;};
_markerColors deleteAt 0; // Remove "Default"

_markerColorNames = _markerColors apply {
    private _name = [
        configFile >> "CfgMarkerColors" >> _x,
        "name",
        "Unknown Color"
    ] call BIS_fnc_returnConfigEntry;
    _name;
};
[
    QGVAR(markSelfColor),
    "LIST",
    ["Color", "Color to use when creating the map marker"],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [_markerColors, _markerColorNames, 0]
] call CBA_fnc_addSetting;

[
    QGVAR(quickMarkColors),
    "EDITBOX",
    ["Quick Mark Colors", "List of CfgMarkerColors class names."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    "['ColorBlack', 'ColorBlue', 'ColorRed', 'ColorGreen']"
] call CBA_fnc_addSetting;
