#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})
#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define GET_STRING(config, _defaultValue) (if (isText (config)) then {getText (config)} else {_defaultValue})

['ace_firedPlayer', {
_this spawn
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    // Early exit to save time
    if (!isServer) exitWith {}; // Exit if not the server
    if ( _ammo find "BNA_KC" isEqualTo -1 ) exitWith {}; // Exit if not a KC weapon

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

    switch (_grenadeType) do
    {
        case "EMP":
        {
            // Play Sound Effect
            // Sound is scripted so that the Clone Wars sound can be enabled/disabled
            DEV_LOG("Is EMP. Playing sound");
            [ATLToASL _position] remoteExec ["BNAKC_fnc_PlayDroidPopperSound", [0, -2] select isDedicated];
            
            private _radiusDroid   = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Droid", 3);
            private _radiusDeka    = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Deka", 5);
            private _radiusVehicle = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Vehicle", 5);

            // Units & Similar Objects
            // Get all nearby objects and filter out non-droids
            private _droidUnits = nearestObjects [_position, [], _radiusDroid] select { ((toLowerAnsi typeOf _x find "b1") > 0) };

            private _shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], _radiusDeka];    // Droideka Shields
            private _tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDeka]; // 3AS's Droidkas require extra work

            // Remove or kill objects
            {
                _x setDamage [1, true, _unit];
                playSound3D
                [
                    selectRandom getArray (configFile >> "CfgJLTSDeathSounds" >> "DeathDroid" >> "emp"),
                    _x
                ];
            } forEach _droidUnits; // Kill droid units

            [_tasDekas, _shieldObjects] call BNAKC_fnc_DisableDekaShields;

            // Temporarily disable vehicles
            if (BNA_KC_DroidPopper_DisableTime > 0 && _radiusVehicle > 0) then
            {
                private _tanks = nearestObjects [_position, [], _radiusVehicle] select { ((toLowerAnsi typeOf _x find "_aat") > 0) };
                [_tanks, BNA_KC_DroidPopper_DisableTime] call BNAKC_fnc_TempDisableVehicles;
            };
        };
    };
};
}] call CBA_fnc_addEventHandler;