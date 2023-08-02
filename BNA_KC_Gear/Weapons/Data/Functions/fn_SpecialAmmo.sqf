params ["_eventHandlerType"];

#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})
#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define GET_STRING(config, _defaultValue) (if (isText (config)) then {getText (config)} else {_defaultValue})

[_eventHandlerType,
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    // Early exit to save time
    if (!isServer) exitWith {}; // Exit if not the server
    if (_ammo find "BNA_KC" isEqualTo -1 ) exitWith {}; // Exit if not a KC weapon


    [_unit, _ammo, _magazine, _projectile] spawn
    {
        params ["_unit", "_ammo", "_magazine", "_projectile"];
        
        DEV_LOG(_ammo);
        DEV_LOG(_magazine);

        private _delay = GET_NUMBER(configFile >> "CfgAmmo" >> _ammo >> "explosionTime", 0.1) - 0.1;

        DEV_LOG(_delay);
        sleep _delay;
        
        private _position = getPosATL _projectile;
        if (BNA_KC_DevMode) then
        {
            systemChat str _position;
            createVehicle ["VR_3DSelector_01_default_F", _position, [], 0, "CAN_COLLIDE"];
        };

        private _grenadeType = GET_STRING(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeType", "");
        DEV_LOG(_grenadeType);

        switch (_grenadeType) do
        {
            case "EMP":
            {
                // Play Sound Effect
                // Sound is scripted so that the Clone Wars sound can be enabled/disabled
                DEV_LOG("Is EMP. Playing sound");
                [ATLToASL _position] remoteExec ["BNAKC_fnc_PlayDroidPopperSound", [0, -2] select isDedicated];
                
                private _radiusDroid   = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Droid", 3);
                private _radiusDeka	= GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Deka", 5);
                private _radiusVehicle = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Vehicle", 5);

                // Units & Similar Objects
                // Get all nearby units
                private _nearbyUnits = nearestObjects [_position, ["Man"], _radiusDroid];

                private _shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], _radiusDeka];	// Droideka Shields
                private _tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDeka]; // 3AS's Droidkas require extra work

                // Remove or kill objects
                [_unit, _nearbyUnits] call BNAKC_fnc_KillDroids;
                // Filters out non-b1 droid units,
                // Kills them (gives kill credit to _unit)
                // Plays JLTS droid death sound

                [_tasDekas, _shieldObjects] call BNAKC_fnc_DisableDekaShields;

                // Temporarily disable vehicles
                if (BNA_KC_DroidPopper_DisableTime > 0 && _radiusVehicle > 0) then
                {
                    private _tanks = nearestObjects [_position, [], _radiusVehicle] select { ((toLowerAnsi typeOf _x find "_aat") > 0) };
                    [_tanks, BNA_KC_DroidPopper_DisableTime] call BNAKC_fnc_TempDisableVehicles;
                };
            };

            case "BACTA":
            {
                DEV_LOG("Is bacta grenade");
                private _healRadius   = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeBacta_Radius", 5);
                private _healDuration = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeBacta_Duration", 5);

                // nearEntities is faster than nearestObjects for normal units, but it does not sort by distance
                private _nearbyUnits = _position nearEntities ["Man", _healRadius];

                // If the list of handlers does not exist, create an empty array
                if (isNil "BNA_KC_Weap_SlowHealHandles") then
                {
                    BNA_KC_Weap_SlowHealHandles = [];
                };

                {
                    // For each unit, create a healing handler for it.
                    // Track the ids for all handlers to be deleted later
                    BNA_KC_Weap_SlowHealHandles pushback (_x call BNAKC_fnc_slowHeal);
                } forEach _nearbyUnits;

                if (BNA_KC_DevMode) then { systemChat format ["Waiting %1", _healDuration]; };
                sleep _healDuration;
                DEV_LOG("Wait over");

                // Delete smoke grenade, remove all handlers
                deleteVehicle _projectile;
                DEV_LOG("Removing remaining handlers");
                {
                    // if (BNA_KC_DevMode) then { systemChat format ["Removing handler %1", _x]; };
                    [_x] call CBA_fnc_removePerFrameHandler;
                    BNA_KC_Weap_SlowHealHandles deleteAt (BNA_KC_Weap_SlowHealHandles find _x); // remove value from list
                    // DEV_LOG(BNA_KC_Weap_SlowHealHandles);
                } forEach BNA_KC_Weap_SlowHealHandles;
            };
        };
    };
}
] call CBA_fnc_addEventHandler;