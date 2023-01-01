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
	class BNA_KC_BattlestarPreludeToWar: BNA_KC_BattlestarOST
	{
		name = "[BsG] Prelude To War";
		// Battle Star Galactica
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\battlestar_galactica_prelude_to_war.ogg",db+0,1};
		duration = 502;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_AoTOST: BNA_KC_BattlestarOST
	{
		name = "[Aot] Before Lights Out";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\AoT_Before_Lights_Out.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_Vogel: BNA_KC_BattlestarOST
	{
		name = "[AoT] Vogel im Käfig";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Vogel_im_Käfig.ogg",db+0,1};
		duration = 380;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_SymphonicSuite: BNA_KC_BattlestarOST
	{
		name = "[AoT] Symphonic Suite";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SymphonicSuite.ogg",db+0,1};
		duration = 313;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};
	class BNA_KC_BigGirl: BNA_KC_BattlestarOST
	{
		name = "[AoT] YouSeeBIGGIRL";
		// Attack on Titan
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\YouSeeBIGGIRL.ogg",db+0,1};
		duration = 359;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};


	class BNA_KC_CLU: BNA_KC_BattlestarOST
	{
		name = "[Tron] C.L.U";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\C.L.U.ogg",db+0,1};
		duration = 279;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	class BNA_KC_Rectifier: BNA_KC_BattlestarOST
	{
		name = "[Tron] Rectifier";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Rectifier.ogg",db+0,1};
		duration = 134;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ANewEnemy: BNA_KC_BattlestarOST
	{
		name = "[Shogun] A New Enemy";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\A_New_Enemy-Shogun.ogg",db+0,1};
		duration = 270;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Oyoiyoi: BNA_KC_BattlestarOST
	{
		name = "[Shogun] Oyoiyoi";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Oyoiyoi.ogg",db+0,1};
		duration = 153;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Tsunami: BNA_KC_BattlestarOST
	{
		name = "[Shogun] Tsunami";
		// Total War: Shogun 2 Fall of the Samurai
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Tsunami.ogg",db+0,1};
		duration = 124;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ArabicVictory: BNA_KC_BattlestarOST
	{
		name = "[TW] Arabic Victory";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Arabic_Victory-Rome.ogg",db+0,1};
		duration = 78;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Divinitus: BNA_KC_BattlestarOST
	{
		name = "[TW] Divinitus";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Divinitus-Rome.ogg",db+0,1};
		duration = 110;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_EasternIntro: BNA_KC_BattlestarOST
	{
		name = "[TW] Eastern Intro";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Eastern_Intro-Rome.ogg",db+0,1};
		duration = 90;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_JourneytoRome: BNA_KC_BattlestarOST
	{
		name = "[TW] Journey to Rome";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Journey_to_Rome-Rome.ogg",db+0,1};
		duration = 139;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mayhem: BNA_KC_BattlestarOST
	{
		name = "[TW] Mayhem";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mayhem-Rome.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MeleeCafe: BNA_KC_BattlestarOST
	{
		name = "[TW] Melee Cafe";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Melee_Cafe-Rome.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mobilize: BNA_KC_BattlestarOST
	{
		name = "[TW] Mobilize";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mobilize-Rome.ogg",db+0,1};
		duration = 116;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SoldiersChant: BNA_KC_BattlestarOST
	{
		name = "[TW] Soldiers Chant";
		// Rome: Total War
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Soldiers_Chant-Rome.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_Delightful: BNA_KC_BattlestarOST
	{
		name = "[SW] Delightful";
		// Ahsoka Series
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ahsoka_Delightful.ogg",db+0,1};
		duration = 136;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};
	class BNA_KC_GeonosisRadioChatter: BNA_KC_BattlestarOST
	{
		name = "[SW] Geonosis Radio Chatter";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Geonosis_Radio_Chatter.ogg",db+0,1};
		duration = 544;
		musicClass = "BNA_KC_SFX"; // Music category
	};
	class BNA_KC_IonCannon: BNA_KC_BattlestarOST
	{
		name = "[SW] Ion Cannon";
		// Malevolence Music - Star Wars Clone Wars
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ion_Cannon_Kevin_Kiner.ogg",db+0,1};
		duration = 128;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};


	class BNA_KC_Comona: BNA_KC_BattlestarOST
	{
		name = "[Ace] Comona";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Comona_Ace_Combat.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Enchanter: BNA_KC_BattlestarOST
	{
		name = "[Ace] Enchanter";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Enchanter_Ace_Combat.ogg",db+0,1};
		duration = 485;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MagicSpear: BNA_KC_BattlestarOST
	{
		name = "[Ace] Magic Spear";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Magic_Spear_Ace_Combat.ogg",db+0,1};
		duration = 246;
		musicClass = "BNA_KC_VGMusic"; // "Keeli Video Game Music";
	};


	class BNA_KC_SquadMain: BNA_KC_BattlestarOST
	{
		name = "[Squad] Main Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_main.ogg",db+0,1};
		duration = 180;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadDowntime: BNA_KC_BattlestarOST
	{
		name = "[Squad] Downtime";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_downtime.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadZechariah: BNA_KC_BattlestarOST
	{
		name = "[Squad] Zechariah";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_zechariah.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_DeliverHope: BNA_KC_BattlestarOST
	{
		name = "[Halo] Deliver Hope";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope.ogg",db+0,1};
		duration = 120;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_DeliverHopePiano: BNA_KC_BattlestarOST
	{
		name = "[Halo] Deliver Hope (Piano)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope_Piano.ogg",db+0,1};
		duration = 127;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_WarThunderMain: BNA_KC_BattlestarOST
	{
		name = "[WT] Main Theme";
		// War Thunder
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\war_thunder_main.ogg",db+0,1};
		duration = 292;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_NoEscape: BNA_KC_BattlestarOST
	{
		name = "[LoU] No Escape (All Gone)";
		// The Last of Us
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\All_Gone_No_Escape.ogg",db+0,1};
		duration = 174;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ShepherdofFire: BNA_KC_BattlestarOST
	{
		name = "[AS] Shepherd of Fire";
		// Avenged Sevenfold
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Avenged_Sevenfold_Shepherd_Of_Fire.ogg",db+0,1};
		duration = 319;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	class BNA_KC_BridgeofDeath: BNA_KC_BattlestarOST
	{
		name = "[Chern] Bridge of Death";
		// Chernobyl TV Series
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Bridge_of_Death_Chernobyl.ogg",db+0,1};
		duration = 284;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	class BNA_KC_FatalisMedley: BNA_KC_BattlestarOST
	{
		name = "[MH] Fatalis Medley";
		// Monster Hunter
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Fatalis_Medley_Monster_Hunter.ogg",db+0,1};
		duration = 1093;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_ItHasToBeThisWay: BNA_KC_BattlestarOST
	{
		name = "[MG] It Has To Be This Way";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\It_Has_To_Be_This_Way.ogg",db+0,1};
		duration = 175;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};


	class BNA_KC_DBSBrolysTheme: BNA_KC_BattlestarOST
	{
		name = "[DbS] Broly's Theme";
		// Dragon Ball Super
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\dbs_brolys_theme.ogg",db+0,1};
		duration = 473;
		musicClass = "BNA_KC_AnimeMusic"; // Music category
	};


	class BNA_KC_InterstellarMountains: BNA_KC_BattlestarOST
	{
		name = "[IntrStlr] Mountains";
		// Interstellar
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\intersellar_mountains.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	
	
	class BNA_KC_ProjectRealityMain: BNA_KC_BattlestarOST
	{
		name = "[PR] Main Theme";
		// Project Reality
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\project_reality_main.ogg",db+0,1};
		duration = 501;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
};