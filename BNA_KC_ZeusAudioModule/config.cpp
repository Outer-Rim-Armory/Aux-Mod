class CfgPatches {
    class BNA_KC_ZeusAudioModule {
        author = "Monkey";
        requiredAddons[] = {"A3_Sounds_F","BNA_KC_Gear"};
        requiredVersion = 0.1;
        units[] = 
		{
			"BNA_KC_Ambient_Restaurant",
			//"BNA_KC_Ambient_Radio1",
			//"BNA_KC_Ambient_Radio2",
			//"BNA_KC_Ambient_Radio3",
			"BNA_KC_Ambient_Incoming",
			"BNA_KC_Restaurant_Radio"
		};
        weapons[] = {};
    };
};

class CfgVehicles {
    class Sound;
	class ls_radio;
    class BNA_KC_Ambient_Restaurant: Sound {
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Restaurant_SFX";
        displayName = "[KC] Restaurant Ambience";
    };
	/*
	class BNA_KC_Ambient_Radio1: Sound {
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Radio1_SFX";
        displayName = "[KC] Radio Ambience #1";
    };
	class BNA_KC_Ambient_Radio2: Sound {
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Radio2_SFX";
        displayName = "[KC] Radio Ambience #2";
    };
	class BNA_KC_Ambient_Radio3: Sound {
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Radio3_SFX";
        displayName = "[KC] Radio Ambience #3";
    };*/
	class BNA_KC_Ambient_Incoming: Sound {
        author = "Monkey";
        scope = 2;
        sound = "BNA_KC_Ambient_Incoming_SFX";
        displayName = "[KC] Incoming Alarm";
    };
	class BNA_KC_Restaurant_Radio: ls_radio
	{
		displayName = "[KC] Restaurant Ambience";
		editorCategory = "BNA_KC_EditorCategory_Objects";
		editorSubcategory = "BNA_KC_EditorSubcategory_Ambi";
		class EventHandlers
		{
			init = "call BNAKC_fnc_PlayRestaurauntAmbience;";
		};
	};
};
class CfgSFX {
    class BNA_KC_Ambient_Restaurant_SFX {
        name = "[KC] Restaurant Ambience";
        sounds[] = {BNA_KC_Ambient_Restaurant};
        BNA_KC_Ambient_Restaurant[] = {"BNA_KC_Gear\Data\Audio\Ambience\Restaurant_Ambience.ogg",db+10,1,200,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };/*
	class BNA_KC_Ambient_Radio1_SFX {
        name = "[KC] Radio Ambience #1";
        sounds[] = {BNA_KC_Ambient_Radio1};
        BNA_KC_Ambient_Radio1[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music1.wav",db+10,1,50,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Radio2_SFX {
        name = "[KC] Radio Ambience #2";
        sounds[] = {BNA_KC_Ambient_Radio2};
        BNA_KC_Ambient_Radio2[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music2.wav",db+10,1,50,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };
	class BNA_KC_Ambient_Radio3_SFX {
        name = "[KC] Radio Ambience #3";
        sounds[] = {BNA_KC_Ambient_Radio3};
        BNA_KC_Ambient_Radio3[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music3.wav",db+10,1,50,1,0,0,0};
        empty[] = {"",0,0,0,0,0,0,0};
    };*/
	class BNA_KC_Ambient_Incoming_SFX {
        name = "[KC] Incoming Alarm";
        sounds[] = {BNA_KC_Ambient_Incoming};
        BNA_KC_Ambient_Incoming[] = {"BNA_KC_Gear\Data\Audio\Ambience\incoming_incoming.ogg",db+50,1,400,1,2,3,4};
        empty[] = {"",0,0,0,0,0,0,0};
    };
};

class CfgSounds {
	class BNA_KC_Ambient_Restaurant {
        name = "Restaurant Ambience";
        //sound[] = {"BNA_KC_Gear\Data\Audio\Radio_Music1.wav", db+10, 1};
        sound[] = {"BNA_KC_Gear\Data\Audio\Ambience\Restaurant_Ambience.ogg", db+10, 1};
        titles[] = {2, "Restaurant"};
    };/*
	class BNA_KC_Ambient_Radio1 {
        name = "Radio Ambience #1";
        //sound[] = {"BNA_KC_Gear\Data\Audio\Radio_Music1.wav", db+10, 1};
        sound[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music1.wav", db+10, 1};
        titles[] = {2, "Radio 1"};
    };
	class BNA_KC_Ambient_Radio2 {
        name = "Radio Ambience #2";
        //sound[] = {"BNA_KC_Gear\Data\Audio\Radio_Music1.wav", db+10, 1};
        sound[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music2.wav", db+10, 1};
        titles[] = {2, "Radio 2"};
    };
	class BNA_KC_Ambient_Radio3 {
        name = "Radio Ambience #3";
        //sound[] = {"BNA_KC_Gear\Data\Audio\Radio_Music1.wav", db+10, 1};
        sound[] = {"BNA_KC_Gear\Data\Audio\Ambience\Radio_Music3.wav", db+10, 1};
        titles[] = {2, "Radio 3"};
    };*/
	class BNA_KC_Ambient_Incoming {
        name = "Incoming Alarm";
        //sound[] = {"BNA_KC_Gear\Data\Audio\Radio_Music1.wav", db+10, 1};
        sound[] = {"BNA_KC_Gear\Data\Audio\Ambience\incoming_incoming.ogg", db+50, 1};
        titles[] = {2, "Incoming Alarm"};
    };
};