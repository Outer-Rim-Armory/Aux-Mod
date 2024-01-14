#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a vehicle's EMP effect
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * objectParent ace_player call FUNC(canUseVehicleEMP);
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_cooldown", "_lastUsedEMP"];
TRACE_1("fnc_useVehicleEMP",_vehicle);

_vehicle setVariable [QGVAR(lastUsedEMP), CBA_missionTime];

_radiusDroid = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(empRadiusDroid),
    EMP_RADIUS_DROID_DEFAULT
] call BIS_fnc_returnConfigEntry;
_radiusDroideka = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(empRadiusDroideka),
    EMP_RADIUS_DROIDEKA_DEFAULT
] call BIS_fnc_returnConfigEntry;
_radiusVehicle = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(empRadiusVehicle),
    EMP_RADIUS_VEHICLE_DEFAULT
] call BIS_fnc_returnConfigEntry;

_positionASL = getPosASL _vehicle;
_positionAGL = ASLToAGL _positionASL;

_nearbyPlayers = [_positionAGL, 70] call EFUNC(core,getNearbyUnits);
_nearbyPlayers = _nearbyPlayers select {
    _x call ace_common_fnc_isPlayer
};
{
    [QEGVAR(core,localSound), [
            QPATHTOF(data\audio\emp\TCW_Explode.wss),
            "\MRC\JLTS\weapons\Core\sounds\emp_exp\exp_emp_1.wss",
            _positionASL,
            QGVAR(empTCWSoundEnabled),
            QGVAR(empSoundVolume),
            QGVAR(empSoundPitch)
        ],
        _x
    ] call CBA_fnc_targetEvent;
} forEach _nearbyPlayers;

_nearbyUnits = [_positionAGL, _radiusDroid] call EFUNC(core,getNearbyUnits);

_nearbyVehicles = _positionAGL nearEntities [["Air", "LandVehicle"], _radiusVehicle];
_nearbyVehicles = _nearbyVehicles - [_vehicle];

// 3AS and 501st Droidekas use different methods of shields, and require different handling
_nearbyDroidekas = _positionAGL nearEntities [["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDroideka];
_droidekaShields = _positionAGL nearObjects ["RD501_Droideka_Shield", _radiusDroideka];

TRACE_5("Vehicle EMP",_positionAGL,_nearbyUnits,_nearbyVehicles,_nearbyDroidekas,_droidekaShields);

[_nearbyUnits, _unit] call FUNC(droidDeathEffect);
[_nearbyVehicles, GVAR(empVehicleDisableDuration)] call FUNC(disableVehicles);
[_nearbyDroidekas, _droidekaShields] call FUNC(disableDroidekaShields);

nil;