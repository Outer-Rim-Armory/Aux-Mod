class CfgMusicClasses
{
	class BNA_KC_Music
	{
		displayName="Keeli Comp Music";
	};
	class BNA_KC_SWMusic
	{
		displayName="Keeli Star Wars Music";
	};
	class BNA_KC_VGMusic
	{
		displayName="Keeli Video Game Music";
	};
	class BNA_KC_OtherMusic
	{
		displayName="Keeli Other Music";
	};
};
class CfgMusic
{
	class BNA_KC_BattlestarOST
	{
		name = "Battlestar Galactica Online OST"; // Name displayed in music list
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Battlestar_Galactica_Online.ogg",db+0,1}; // Path to audio file, volume, pitch
		duration = 531; // Song duration in seconds
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_AoTOST: BNA_KC_BattlestarOST
	{
		name = "AoT Before Lights Out";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\AoT_Before_Lights_Out.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Vogel: BNA_KC_BattlestarOST
	{
		name = "Vogel im Käfig";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Vogel_im_Käfig.ogg",db+0,1};
		duration = 380;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_CLU: BNA_KC_BattlestarOST
	{
		name = "C.L.U";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\C.L.U.ogg",db+0,1};
		duration = 279;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Rectifier: BNA_KC_BattlestarOST
	{
		name = "Rectifier";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Rectifier.ogg",db+0,1};
		duration = 134;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SymphonicSuite: BNA_KC_BattlestarOST
	{
		name = "Symphonic Suite";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SymphonicSuite.ogg",db+0,1};
		duration = 313;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_BigGirl: BNA_KC_BattlestarOST
	{
		name = "YouSeeBIGGIRL";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\YouSeeBIGGIRL.ogg",db+0,1};
		duration = 359;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_ANewEnemy: BNA_KC_BattlestarOST
	{
		name = "A New Enemy - Shogun";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\A_New_Enemy-Shogun.ogg",db+0,1};
		duration = 270;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_ArabicVictory: BNA_KC_BattlestarOST
	{
		name = "Arabic Victory - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Arabic_Victory-Rome.ogg",db+0,1};
		duration = 78;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Divinitus: BNA_KC_BattlestarOST
	{
		name = "Divinitus - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Divinitus-Rome.ogg",db+0,1};
		duration = 110;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_EasternIntro: BNA_KC_BattlestarOST
	{
		name = "Eastern Intro - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Eastern_Intro-Rome.ogg",db+0,1};
		duration = 90;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_JourneytoRome: BNA_KC_BattlestarOST
	{
		name = "Journey to Rome - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Journey_to_Rome-Rome.ogg",db+0,1};
		duration = 139;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mayhem: BNA_KC_BattlestarOST
	{
		name = "Mayhem - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mayhem-Rome.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MeleeCafe: BNA_KC_BattlestarOST
	{
		name = "Melee Cafe - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Melee_Cafe-Rome.ogg",db+0,1};
		duration = 173;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Mobilize: BNA_KC_BattlestarOST
	{
		name = "Mobilize - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mobilize-Rome.ogg",db+0,1};
		duration = 116;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SoldiersChant: BNA_KC_BattlestarOST
	{
		name = "Soldiers Chant - Rome";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Soldiers_Chant-Rome.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Oyoiyoi: BNA_KC_BattlestarOST
	{
		name = "Oyoiyoi";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Oyoiyoi.ogg",db+0,1};
		duration = 153;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Tsunami: BNA_KC_BattlestarOST
	{
		name = "Tsunami";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Tsunami.ogg",db+0,1};
		duration = 124;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Delightful: BNA_KC_BattlestarOST
	{
		name = "Delightful - Ahsoka";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ahsoka_Delightful.ogg",db+0,1};
		duration = 136;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};
	class BNA_KC_NoEscape: BNA_KC_BattlestarOST
	{
		name = "No Escape - All Gone";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\All_Gone_No_Escape.ogg",db+0,1};
		duration = 174;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_ShepherdofFire: BNA_KC_BattlestarOST
	{
		name = "Shepherd of Fire - Avenged Sevenfold";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Avenged_Sevenfold_Shepherd_Of_Fire.ogg",db+0,1};
		duration = 319;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_BridgeofDeath: BNA_KC_BattlestarOST
	{
		name = "Bridge of Death - Chernobyl";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Bridge_of_Death_Chernobyl.ogg",db+0,1};
		duration = 284;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	class BNA_KC_Comona: BNA_KC_BattlestarOST
	{
		name = "Comona - Ace Combat";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Comona_Ace_Combat.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_DeliverHope: BNA_KC_BattlestarOST
	{
		name = "Deliver Hope";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope.ogg",db+0,1};
		duration = 120;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_DeliverHopePiano: BNA_KC_BattlestarOST
	{
		name = "Deliver Hope Piano";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope_Piano.ogg",db+0,1};
		duration = 127;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Enchanter: BNA_KC_BattlestarOST
	{
		name = "Enchanter - Ace Combat";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Enchanter_Ace_Combat.ogg",db+0,1};
		duration = 485;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_FatalisMedley: BNA_KC_BattlestarOST
	{
		name = "Fatalis Medley - Monster Hunter";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Fatalis_Medley_Monster_Hunter.ogg",db+0,1};
		duration = 1093;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_GeonosisRadioChatter: BNA_KC_BattlestarOST
	{
		name = "Geonosis Radio Chatter";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Geonosis_Radio_Chatter.ogg",db+0,1};
		duration = 544;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};
	class BNA_KC_IonCannon: BNA_KC_BattlestarOST
	{
		name = "Ion Cannon - Kevin Kiner";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ion_Cannon_Kevin_Kiner.ogg",db+0,1};
		duration = 128;
		musicClass = "BNA_KC_SWMusic"; // Music category
	};
	class BNA_KC_ItHasToBeThisWay: BNA_KC_BattlestarOST
	{
		name = "It Has To Be This Way";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\It_Has_To_Be_This_Way.ogg",db+0,1};
		duration = 175;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MagicSpear: BNA_KC_BattlestarOST
	{
		name = "Magic Spear - Ace Combat";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Magic_Spear_Ace_Combat.ogg",db+0,1};
		duration = 246;
		musicClass = "BNA_KC_VGMusic"; // "Keeli Video Game Music";
	};
	class BNA_KC_BattlestarPreludeToWar: BNA_KC_BattlestarOST
	{
		name = "Battlestar Galactica - Prelude To War";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\battlestar_galactica_prelude_to_war.ogg",db+0,1};
		duration = 502;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_DBSBrolysTheme: BNA_KC_BattlestarOST
	{
		name = "Dragon Ball Super - Broly's Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\dbs_brolys_theme.ogg",db+0,1};
		duration = 473;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	class BNA_KC_InterstellarMountains: BNA_KC_BattlestarOST
	{
		name = "Interstellar - Mountains";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\intersellar_mountains.ogg",db+0,1};
		duration = 219;
		musicClass = "BNA_KC_OtherMusic"; // Music category
	};
	class BNA_KC_SquadMain: BNA_KC_BattlestarOST
	{
		name = "Squad - Main Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_main.ogg",db+0,1};
		duration = 180;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_WarThunderMain: BNA_KC_BattlestarOST
	{
		name = "War Thunder - Main Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\war_thunder_main.ogg",db+0,1};
		duration = 292;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_ProjectRealityMain: BNA_KC_BattlestarOST
	{
		name = "Project Reality - Main Theme";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\project_reality_main.ogg",db+0,1};
		duration = 501;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadDowntime: BNA_KC_BattlestarOST
	{
		name = "Squad - Downtime";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_downtime.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_SquadZechariah: BNA_KC_BattlestarOST
	{
		name = "Squad - Zechariah";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\squad_zechariah.ogg",db+0,1};
		duration = 187;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
};