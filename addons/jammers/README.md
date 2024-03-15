# Radio Jammers

This system adds TFAR radio jammers, which gradually adds interference based on the player's distance to the jammer(s).

If multiple jammers are in range of the player, the average interference will be used. A radio jammer can be any object, whether it's a unit; a vehicle; or a prop.

## Usage
The objects listed below have jamming functionality already built in, but any object can be made into a jammer.

| Name               | Range (m) | Strength |
| :--                | :--       | :--      |
| Radio Jammer Tower | 5000      | 150      |
| B1 Saboteur Droid  | 100       | 100      |

### Creating a custom jammer
Any object can be turned into a jammer using the following code:
- `_object` is an object reference. i.e. `this` if running in an object init.
- `_radius` is the effective radius in meters.
- `_strength` is the strength of the jammer (optional, default: 100).
- `_isActive` is whether the jammer is currently active (optional, default: true).
  - Can be set to have a jammer inactive at mission start, but enabled after some trigger.
```sqf
[_object, _radius, _strength, _isActive] call BNA_KC_jammers_fnc_addJammer;
```

A jammer will automatically be disabled if the object is destroyed or killed, but can be manually removed with:
```sqf
_object call BNA_KC_jammers_fnc_removeJammer;
```

or can be temporarily disabled by disabling the `BNA_KC_jammers_isActive` variable:
```sqf
_object setVariable ["BNA_KC_jammers_isActive", false, true];
```

## Settings
### Update Rate
How often (in seconds) the interference for players is updated. Lower number results in more accuracy, but uses more resources.