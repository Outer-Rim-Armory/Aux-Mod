#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})

_this spawn
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    // Early exit to save time
    if (!isServer) exitWith {}; // Exit if not the server
    if ( _ammo find "BNA_KC" isEqualTo -1 ) exitWith {}; // Exit if not a KC weapon

    DEV_LOG(_ammo);
    DEV_LOG(_magazine);

    #define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
    #define GET_STRING(config, _defaultValue) (if (isText (config)) then {getText (config)} else {_defaultValue})

    _delay = GET_NUMBER(configFile >> "CfgAmmo" >> _ammo >> "explosionTime", 0.1) - 0.1;

    DEV_LOG(_delay);
    sleep _delay;
    
    private _position = getPosATL _projectile;
    if (BNA_KC_DevMode) then
    {
        systemChat str _position;
        createVehicle ["VR_3DSelector_01_default_F", _position, [], 0, "CAN_COLLIDE"];
    };

    _grenadeType = GET_STRING(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeType", "");

    switch (_grenadeType) do
    {
        case "EMP":
        {
            // Play Sound Effect
            // Sound is scripted so that the Clone Wars sound can be enabled/disabled
            DEV_LOG("Is EMP. Playing sound");
            if (BNA_KC_DroidPopper_TCWSoundEnabled) then
            {
                [[
                    "BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DroidPopper_Exp.wss",
                    "",
                    false,
                    ATLToASL _position,
                    BNA_KC_DroidPopper_TCWSoundVolume * 2,
                    BNA_KC_DroidPopper_TCWSoundPitch,
                    0,
                    0,
                    true
                ]] remoteExec ["playSound3D", [0, -2] select isDedicated];
            }
            else
            {
                playSound3D ["MRC\JLTS\weapons\Core\sounds\emp_exp\exp_emp_1.wss", "", false, ATLToASL _position, 1, 1];
                DEV_LOG("Played JLTS Sound");
            };
            
            _radiusDroid   = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Droid", 3);
            _radiusDeka    = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Deka", 5);
            _radiusVehicle = GET_NUMBER(configFile >> "CfgMagazines" >> _magazine >> "BNA_KC_GrenadeEMP_Radius_Vehicle", 5);

            // Units & Similar Objects
            // Get all nearby objects and filter out non-droids
            _droidUnits = nearestObjects [_position, [], _radiusDroid] select { ((toLowerAnsi typeOf _x find "b1") > 0) };

            _shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], _radiusDeka];    // Droideka Shields
            _tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDeka]; // 3AS's Droidkas require extra work

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
                _tanks = nearestObjects [_position, [], _radiusVehicle] select { ((toLowerAnsi typeOf _x find "_aat") > 0) };
                [_tanks, BNA_KC_DroidPopper_DisableTime] call BNAKC_fnc_TempDisableVehicle;
            };
        };
    };
};