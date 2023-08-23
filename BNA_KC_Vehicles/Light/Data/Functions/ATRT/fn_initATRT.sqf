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


params ["_atrt"];
if (isNull _atrt) exitWith {};

_atrt setAnimSpeedCoef 1.5; // Used to increase movement speed
_atrt disableAI "RADIOPROTOCOL"; // Stops ai from talking/sending messages

private _atrtDamageHandler = _atrt addEventHandler
[
    "HandleDamage",
    {
        params ["_atrt", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
        _atrtHealth = _atrt getVariable ["BNA_KC_Health", 100];
        _atrtHealth = _atrtHealth - _damage;
        _atrt setVariable ["BNA_KC_Health", _atrtHealth, true];
        
        0;
    }
];

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
            private _expression = !(alive _rider or lifeState _rider == "INCAPACITATED" or _rider getVariable ["ACE_isUnconscious", false]);
            // See https://community.bistudio.com/wiki/waitUntil#Problems
            !isNil "_expression" and { _expression or _atrt getVariable ["BNA_KC_Health", 100] <= 0 };
        };
        
        _atrt call BNAKC_fnc_dismountATRT;
        _atrt setDamage 1;
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
