if (isNil "BNA_KC_Jet_JetpackHandle") then
{
    // Handle visual effects, global so all players see them
    ["BNA_KC_Jet_JetpackFired", [ace_player]] call CBA_fnc_GlobalEvent;

    BNA_KC_Jet_JetpackHandle =
    [
        BNAKC_fnc_JetpackFrameHandler
    ] call CBA_fnc_AddPerFrameHandler;
};

if (isNil "BNA_KC_Jet_JetpackSoundHandle") then
{
    BNA_KC_Jet_JetpackSoundHandle =
    [
        BNAKC_fnc_JetpackSoundHandler,
        0.3 // Time inbetween each execution
    ] call CBA_fnc_AddPerFrameHandler;
};