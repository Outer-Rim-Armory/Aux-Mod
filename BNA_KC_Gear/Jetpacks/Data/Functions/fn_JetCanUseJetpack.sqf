params ["_unit"];

private _canJetpack =
(
    _unit call BNAKC_fnc_JetHasJetpack and    // True if unit is wearing a KC jetpack
    vehicle _unit == _unit and                // True if unit is not in a vehicle
    lifeState _unit != "INCAPACITATED" and    // True if unit is uncon
    !(surfaceIsWater getPos _unit and {((getPosASLW _unit) select 2) < 0.2}) and // True if unit is not in water
    alive _unit and
    [_unit] call ace_common_fnc_isAwake
);

_canJetpack;