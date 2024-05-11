# Main
The main addon of the Keeli Company Aux mod. Contains common functionality / classes for other addons.

## Version checking
When a mission is loaded, the version of the Keeli Company aux mod that the server is running is saved, and then broadcasted to all future clients that join. This version is then compared to their version. If the versions are different, a warning is raised to the client telling them that one of the two versions are out of sync. **This does not prevent the player from connecting and playing on the mission.**

## Replacement items
A small function that executes when opening an arsenal (vanilla/ACE compatible). It will search through all of the player's loadouts and replace any specified items with its given replacement.

This is useful for replacing old/deprecated class names with their updated counterparts without breaking people's loadouts. **The old item does not have to exist.**

The two classes must be the same "type" of item. You can't replace a weapon with a backpack for example.

### Example
When an arsenal is opened, every instance of `TAG_myOldLegacyClass` will be replaced with `TAG_myNewClass`.
```cpp
class BNA_KC_replacementItems {
    TAG_myOldLegacyClass = "TAG_myNewClass";
};
```