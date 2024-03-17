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