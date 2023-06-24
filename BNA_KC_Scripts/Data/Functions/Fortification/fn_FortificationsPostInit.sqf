// Configure ACE Fortify

// Set Budget for Bluefor to 100
// Add all buildable objects
// Format is: ["Class name of object", Cost]
// To get the class name of an object, go into eden and hover over an object
[
    west, // west = bluefor
    100,  // budget
    [
        // Hesco Objects
        ["Land_lsb_fob_hBarrier_1", 5],                   // Block
        ["Land_lsb_fob_hBarrier_3", 10],                  // Barrier (3 Block)
        ["Land_lsb_fob_hBarrierBig_4", 15],               // Large Hesco Wall
        ["Land_lsb_fob_hBarrierWall_exvertedCorner", 15], // Large Hesco Wall Corner
        ["Land_lsb_fob_hBarrier_ramp", 5],                // Hesco Ramp, ~2m

        // Sandbags
        ["Land_BagFence_Long_F", 5],  // Straight
        ["Land_BagFence_Round_F", 5], // Round

        // Other
        ["cwa_Wire", 10],                  // Barbed Wire
        ["Land_PierLadder_F", 10],         // Ladder
        ["Land_Plank_01_8m_F", 10]         // Plank, 8m
    ]
] call ace_fortify_fnc_registerObjects;

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