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
    class Items_base_F;
	class ls_radio: Items_base_F
    {
        class EventHandlers;
    };
	class BNA_KC_Restaurant_Radio: ls_radio
	{
		displayName = "[KC] Restaurant Ambience";
		editorCategory = "BNA_KC_Objects";
		editorSubcategory = "BNA_KC_AmbientSounds";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) call BNAKC_fnc_PlayRestaurauntAmbience;";
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
	class BNA_KC_Ambient_DK_Radio: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_DK_Radio_SFX";
        displayName = "[KC] DK Radio Chatter";
    };
	class BNA_KC_Ambient_Carnage_Roar: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_Carnage_Roar_SFX";
        displayName = "[KC] Carnage Roar";
    };
	class BNA_KC_Ambient_Carnage_Roar_2: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_Carnage_Roar_2_SFX";
        displayName = "[KC] Carnage Roar 2";
    };
	class BNA_KC_Ambient_Carnage_Roar_3: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_Carnage_Roar_3_SFX";
        displayName = "[KC] Carnage Roar 3";
    };
	class BNA_KC_Ambient_Carnage_Roar_4: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_Carnage_Roar_4_SFX";
        displayName = "[KC] Carnage Roar 4";
    };
	class BNA_KC_Ambient_Let_There_Be_Carnage: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_Let_There_Be_Carnage_SFX";
        displayName = "[KC] Let There Be CARNAGE!!!";
    };
	class BNA_KC_Ambient_EPF_Radio_1: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_EPF_Radio_1_SFX";
        displayName = "[KC] Holonet News";
    };
	class BNA_KC_Ambient_EPF_Radio_2: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_EPF_Radio_2_SFX";
        displayName = "[KC] Holonet News 2";
    };
	class BNA_KC_Ambient_EPF_Radio_3: Sound
	{
        author = "Keeli";
        scope = 2;
        sound = "BNA_KC_Ambient_EPF_Radio_3_SFX";
        displayName = "[KC] Holonet News 3";
    };
};


