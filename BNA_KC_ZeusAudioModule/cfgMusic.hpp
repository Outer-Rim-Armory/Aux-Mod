class CfgMusicClasses
{
	class BNA_KC_SWMusic
	{
		displayName = "[KC] Star Wars";
	};
	class BNA_KC_VGMusic
	{
		displayName = "[KC] Video Games";
	};
	class BNA_KC_AnimeMusic
	{
		displayName = "[KC] Anime";
	};
	class BNA_KC_OtherMusic
	{
		displayName = "[KC] Other";
	};
	class BNA_KC_SFX
	{
		displayName = "[KC] Sound Effects"
	};
};

class CfgMusic
{
	class BNA_KC_BattlestarOST
	{
		name = "[BsG] Online OST"; // Name displayed in music list
		// Battlestar Galactica
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Battlestar_Galactica_Online.ogg",db+0,1}; // Path to audio file, volume, pitch
		duration = 531; // Song duration in seconds
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_BattlestarPreludeToWar
	{
		name = "[BsG] Prelude To War";
		// Battle Star Galactica
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\battlestar_galactica_prelude_to_war.ogg",db+0,1};
		duration = 502;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_AoTOST
	{
		name = "[Aot] Before Lights Out";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\AoT_Before_Lights_Out.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_Vogel
	{
		name = "[AoT] Vogel im Käfig";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Vogel_im_Käfig.ogg",db+0,1};
		duration = 380;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_SymphonicSuite
	{
		name = "[AoT] Symphonic Suite";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SymphonicSuite.ogg",db+0,1};
		duration = 313;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_BigGirl
	{
		name = "[AoT] YouSeeBIGGIRL";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\YouSeeBIGGIRL.ogg",db+0,1};
		duration = 359;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};


	class BNA_KC_CLU
	{
		name = "[Tron] C.L.U";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\C.L.U.ogg",db+0,1};
		duration = 279;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	class BNA_KC_Rectifier
	{
		name = "[Tron] Rectifier";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Rectifier.ogg",db+0,1};
		duration = 134;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ANewEnemy
	{
		name = "[Shogun] A New Enemy";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\A_New_Enemy-Shogun.ogg",db+0,1};
		duration = 270;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Oyoiyoi
	{
		name = "[Shogun] Oyoiyoi";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Oyoiyoi.ogg",db+0,1};
		duration = 153;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Tsunami
	{
		name = "[Shogun] Tsunami";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Tsunami.ogg",db+0,1};
		duration = 124;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ArabicVictory
	{
		name = "[TW] Arabic Victory";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Arabic_Victory-Rome.ogg",db+0,1};
		duration = 78;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Divinitus
	{
		name = "[TW] Divinitus";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Divinitus-Rome.ogg",db+0,1};
		duration = 110;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_EasternIntro
	{
		name = "[TW] Eastern Intro";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Eastern_Intro-Rome.ogg",db+0,1};
		duration = 90;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_JourneytoRome
	{
		name = "[TW] Journey to Rome";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Journey_to_Rome-Rome.ogg",db+0,1};
		duration = 139;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mayhem
	{
		name = "[TW] Mayhem";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mayhem-Rome.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MeleeCafe
	{
		name = "[TW] Melee Cafe";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Melee_Cafe-Rome.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mobilize
	{
		name = "[TW] Mobilize";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mobilize-Rome.ogg",db+0,1};
		duration = 116;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SoldiersChant
	{
		name = "[TW] Soldiers Chant";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Soldiers_Chant-Rome.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_Delightful
	{
		name = "[SW] Delightful";
		// Ahsoka Series
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ahsoka_Delightful.ogg",db+0,1};
		duration = 136;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};
	class BNA_KC_GeonosisRadioChatter
	{
		name = "[SW] Geonosis Radio Chatter";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Geonosis_Radio_Chatter.ogg",db+0,1};
		duration = 544;
		musicClass = "BNA_KC_SFX"; // Music category
	};
	class BNA_KC_IonCannon
	{
		name = "[SW] Ion Cannon";
		// Malevolence Music - Star Wars Clone Wars
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ion_Cannon_Kevin_Kiner.ogg",db+0,1};
		duration = 128;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};


	class BNA_KC_Comona
	{
		name = "[Ace] Comona";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Comona_Ace_Combat.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Enchanter
	{
		name = "[Ace] Enchanter";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Enchanter_Ace_Combat.ogg",db+0,1};
		duration = 485;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MagicSpear
	{
		name = "[Ace] Magic Spear";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Magic_Spear_Ace_Combat.ogg",db+0,1};
		duration = 246;
		musicClass = "BNA_KC_VGMusic"; // "Keeli Video Game Music";
	};


	class BNA_KC_SquadMain
	{
		name = "[Squad] Main Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_main.ogg",db+0,1};
		duration = 180;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadDowntime
	{
		name = "[Squad] Downtime";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_downtime.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadZechariah
	{
		name = "[Squad] Zechariah";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_zechariah.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_DeliverHope
	{
		name = "[Halo] Deliver Hope";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope.ogg",db+0,1};
		duration = 120;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_DeliverHopePiano
	{
		name = "[Halo] Deliver Hope (Piano)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope_Piano.ogg",db+0,1};
		duration = 127;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_WarThunderMain
	{
		name = "[WT] Main Theme";
		// War Thunder
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\war_thunder_main.ogg",db+0,1};
		duration = 292;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_NoEscape
	{
		name = "[LoU] No Escape (All Gone)";
		// The Last of Us
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\All_Gone_No_Escape.ogg",db+0,1};
		duration = 174;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ShepherdofFire
	{
		name = "[AS] Shepherd of Fire";
		// Avenged Sevenfold
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Avenged_Sevenfold_Shepherd_Of_Fire.ogg",db+0,1};
		duration = 319;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	class BNA_KC_BridgeofDeath
	{
		name = "[Chern] Bridge of Death";
		// Chernobyl TV Series
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Bridge_of_Death_Chernobyl.ogg",db+0,1};
		duration = 284;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	class BNA_KC_FatalisMedley
	{
		name = "[MH] Fatalis Medley";
		// Monster Hunter
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Fatalis_Medley_Monster_Hunter.ogg",db+0,1};
		duration = 1093;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ItHasToBeThisWay
	{
		name = "[MG] It Has To Be This Way";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\It_Has_To_Be_This_Way.ogg",db+0,1};
		duration = 175;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_DBSBrolysTheme
	{
		name = "[DbS] Broly's Theme";
		// Dragon Ball Super
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\dbs_brolys_theme.ogg",db+0,1};
		duration = 473;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};


	class BNA_KC_InterstellarMountains
	{
		name = "[IntrStlr] Mountains";
		// Interstellar
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\intersellar_mountains.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	

	class BNA_KC_ProjectRealityMain
	{
		name = "[PR] Main Theme";
		// Project Reality
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\project_reality_main.ogg",db+0,1};
		duration = 501;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
};