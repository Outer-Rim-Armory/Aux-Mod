params ["_unit"];

private _canJetpack =
(
    _unit call BNAKC_fnc_JetHasJetpack and    // True if unit is wearing a KC jetpack
    vehicle _unit == _unit and                // True if unit is not in a vehicle
    lifeState _unit != "INCAPACITATED" and    // True if unit is uncon
    not (surfaceIsWater getPos _unit and {((getPosASLW _unit) select 2) < 0.2}) // True if unit is not in water
);

_canJetpack;