class CfgSFX
{
    class BNA_KC_Ambient_Restaurant_SFX
	{
        name = "[KC] Restaurant Ambience";
        sounds[] = {BNA_KC_Ambient_Restaurant};
        BNA_KC_Ambient_Restaurant[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Restaurant_Ambience.ogg",db+10,1,200,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Incoming_SFX
	{
        name = "[KC] Incoming Alarm";
        sounds[] = {BNA_KC_Ambient_Incoming};
        BNA_KC_Ambient_Incoming[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\incoming_incoming.ogg",db+50,1,400,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Disturbance_SFX
	{
        name = "[KC] Disturbance in the force";
        sounds[] = {BNA_KC_Ambient_Disturbance};
        BNA_KC_Ambient_Disturbance[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Disturbance.ogg",db+10,1,200,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_JediWarning_SFX
	{
        name = "[KC] Jedi Warning";
        sounds[] = {BNA_KC_Ambient_JediWarning};
        BNA_KC_Ambient_JediWarning[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Jedi_Warning.ogg",db+10,1,200,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_ATTE_Alarm_SFX
	{
        name = "[KC] ATTE Alarm";
        sounds[] = {BNA_KC_Ambient_ATTE_Alarm};
        BNA_KC_Ambient_ATTE_Alarm[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\ATTE_Alarm.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_DK_Radio_SFX
	{
        name = "[KC] DK Radio Chatter";
        sounds[] = {BNA_KC_Ambient_DK_Radio};
        BNA_KC_Ambient_DK_Radio[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\DK_Radio_Chatter.ogg",db+50,1,100,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Carnage_Roar_SFX
	{
        name = "[KC] Carnage Roar";
        sounds[] = {BNA_KC_Ambient_Carnage_Roar};
        BNA_KC_Ambient_Carnage_Roar[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Carnage_Roar_2_SFX
	{
        name = "[KC] Carnage Roar 2";
        sounds[] = {BNA_KC_Ambient_Carnage_Roar_2};
        BNA_KC_Ambient_Carnage_Roar_2[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_2.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Carnage_Roar_3_SFX
	{
        name = "[KC] Carnage Roar 3";
        sounds[] = {BNA_KC_Ambient_Carnage_Roar_3};
        BNA_KC_Ambient_Carnage_Roar_3[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_3.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Carnage_Roar_4_SFX
	{
        name = "[KC] Carnage Roar 4";
        sounds[] = {BNA_KC_Ambient_Carnage_Roar_4};
        BNA_KC_Ambient_Carnage_Roar_4[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_4.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Let_There_Be_Carnage_SFX
	{
        name = "[KC] Let There Be Carnage";
        sounds[] = {BNA_KC_Ambient_Let_There_Be_Carnage};
        BNA_KC_Ambient_Let_There_Be_Carnage[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Let_There_Be_Carnage.ogg",db+50,1,500,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_EPF_Radio_1
	{
        name = "[KC] Holonet News";
        sounds[] = {BNA_KC_Ambient_EPF_Radio_1_SFX};
        BNA_KC_Ambient_EPF_Radio_1[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_1.ogg",db+80,1,100,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_EPF_Radio_2
	{
        name = "[KC] Holonet News 2";
        sounds[] = {BNA_KC_Ambient_EPF_Radio_2_SFX};
        BNA_KC_Ambient_EPF_Radio_2[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_2.ogg",db+80,1,100,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_EPF_Radio_3
	{
        name = "[KC] Holonet News 3";
        sounds[] = {BNA_KC_Ambient_EPF_Radio_3_SFX};
        BNA_KC_Ambient_EPF_Radio_3[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_3.ogg",db+80,1,100,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
};


class CfgSounds
{
	class BNA_KC_Ambient_Restaurant
	{
        name = "Restaurant Ambience";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Restaurant_Ambience.ogg", db+10, 1};
        titles[] = {2, "Restaurant"};
    };
	class BNA_KC_Ambient_Incoming
	{
        name = "Incoming Alarm";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\incoming_incoming.ogg", db+50, 1};
        titles[] = {2, "Incoming Alarm"};
    };
	class BNA_KC_Ambient_Disturbance
	{
        name = "Disturbance in the force";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Disturbance.ogg", db+10, 1};
        titles[] = {2, "Disturbance in the force"};
    };
	class BNA_KC_Ambient_JediWarning
	{
        name = "Jedi Warning";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Jedi_Warning.ogg", db+10, 1};
        titles[] = {2, "Jedi Warning"};
    };
	class BNA_KC_Ambient_ATTE_Alarm
	{
        name = "ATTE Alarm";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\ATTE_Alarm.ogg", db+10, 1};
        titles[] = {2, "ATTE Alarm"};
    };
	class BNA_KC_Ambient_Radio_DK
	{
        name = "DK Radio Chatter";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\DK_Radio_Radio_SFX.ogg", db+10, 1};
        titles[] = {2, "DK Radio Chatter"};
    };
    class BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar.ogg", db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "Roaring"};
    };
    class BNA_KC_Ambient_Carnage_Roar_2: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 2";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_2.ogg", db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Carnage_Roar_3: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 3";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_3.ogg", db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Carnage_Roar_4: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 4";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Carnage_Roar_4.ogg", db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Let_There_Be_Carnage
    {
        name = "Let There Be Carnage";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\Let_There_Be_Carnage.ogg", db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "'Let there be carnage!'"};
    };
    class BNA_KC_Ambient_Holonet
    {
        name = "Holonet News";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_1.ogg", db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News'"};
    };
    class BNA_KC_Ambient_Holonet_2
    {
        name = "Holonet News 2";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_2.ogg", db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 2'"};
    };
    class BNA_KC_Ambient_Holonet_3
    {
        name = "Holonet News 3";
        sound[] = {"BNA_KC_ZeusAudioModule\Data\Audio\Ambience\EPF_Radio_3.ogg", db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 3'"};
    };
};


class CfgFunctions
{
	class BNAKC
	{
		class Audio
		{
			file = "BNA_KC_ZeusAudioModule\Data\Functions";
			class PlayRestaurauntAmbience{};
		};
    };
};