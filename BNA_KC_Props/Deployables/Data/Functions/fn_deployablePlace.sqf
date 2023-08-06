params ["_unit", "_itemClass"];

private _objClass = getText(configFile >> "CfgWeapons" >> _itemClass >> "BNA_KC_Deployable_Object");
_unit removeItem _itemClass;

_unit playAction "PutDown";
[
    {
        params ["_unit", "_objClass"];

        private _direction = getDir _unit;
        private _position = getPosASL _unit vectorAdd [1.5 * sin _direction, 1.5 * cos _direction, 0.02];

        // Position will be off if you just created the object at the location
        private _object = _objClass createVehicle [0, 0, 0];
        _object setPosASL _position;

        // Start audio (if object should play sound)
        if (isText (configFile >> "CfgVehicles" >> _objClass >> "BNA_KC_Deployable_SoundLoop")) then
        {
            private _soundFilename = getText (configFile >> "CfgVehicles" >> _objClass >> "BNA_KC_Deployable_SoundLoop");
            private _soundDelay = getNumber (configFile >> "CfgVehicles" >> _objClass >> "BNA_KC_Deployable_SoundLoopDelay");

            _object setVariable ["BNA_KC_Object_playAudio", true];
            [_object, _soundFilename, _soundDelay] spawn BNAKC_fnc_playLoopingAudio;
        };
    },
    [_unit, _objClass],
    0.925
] call CBA_fnc_waitAndExecute;