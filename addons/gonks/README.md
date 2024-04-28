# Gonk Droids
A customizable loadout menu to make it easy for unit to set up rank and certification / MOS loadouts.

There are objects that will call the necessary functions by default; however, if you'd like to make a custom object with this functionality, you can call the following functions:
```sqf
[_object] call BNA_KC_gonks_loadoutBoxInit;
[_object] call BNA_KC_gonks_rankBoxInit;
```

These functions only need to be run on the client, since all they do is create actions on the objects.

## Ranks
The implementation for ranks is largely set up to match a Star Wars, i.e. "Starsim", unit would handle ranks. The set up here is not likely to change, so if you are a non Starsim unit using this framework, you will likely have to override the `BNA_KC_gonks_armorPhase` setting.

Ranks are defined in `BNA_KC_gonks_ranks`, and are split up by platoon, detachment, or whatever other organization method you choose. There are four variants of each of the properties listed, `helmetPX`; `uniformPX`; `vestPX`; and `nvgPX`.

The "X" will be either 0, 1, 2, 3, as defined in the `BNA_KC_gonks_armorPhase` setting.
These properties define what helmet, uniform, etc. will be used in a specific phase. For example, if `BNA_KC_gonks_armorPhase` is set to 0, `helmetP0` will be used, and so on.

Which rank sets are currently being used **can** be changed mid-mission.

### Example
```cpp
class BNA_KC_gonks_ranks {
    class Infantry {
        label = "Infantry Name";
        order = 0;

        class CR {
            order = 0;
            helmetP0 = "TAG_yourHelmet_phase0";
            helmetP1 = "TAG_yourHelmet_phase1";
            helmetP2 = "TAG_yourHelmet_phase2";
            helmetP3 = "TAG_yourHelmet_phase3";

            uniformP0 = "TAG_yourUniform_phase0";
            uniformP1 = "TAG_yourUniform_phase1";
            uniformP2 = "TAG_yourUniform_phase2";
            uniformP3 = "TAG_yourUniform_phase3";

            vestP0 = "TAG_yourVest_phase0";
            vestP1 = "TAG_yourVest_phase1";
            vestP2 = "TAG_yourVest_phase2";
            vestP3 = "TAG_yourVest_phase3";

            nvgP0 = "TAG_yourNVG_phase0";
            nvgP1 = "TAG_yourNVG_phase1";
            nvgP2 = "TAG_yourNVG_phase2";
            nvgP3 = "TAG_yourNVG_phase3";
        };
        class CT: CR {
            // Or whatever changes you'd like
            helmetP1 = "TAG_yourHelmet_phase1CT";
            helmetP2 = "TAG_yourHelmet_phase2CT";

            uniformP1 = "TAG_yourUniform_phase1CT";
            uniformP2 = "TAG_yourUniform_phase2CT";
        };
    };
};
```


## Loadouts
Loadouts are defined in `BNA_KC_gonks_loadouts`, which are then organized by:
1. Platoon or detachment
2. Squad role
3. Loadout

Loadouts are what assigns the bulk of the inventory for a player's kit, and should be loaded after grabbing a rank.

### Example
```cpp
class BNA_KC_gonks_loadouts {
    class Infantry {
        label = "Infantry Name"; // Action name
        order = 0; // Order to display in
        class SquadRole {
            label = "Squad Role";
            order = 0;
            class Rifleman {
                label = "Rifleman";
                order = 0;
                handgun = "TAG_yourPistol"; // what handgun to give
                launcher = ""; // launcher
                binoculars = "";
                vest = "";
                backpack = "TAG_yourBackpack";
                weapons[] = {"DC15A", "DC15S", "DC15C"}; // class names from BNA_KC_gonks_weapons
                magazines[] = { // magazine classes, can include grenades
                    // ...
                };
                items[] = {
                    // ...
                };
            };

            class SquadLeader: Rifleman {
                label = "Squad Leader";
                order = 1;
                magazines[] = {
                    // ...
                };
                items[] = {
                    // ...
                };
            };
        };
        class Defense {
            // Defense infantry loadouts
        };
    };
    class Airborne {
        // ...
    };
};
```

## Weapons
Weapons make up the second part of loadouts. The `weapons` property in a given loadout consists of classes defined here. Weapons are the simplest of the three, given that they mainly only consist of a weapon class name and the magazines for it.

### Example
```cpp
class BNA_KC_gonks_weapons {
    class MyGun {
        label = "My Gun Name";
        order = 0;
        weapon = "TAG_myGun";
        magazines[] = {
            {"TAG_myGun_magazine", 10} // what magazine to give and how many
        };
    };
};
```