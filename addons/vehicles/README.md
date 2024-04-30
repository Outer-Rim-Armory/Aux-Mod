# Vehicles
Vehicle systems, such as an automatic ejection sytem and crew management actions.

## Auto-Eject
When a vehicle is destroyed, any unconscious crew members or passenegers will be automatically ejected from the vehicle once the vehicle has stopped. If enabled, the crew and passengers will also recieve a brief amount of invulnerability so that they are not immediately killed. This is particular important for vehicles that are destroyed while airborne, as the crew would likely die on impact.

## Crew Spawner
Some vehicles come equipped with ACE self actions to allow the current pilot or driver of a vehicle to spawn AI crew members, as well as an action to remove all AI crew. This is mainly used in higher crew cost vehicles, such as the ARC-170, Juggernaut, etc.

## Texture Switcher
All vehicles with multiple `TextureSources` come equipped with an ACE self interaction for the current pilot or driver of the vehicle to change the textures used for the vehicle. The vehicle must be stopped in order to change the texture.

## Vehicle Spawner
To make an object a vehicle spawner, you can call the `BNA_KC_vehicles_fnc_vehicleSpawner` function. This function adds actions for most vehicle types, these actions spawn their respective vehicle. It will also add an action to delete the last spawned vehicle.

```sqf
// _console is an object
// _spawnPad is an object
// _direction is a number between 0 and 360, this is the direction spawned vehicles will face.
[_console, _spawnPad, _direction] call BNA_KC_vehicles_fnc_vehicleSpawner;
```

If you want to only spawn a certain type of vehicle you can specify the type. By default, most KC vehicles will be added.

```sqf
// _type can be any of: "all", "air", "land"
[_console, _spawnPad, _direction, _type] call BNA_KC_vehicles_fnc_vehicleSpawner;
```