# Jetpacks
A completely custom jetpack implementation that feels closer to how Star Wars media usually depicts jetpacks compared to other implementations like the [Just Like The Simulations](https://steamcommunity.com/sharedfiles/filedetails/?id=1940589429) jump packs.

## Usage
When equipping a jetpack that uses the Keeli Company system in the ACE Arsenal, you will also see displays for that jetpack's speed, strength, and fuel capacity stats.

### Movement
To use a jetpack, you must have fuel remaining in the jetpack itself and also not be standing in water. While using a jetpack, you can move around horizontally by using your standard Arma movement inputs (typically <kbd>W</kbd>, <kbd>A</kbd>, <kbd>S</kbd>, <kbd>D</kbd>) while you can fly upwards by using the "Activate Jetpack" CBA keybind (default: <kbd>Shift</kbd> + <kbd>Space</kbd>).

While moving in the air, you will consume fuel from your jetpack. The more actions performed (moving around, flying upwards, etc.), the more fuel that will be used.

For more movement controls, read the "Keybinds" section.

### Refueling
A player's jetpack can be refueled by two ways:
1. A jetpack refuel station.
2. Another player refueling their jetpack with a jetpack fuel can.

Any object can be turned into a refuel station by selecting the checkmark when editing the object in the Eden Editor, or by running the following code:
```sqf
_object call BNA_KC_jetpacks_fnc_addRefuelAction;
```
For easy use, the "Jetpack Fuel Tank" object comes with a reload action already.

A player can also have their jetpack refueled by another player by using a jetpack fuel can. An empty fuel can be found under the "Tools" tab in the ACE Arsenal and full fuel cans will be found under "Magazines".

A player with Engineer permissions is able to fill a fuel by ACE interacting to siphon fuel from a dead body with a jetpack. The player with the fuel tank is then able to ACE interact with an alive player and refuel their jetpack.

### Easy Ejections
Any player that exits an *airborne* vehicle while wearing either a KC jetpack or JLTS jummpack will be automatically moved 30 meters (from the vehicle's center) behind the vehicle to safely eject. This helps for vehicles that have their exit points set inside of or very close the vehicle.

## Configuration
Defining any given backpack as a jetpack is relatively simple. The values given here are used as the baseline for all Keeli Company jetpacks.

```cpp
class CfgVehicles {
    class TAG_myJetpack {
        // Movement
        BNA_KC_jetpacks_isJetpack = 1;  // Enables jetpack functionality (1-yes, 0-no)
        BNA_KC_jetpacks_speed = 4;  // Horizontal speed for jetpack, rough formula is speed * 21 = speed in km/h
        BNA_KC_jetpacks_strength = 15;  // Vertical speed for jetpack, rough formula is (speed - 10) * 4.3 = speed in km/h. Strength of <10 will not be able to fly
        BNA_KC_jetpacks_fuel = 100;  // Amount of fuel this jetpack has, (fuel / 10) = fuel in liters
        BNA_KC_jetpacks_canHover = 1;  // Enables jetpack hovering (1-yes, 0-no)

        // Effects
        // Effect points can either be array in format PositionRelative (offset from model center)
        // or memory point name
        BNA_KC_jetpacks_effectPoints[] = {
            "effect_left",  // Can be mixed
            { 0.15051, -0.219357, -0.247619}
        };
        // CfgCloudlet classes to spawn *for each effect point*
        // e.g. these values will create 5 effects, 4 particles + light
        BNA_KC_jetpacks_effects[] = {
            "BNA_KC_cloudlet_jetpackFire_blue",
            "BNA_KC_cloudlet_jetpackSmoke"
        };
        // Sound effect to play every 0.3 seconds
        BNA_KC_jetpacks_effectSound = "\ORA\BNA_KC\addons\jetpacks,data\audio\Jetpack_Loop.wss";
        BNA_KC_jetpacks_lightColor[] = {0, 0.1, 0.9};  // Light color in format [R, G, B]

        // Other
        BNA_KC_jetpacks_freefallHeight = 500;  // Freefall height to set on unit when jetpacking
    };
};
```


## Settings
### Fuel Drain Coefficient
Default Value: **100%**

Coefficient (multiplier) for fuel drain, higher = more fuel used, lower = less fuel used.

### Air Resistance
Default Value: **8**

Effect of air causing you to slow down while flying.

### Particle Limit
Default Value: **20**

Maximum number of particle effects from jetpacks that can exist at a given time. Particle effects are unique to each client.

## Keybinds
### Activate Jetpack
Default Key: **<kbd>Shift</kbd> + <kbd>Space</kbd>** (Hold)

Activates a jetpack and begins flying upwards.

### Activate Slow Fall
Default Key: **<kbd>Space</kbd>** (Hold)

Slows your falling speed to reduce or prevent fall damage.

### Toggle Hover
Default Key: **<kbd>Ctrl</kbd> + <kbd>Space</kbd>**

Toggles a hover state while using a jetpack.