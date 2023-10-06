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