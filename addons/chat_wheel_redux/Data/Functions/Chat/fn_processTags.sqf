params ["_message"];

_message call CWR_fnc_devLog;
_message = switch (true) do {
    case ("[distance]" in _message): {
        [_message] spawn CWR_OpenDistanceMenu;
    };

    case ("[status]" in _message): {
        [_message] spawn CWR_OpenStatusMenu;
    };

    case ("[bearing]" in _message): {
        private _bearing = round direction player;
        _message = [_message, "[bearing]", str _bearing] call CWR_fnc_stringReplace;
        _message call CWR_fnc_processTags;
    };

    case ("[direction]" in _message): {
        private _bearing = round direction player;
        private _facing = _bearing call CWR_fnc_getDirFromBearing;

        _message = [_message, "[direction]", _facing] call CWR_fnc_stringReplace;
        _message call CWR_fnc_processTags;
    };

    case ("[weapon]" in _message): {
        private _currentWeapon = getText (configFile >> "CfgWeapons" >> currentWeapon player >> "displayName");
        _message = [_message, "[weapon]", _currentWeapon] call CWR_fnc_stringReplace;
        _message call CWR_fnc_processTags;
    };

    case ("[launcher]" in _message): {
        [_message] spawn CWR_OpenLauncherMenu;
    };

    // Voice line tag, plays random sound from config class that matches the name in the tag
    // Checks for "[vl-ABC] ..."
    // regexMatch checks if the entire string matches the pattern, not just a part of it
    case (count (_message call CWR_fnc_findAllVoicelineTags) > 0): {
        private _tag = _message call CWR_fnc_findAllVoicelineTags select 0 select 0 select 0; // Returns nested array
        private _configName = _tag call CWR_fnc_getConfigNameFromTag;

        _message = [_message, _tag, ""] call CWR_fnc_stringReplace;

        private _config = (configFile >> "CWR_VoiceLines" >> _configName);
        if (isClass _config) then {
            if ((time - (player getVariable ["CWR_playerLastUsedVoice", -CWR_Voice_CoolDown])) > CWR_Voice_CoolDown ) then {
                private _voiceLine = selectRandom getArray (_config >> "voiceLines");
                private _nearbyPlayers = [getPosATL player, CWR_Voice_VoiceRadius, CWR_Voice_RCUnitsSendsMessages] call CWR_fnc_getNearbyPlayers;
 {
                    [_voiceLine, getPosASL player] remoteExecCall ["CWR_fnc_playLocalSound", _x];
                } forEach _nearbyPlayers;

                player setVariable ["CWR_playerLastUsedVoice", time];
            };
        };

        _message call CWR_fnc_processTags; // Used to check for further tags
    };

    default {
        params ["_message"];

        _message;
    };
};

_message;
