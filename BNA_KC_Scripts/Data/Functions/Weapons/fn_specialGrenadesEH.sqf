params ["_eventHandlerType"];

[_eventHandlerType,
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    private ["_simulation"];

    _simulation =
    [
        (configFile >> "CfgAmmo" >> _ammo),
        "simulation",
        ""
    ] call BIS_fnc_returnConfigEntry;
    if !(_simulation in ["shotGrenade", "shotSmoke", "shotSmokeX"]) exitWith {};

    [_unit, _ammo, _magazine, _projectile] spawn
    {
        params ["_unit", "_ammo", "_magazine", "_projectile"];
        private ["_delay", "_position", "_grenadeType"];

        format ["Ammo: %1 | Mag: %2", _ammo, _magazine] call BNAKC_fnc_devLog;

        _delay =
        ([
            (configFile >> "CfgAmmo" >> _ammo),
            "explosionTime",
            0.1
        ] call BIS_fnc_returnConfigEntry) - 0.1;

        sleep _delay;

        _grenadeType =
        [
            (configFile >> "CfgMagazines" >> _magazine),
            "BNA_KC_GrenadeType",
            ""
        ] call BIS_fnc_returnConfigEntry;
        _grenadeType call BNAKC_fnc_devLog;

        _position = getPosATL _projectile;
        if (BNA_KC_DevMode) then
        {
            format ["%1 grenade exploded at %2", _grenadeType, _position] call BNAKC_fnc_devLog;
            createVehicleLocal ["VR_3DSelector_01_default_F", _position, [], 0, "CAN_COLLIDE"];
        };

        switch (_grenadeType) do
        {
            case "EMP":
            {
                private ["_radiusDroid", "_radiusDeka", "_radiusVehicle", "_nearbyUnits", "_shieldObjects", "_tasDekas", "_tanks"];

                [ATLToASL _position] remoteExec ["BNAKC_fnc_playDroidPopperSound", [0, -2] select isDedicated];

                _radiusDroid =
                [
                    (configFile >> "CfgMagazines" >> _magazine),
                    "BNA_KC_GrenadeEMP_Radius_Droid",
                    3
                ] call BIS_fnc_returnConfigEntry;
                _radiusDeka =
                [
                    (configFile >> "CfgMagazines" >> _magazine),
                    "BNA_KC_GrenadeEMP_Radius_Deka",
                    5
                ] call BIS_fnc_returnConfigEntry;
                _radiusVehicle =
                [
                    (configFile >> "CfgMagazines" >> _magazine),
                    "BNA_KC_GrenadeEMP_Radius_Vehicle",
                    5
                ] call BIS_fnc_returnConfigEntry;

                _nearbyUnits = _position nearEntities ["CAManBase", _radiusDroid];

                _shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], _radiusDeka];
                _tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDeka];

                [_unit, _nearbyUnits] call BNAKC_fnc_killDroids;
                [_tasDekas, _shieldObjects] call BNAKC_fnc_disableDekaShields;

                if (BNA_KC_DroidPopper_DisableTime > 0 && _radiusVehicle > 0) then
                {
                    _tanks = nearestObjects [_position, [], _radiusVehicle] select { ((toLowerAnsi typeOf _x find "_aat") > 0) };
                    [_tanks, BNA_KC_DroidPopper_DisableTime] call BNAKC_fnc_tempDisableVehicles;
                };
            };

            case "BACTA":
            {
                private ["_healDuration", "_healRadius", "_healRate", "_currentTime", "_endTime"];
                _healDuration =
                [
                    configFile >> "CfgMagazines" >> _magazine,
                    "BNA_KC_GrenadeBacta_Duration",
                    5
                ] call BIS_fnc_returnConfigEntry;

                _healRadius =
                [
                    configFile >> "CfgMagazines" >> _magazine,
                    "BNA_KC_Medical_areaHealRadius",
                    5
                ] call BIS_fnc_returnConfigEntry;
                _healRate =
                [
                    configFile >> "CfgMagazines" >> _magazine,
                    "BNA_KC_Medical_areaHealRate",
                    5
                ] call BIS_fnc_returnConfigEntry;
                [_projectile, _healRadius, _healRate] call BNAKC_fnc_areaSlowHeal;

                _currentTime = time max serverTime;
                _endTime = _currentTime + _healDuration;
                waitUntil {time max serverTime >= _endTime;};

                format ["Duration ended, deleting grenade %1", _projectile] call BNAKC_fnc_devLog;
                deleteVehicle _projectile;
            };
        };
    };
}
] call CBA_fnc_addEventHandler;