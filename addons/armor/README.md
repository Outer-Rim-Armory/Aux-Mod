# Armor
Standard clone armor and equipment for Keeli Company members.

## NVG Helmet Switching
A small function that will cycle between two helmets whenever a player enables/disables night vision or thermals.

### Example
```cpp
class CfgWeapons {
    class TAG_myHelmet_off {
        BNA_KC_armor_nvCanToggle = 1;
        BNA_KC_armor_nvHelmetOff = "TAG_myHelmet_off"; // Equipped when disabling NV or thermal
        BNA_KC_armor_nvHelmetOn = "TAG_myHelmet_on"; // Equipped when enabling NV or thermal
    };

    class TAG_myHelmet_on: TAG_myHelmet_off {
        scope = 1;
        scopeArsenal = 0;
        // Could use different textures, materials, etc.
    };
};