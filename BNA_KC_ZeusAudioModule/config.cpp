class CfgEditorSubcategories
{
    class BNA_KC_AmbientSounds
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        
        scope = 2;
        scopeCurator = 2;

        displayName = "Ambient Sound Objects";
    };
};


class CfgPatches
{
    class BNA_KC_ZeusAudioModule
	{
        author = "Monkey";
        requiredAddons[] = {"A3_Sounds_F","BNA_KC_Gear"};
        requiredVersion = 0.1;
        units[] = 
		{
			"BNA_KC_Ambient_Restaurant",
			"BNA_KC_Ambient_Incoming",
			"BNA_KC_Restaurant_Radio"
		};
        weapons[] = {};
    };
};

#include "cfgMusic.hpp"

class CfgVehicles
{
    class Sound;
	class ls_radio;
	class BNA_KC_Restaurant_Radio: ls_radio
	{
		displayName = "[KC] Restaurant Ambience";
		editorCategory = "BNA_KC_Objects";
		editorSubcategory = "BNA_KC_AmbientSounds";
		class EventHandlers
		{
			init = "call BNAKC_fnc_PlayRestaurauntAmbience;";
		};
	};
    class BNA_KC_Ambient_Restaurant: Sound
	{
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Restaurant_SFX";
        displayName = "[KC] Restaurant Ambience";
    };
	class BNA_KC_Ambient_Incoming: Sound
	{
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Incoming_SFX";
        displayName = "[KC] Incoming Alarm";
    };
	class BNA_KC_Ambient_Disturbance: Sound
	{
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Disturbance_SFX";
        displayName = "[KC] Disturbance in the force";
    };
	class BNA_KC_Ambient_JediWarning: Sound
	{
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_JediWarning_SFX";
        displayName = "[KC] Jedi Warning";
    };
	class BNA_KC_Ambient_ATTE_Alarm: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_ATTE_Alarm_SFX";
        displayName = "[KC] ATTE Alarm";
    };
	class BNA_KC_Ambient_Radio_DK: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_DK_Radio_SFX";
        displayName = "[KC] DK Radio Chatter";
    };
};
class CfgSFX
{
    class BNA_KC_Ambient_Restaurant_SFX
	{
        name = "[KC] Restaurant Ambience";
        sounds[] = {BNA_KC_Ambient_Restaurant};
        BNA_KC_Ambient_Restaurant[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Restaurant_Ambience.ogg",db+10,1,200,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Incoming_SFX
	{
        name = "[KC] Incoming Alarm";
        sounds[] = {BNA_KC_Ambient_Incoming};
        BNA_KC_Ambient_Incoming[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\incoming_incoming.ogg",db+50,1,400,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Disturbance_SFX
	{
        name = "[KC] Disturbance in the force";
        sounds[] = {BNA_KC_Ambient_Disturbance};
        BNA_KC_Ambient_Disturbance[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Disturbance.ogg",db+10,1,200,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_JediWarning_SFX
	{
        name = "[KC] Jedi Warning";
        sounds[] = {BNA_KC_Ambient_JediWarning};
        BNA_KC_Ambient_JediWarning[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Jedi_Warning.ogg",db+10,1,200,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_ATTE_Alarm_SFX
	{
        name = "[KC] ATTE Alarm";
        sounds[] = {BNA_KC_Ambient_ATTE_Alarm};
        BNA_KC_Ambient_ATTE_Alarm[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\ATTE_Alarm.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Radio_DK
	{
        name = "[KC] DK Radio Chatter";
        sounds[] = {BNA_KC_Ambient_DK_Radio};
        BNA_KC_Ambient_ATTE_Alarm[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\DK_Radio_Chatter.ogg",db+100,1,100,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
};

class CfgSounds
{
	class BNA_KC_Ambient_Restaurant
	{
        name = "Restaurant Ambience";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Restaurant_Ambience.ogg", db+10, 1};
        titles[] = {2, "Restaurant"};
    };
	class BNA_KC_Ambient_Incoming
	{
        name = "Incoming Alarm";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\incoming_incoming.ogg", db+50, 1};
        titles[] = {2, "Incoming Alarm"};
    };
	class BNA_KC_Ambient_Disturbance
	{
        name = "Disturbance in the force";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Disturbance.ogg", db+10, 1};
        titles[] = {2, "Disturbance in the force"};
    };
	class BNA_KC_Ambient_JediWarning
	{
        name = "Jedi Warning";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\Jedi_Warning.ogg", db+10, 1};
        titles[] = {2, "Jedi Warning"};
    };
	class BNA_KC_Ambient_ATTE_Alarm
	{
        name = "ATTE Alarm";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\ATTE_Alarm.ogg", db+10, 1};
        titles[] = {2, "ATTE Alarm"};
    };
	class BNA_KC_Ambient_Radio_DK
	{
        name = "DK Radio Chatter";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ambience\DK_Radio_Chatter", db+10, 1};
        titles[] = {2, "DK Radio Chatter"};
    };
};