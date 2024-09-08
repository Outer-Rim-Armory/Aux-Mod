if !(profileNamespace getVariable ["CWR_chatwheel_seenFirstUseHint", false]) then {
    [["CWR_chatwheel_UserGuide", "KeybindsAndOptions"], 15, "", 35, "", true, true, true] call BIS_fnc_advHint;
    profileNamespace setVariable ["CWR_chatwheel_seenFirstUseHint", true];
};