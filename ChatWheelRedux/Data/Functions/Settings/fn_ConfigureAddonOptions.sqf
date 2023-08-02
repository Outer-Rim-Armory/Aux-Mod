// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting

[
    "CWR_CustomMessages_1",
    "EDITBOX",
    ["Custom Message 1", "Custom message that can be used in the Chat Wheel. Custom messages support [tags]."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    "Default",
    0,
    {
        [CWR_messagesHashMap, "Custom 1", _this] call CBA_fnc_hashSet;
    }
] call CBA_fnc_AddSetting;


[
    "CWR_CustomMessages_2",
    "EDITBOX",
    ["Custom Message 2", "Custom message that can be used in the Chat Wheel. Custom messages support [tags]."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    "Default",
    0,
    {
        [CWR_messagesHashMap, "Custom 2", _this] call CBA_fnc_hashSet;
    }
] call CBA_fnc_AddSetting;

[
    "CWR_CustomMessages_3",
    "EDITBOX",
    ["Custom Message 3", "Custom message that can be used in the Chat Wheel. Custom messages support [tags]."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    "Default",
    0,
    {
        [CWR_messagesHashMap, "Custom 3", _this] call CBA_fnc_hashSet;
    }
] call CBA_fnc_AddSetting;

[
    "CWR_CustomMessages_4",
    "EDITBOX",
    ["Custom Message 4", "Custom message that can be used in the Chat Wheel. Custom messages support [tags]."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    "Default",
    0,
    {
        [CWR_messagesHashMap, "Custom 4", _this] call CBA_fnc_hashSet;
    }
] call CBA_fnc_AddSetting;


[
    "CWR_AutoMessages_Enabled",
    "CHECKBOX",
    ["Enable Automated Messages", "Enables messages automatically being sent when certain actions are done. Throwing a grenade, getting hurt, etc."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    true,
    0,
    {}
] call CBA_fnc_AddSetting;


[
    "CWR_TagMenu_UseNewLine",
    "CHECKBOX",
    ["Separate Tag Menu examples with newline", "If enabled, example messages are separate with a newline, rather than an arrow."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    true,
    0,
    {},
    true
] call CBA_fnc_AddSetting;


[
    "CWR_Voice_EnableVoiceLines",
    "CHECKBOX",
    ["Enable Custom VoiceLines", "If enabled, you will hear voice lines when certain actions are done. Such as throwing a grenade, using a chat wheel option, etc."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    true,
    0,
    {},
    false
] call CBA_fnc_AddSetting;

[
    "CWR_Voice_CoolDown",
    "SLIDER",
    ["Custom VoiceLines Cooldown", "The minimum amount of time between custom voicelines. This cooldown is per player."],
    ["Keeli Company Aux Mod", "Chat Wheel"],
    [0, 15, 3, 0],
    1,
    {},
    false
] call CBA_fnc_AddSetting;