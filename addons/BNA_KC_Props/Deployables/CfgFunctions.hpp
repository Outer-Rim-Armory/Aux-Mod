class CfgFunctions
{
    class BNAKC
    {
        class Deployables
        {
            file = "BNA_KC_Props\Deployables\Data\Functions";
            class deployablePlace {};
            class deployablePickup {};
        };

        class Audio
        {
            class playLoopingAudio
            {
                file = "BNA_KC_Props\Deployables\Data\Functions\Audio\fn_playLoopingAudio.sqf";
            };
            class loopingAudioInit
            {
                file = "BNA_KC_Props\Deployables\Data\Functions\Audio\fn_loopingAudioInit.sqf";
            };
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_Deployable_MedicalDroid
    {
        init = "_droid = _this select 0; _droid spawn BNAKC_fnc_loopingAudioInit; _droid spawn BNAKC_fnc_areaSlowHeal";
    };
};