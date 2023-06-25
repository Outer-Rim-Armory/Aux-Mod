// Configure ACE Fortify
// This runs whenever an object is placed.
// If you want to run code whenever you place something, add it here
_whenPlaced = 
[
    "acex_fortify_objectPlaced",
    {
        params ["_player", "_side", "_obj"];
        
        // Ladder
        if (typeOf _obj == "Land_PierLadder_F") then {
            // The ladder spawns much lower than ideal because the center is high up (duh)
            // This checks the type of object, and if it's the ladder (listed above in the ace_fortify_fnc_registerObjects part),
            // it moves it up by one meter
            _obj setPosASL [getPosASL _obj select 0, getPosASL _obj select 1, (getPosASL _obj select 2) + 2];
        };
    }
] call CBA_fnc_addEventHandler;



// Configure ACE Fortify settings
// The time it takes to build an object is Ax + B
// A is ace_fortify_timeCostCoefficient, x is the cost of the object
// B is ace_fortify_timeMin

// This setup makes it so that objects are placed instantly, and their cost is equal to what is set up in ace_fortify_fnc_registerObjects
acex_fortify_settingHint = 1;        // Only show Budget updates for players with a fortify tool
ace_fortify_timeCostCoefficient = 0; // Set the time multiplier for building
ace_fortify_timeMin = 0;             // The minimum amount of time it takes to build