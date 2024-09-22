# Fortify
A small utility addon to make it easier to configure ACE Fortify.
Also adds the ability for a single preset to include all objects from other presets.

## Usage
Select a given preset from the "Preset" setting dropdown menu, or "Disabled" to disable automatically loading a specific preset.

### "Super" Presets
For presets loaded through the "Preset" setting, they will be checked for a `presets` array property in the class's config. All objects from the listed preset will be loaded, as well as all objects from each preset contained in `presets`.

```cpp
class ACEX_Fortify_Presets {
    class TAG_presetAll {
        displayName = "Super Preset";
        presets[] = {
            "TAG_basicPreset"
        };
        objects[] = {
            {"UniqueObject", 5}
        };
    };
};
```

If "Super Preset" is selected in the settings menu, all objects from `TAG_basicPreset` will be loaded, as well as the `UniqueObject` from the `TAG_presetAll`.

## Persistence
Objects built with ACE Fortify can optionally be saved to the server using the name and map that mission is running on. Both the mission and map name are used so that missions with the same name but on different maps are not sharing objects between them. Saved objects will not be shown in the Eden Editor and will be created when the mission is started.

Here is a (somewhat) simple table with examples between mission files and whether objects from one will be saved and loaded to the other.

| Mission 1 Name  | Map 1 Name   | Mission 2 Name  | Map 2 Name | Objects Saved?     |
| --------------- | ------------ | --------------- | ---------- | ------------------ |
| MyCoolMission   | altis        | MyCoolMission   | tanoa      | ❌ Not Transferred |
| MyCoolMission   | altis        | MyCoolMission2  | altis      | ❌ Not Transferred |
| MyCoolMission   | altis        | MyCoolMission   | altis      | ✅ Transferred     |

## Settings
### Preset
Default Value: **[KC] Common**

Class name from the `ACEX_Fortify_Presets` class to load.

### Sides
Default Value: **BLUFOR**

What sides to configure ACE Fortify for.

### Budget
Default Value: **100**

Budget for the selected sides.

**Note:** This value is internally stored as a string for an easier input. If you need to access this value as a number, use `parseNumber BNA_KC_fortify_budget`.

### Persistence Enabled
Default Value: **False**

Enables objects built with ACE Fortify to be saved with the mission. Objects are saved using the mission's name as well as the map. View the table above for examples on what missions will save and load data to each other.
