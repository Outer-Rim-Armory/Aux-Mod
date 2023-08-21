params ["_atrt"];
if (isNull _atrt) exitWith {};

_atrt setAnimSpeedCoef 1.5; // Used to increase movement speed

_atrt addAction
[
    "Drive",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "_actionId", "_arguments"];
        
        _rider = _atrt getVariable ["BNA_KC_ATRT_Rider", _rider];
        [_rider, _atrt] call BNAKC_fnc_mountATRT;
        
        // Check if the player should be able to ride
        waitUntil
        {
            sleep 2;
            private _expression = (!(alive _rider or alive player or "INCAPACITATED" == lifeState _rider));
            !isNil "_expression" and { _expression }
        };
        
        _atrt call BNAKC_fnc_dismountATRT;
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget and alive _target", // Prevents rider from seeing mount action,
    4,                                            // and from players getting stuck on dead units
    false,
    "",
    ""
];

_atrt addAction
[
    "Dismount",
    {
        //       _target,  _caller
        params ["_rider", "_atrt", "_actionId", "_arguments"];
        _atrt call BNAKC_fnc_dismountATRT;
    },
    nil,
    1.5,
    true,
    true,
    "",
    "_this == _originalTarget", // Prevent multiple addActions
    2,
    false,
    "",
    ""
];