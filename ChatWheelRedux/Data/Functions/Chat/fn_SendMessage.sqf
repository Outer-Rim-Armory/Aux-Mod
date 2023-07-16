/*
 * Author: DartRuffian
 * Given a bearing, an integer ranging from 0 to 360.
 *
 * Arguments:
 * 0: The message to send, optionally with [tags] <String>
 *
 * Return Value:
 * None
 *
 * Example:
 * "I need ammo for my [weapon]" call CWR_fnc_SendMessage;
 * // Sends "I need ammo for my [KC] DC-15S" to all members in the player's group
 */

params ["_message"];

switch (true) do
{
    case ("[contact]" in _message):
    {
        private _bearing = round direction player;
        private _facing = _bearing call CWR_fnc_GetDirFromBearing;

        _message = _message insert [0, "Contact! "];
        _message = [_message, "[contact]", format ["%1, bearing %2", _facing, _bearing]] call CWR_fnc_StringReplace;
        [_message] spawn CWR_OpenDistanceMenu;
    };

    case ("[status]" in _message):
    {
        [_message] spawn CWR_OpenStatusMenu;
    };

    case ("[weapon]" in _message):
    {
        private _currentWeapon = getText (configFile >> "CfgWeapons" >> currentWeapon player >> "displayName");
        _message = [_message, "[weapon]", _currentWeapon] call CWR_fnc_StringReplace;
        _message call CWR_fnc_SendMessage;
    };

    case ("[launcher]" in _message):
    {
        [_message] spawn CWR_OpenLauncherMenu;
    };

    // Voice line tag, plays random sound from config class that matches the name in the tag
    // Checks for "[vl-ABC] ..."
    // regexMatch checks if the entire string matches the pattern, not just a part of it
    case (count (_message call CWR_fnc_FindAllVoicelineTags) > 0):
    {
        private _tag = _message call CWR_fnc_FindAllVoicelineTags select 0 select 0 select 0; // Returns nested array
        private _configName = _tag call CWR_fnc_GetConfigNameFromTag;

        _message = [_message, _tag, ""] call CWR_fnc_StringReplace;

        private _config = (configFile >> "CWR_VoiceLines" >> _configName);
        if (isClass _config) then
        {
            if ((time - (player getVariable ["CWR_playerLastUsedVoice", 0])) > CWR_Voice_CoolDown ) then
            {
                private _voiceLine = selectRandom getArray (_config >> "voiceLines");
                private _nearbyUnits = nearestObjects [player, ["Man"], 30];
                [_voiceLine, getPosASL player] remoteExecCall ["CWR_fnc_PlayLocalSound", (_nearbyUnits)];
                
                player setVariable ["CWR_playerLastUsedVoice", time];
            };
        };

        _message call CWR_fnc_SendMessage; // Used to check for further tags and send the chat message
    };

    default
    {
        params ["_message"];
        
        // Why is chat not global...
        [player, _message] remoteExecCall ["groupChat", (units group player)];
    };
};