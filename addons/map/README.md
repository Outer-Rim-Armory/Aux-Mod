# Map
Small quality of life action and utility functions for map locations.

## Usage
### Quick Mark
Included in this component is a keybind and ACE self action to create a map marker at your current position. This can be a useful QoL feature when clearing large towns, giving you more time to clear buildings than staring at a map.

### Location Renaming
A small utility function that can be used to rename a location on a map. This can be used to rename towns, cities, mountains, border crossings, etc.

The easiest way to rename a location is to:
1. Place an object, such as an invisible helipad or "Game Logic" entity.
2. Give the object a variable name.
3. Placing the following code in an `initServer.sqf` file located in the mission folder.
```sqf
// initServer.sqf
// "location" is the object's variable name
[location, "New Location Name"] call BNA_KC_map_fnc_updateLocation;

// or if you want to rename a terrain object like a mountain, hill, etc.
[location, "New Location Name", true] call BNA_KC_map_fnc_updateLocation;
```


## Settings
### Show Self Action
Default Value: **True**

Whether or not to show the ACE self action to mark your current position.

### Channel
Default Value: **Side**

What channel to use when using the "Mark Self" keybind or self action.

### Color
Default Value: **Black**

What color to use when using the "Mark Self" keybind or self action.

### Quick Mark Colors
Default Value: **["ColorBlack", "ColorBlue", "ColorRed", "ColorGreen"]**

List of `CfgMarkerColors` class names to show in the Quick Mark self action. For vanilla colors, these are *usually* named `Color<name>` but this may not always be true; especially for mods that add custom colors.

## Keybinds
### Mark Self
Default Key: **Unbound**

Places a circle marker on your current position using your default color setting.