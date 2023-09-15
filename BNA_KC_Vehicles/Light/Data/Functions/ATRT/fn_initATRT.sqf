/*
 * Author: 3AS, Edited DartRuffian
 * Creates mount/dismount actions for an AT-RT object.
 *
 * Arguments:
 * atrt: Object - The AT-RT
 *
 * Return Value:
 * None
 *
 * Example:
 * init = "(_this select 0) call BNAKC_fnc_initATRT";
 */


#define ATRT_BASE_HEALTH 50
params ["_atrt"];
if (isNull _atrt) exitWith {};

_atrt setAnimSpeedCoef 1.5; // Used to increase movement speed
_atrt disableAI "RADIOPROTOCOL"; // Stops ai from talking/sending messages

_atrt addEventHandler
[
    "HandleDamage",
    {
        params ["_atrt", "", "_damage", "", "", "", "", ""];
        private ["_atrtHelath"];

        _atrtHealth = _atrt getVariable ["BNA_KC_Health", ATRT_BASE_HEALTH];
        _atrtHealth = _atrtHealth - _damage;
        _atrt setVariable ["BNA_KC_Health", _atrtHealth, true];

        if (_atrtHealth <= 0) then
        {
            _atrt call BNAKC_fnc_spawnATRTSmoke;
            _atrt call BNAKC_fnc_dismountATRT;
            _atrt setDamage 1;

            _atrt removeEventHandler [_thisEvent, _thisEventHandler];
        };

        0;
    }
];

_atrt addEventHandler
[
    "Deleted",
    {
        // Clears up particles that are spawned by BNAKC_fnc_spawnATRTSmoke before the object is deleted
        params ["_entity"];
        private _allEffects = _entity getVariable ["BNA_KC_ATRT_effects", []];
        { deleteVehicle _x; } forEach _allEffects;
    }
];

_atrt addAction
[
    "Drive",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];

        _rider = _atrt getVariable ["BNA_KC_ATRT_Rider", _rider];
        [_rider, _atrt] call BNAKC_fnc_mountATRT;

        // Check if the player should be able to ride
        waitUntil
        {
            sleep 2;
            private _expression =
            (
                // Rider Checks
                !alive _rider or
                lifeState _rider == "INCAPACITATED" or
                _rider getVariable ["ACE_isUnconscious", false]
            );
            // See https://community.bistudio.com/wiki/waitUntil#Problems
            !isNil "_expression" and { _expression };
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
        params ["", "_atrt", "", ""];
        _atrt call BNAKC_fnc_dismountATRT;
    },
    nil,
    1.5,
    false,
    true,
    "",
    "_this == _originalTarget", // Prevent multiple addActions
    2,
    false,
    "",
    ""
];
