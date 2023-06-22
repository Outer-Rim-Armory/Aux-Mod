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


	class BNA_KC_SW_Delightful
	{
		name = "[SW] Delightful";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ahsoka_Delightful.ogg",db+0,1};
		duration = 136;
		musicClass = "BNA_KC_SWMusic";
	};
	class BNA_KC_SW_IonCannon: BNA_KC_SW_Delightful
	{
		name = "[SW] Ion Cannon";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ion_Cannon_Kevin_Kiner.ogg",db+0,1};
		duration = 128;
	};
	class BNA_KC_SW_ARCTrooper_Epic: BNA_KC_SW_Delightful
	{
		name = "[SW] ARC Trooper Theme (Epic)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_ARCTrooper_Epic.ogg",db+0,1};
		duration = 251;
	};
	class BNA_KC_SW_BattleOfChristophsis_Epic: BNA_KC_SW_Delightful
	{
		name = "[SW] Battle of Christophsis (Epic)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_BattleOfChristophsis_Epic.ogg",db+0,1};
		duration = 281;
	};
	class BNA_KC_SW_CloneThemeTwoSteps: BNA_KC_SW_Delightful
	{
		name = "[SW] Clone Theme (Two Steps from Hell)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_CloneThemeTwoSteps.ogg",db+0,1};
		duration = 291;
	};
	class BNA_KC_SW_DuelOfTheFates_Epic: BNA_KC_SW_Delightful
	{
		name = "[SW] Duel of the Fates (Epic)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_DuelOfTheFates_Epic.ogg",db+0,1};
		duration = 364;
	};
	class BNA_KC_SW_LandingOnRyloth: BNA_KC_SW_Delightful
	{
		name = "[SW] Landing on Ryloth";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_LandingOnRyloth.ogg",db+0,1};
		duration = 102;
	};
	class BNA_KC_SW_ObiWanVDarthVader: BNA_KC_SW_Delightful
	{
		name = "[SW] Obi Wan vs Darth Vader";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_ObiWanVDarthVader.ogg",db+0,1};
		duration = 250;
	};
	class BNA_KC_SW_TheBattleInTheSnow: BNA_KC_SW_Delightful
	{
		name = "[SW] The Battle in the Snow";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_TheBattleInTheSnow.ogg",db+0,1};
		duration = 222;
	};
	class BNA_KC_SW_TimeToMeetTheNatives: BNA_KC_SW_Delightful
	{
		name = "[SW] Time to Meet the Natives";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SW_TimeToMeetTheNatives.ogg",db+0,1};
		duration = 96;
	};

	class BNA_KC_SW_GeonosisRadioChatter
	{
		name = "[SW] Geonosis Radio Chatter";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Geonosis_Radio_Chatter.ogg",db+0,1};
		duration = 544;
		musicClass = "BNA_KC_SFX";
	};


	class BNA_KC_Ace_Comona
	{
		name = "[Ace] Comona";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Comona_Ace_Combat.ogg",db+0,1};
		duration = 161;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Ace_Enchanter: BNA_KC_Ace_Comona
	{
		name = "[Ace] Enchanter";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Enchanter_Ace_Combat.ogg",db+0,1};
		duration = 485;
	};
	class BNA_KC_Ace_MagicSpear: BNA_KC_Ace_Comona
	{
		name = "[Ace] Magic Spear";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Magic_Spear_Ace_Combat.ogg",db+0,1};
		duration = 246;
	};
	class BNA_KC_Ace_SolSquadron: BNA_KC_Ace_Comona
	{
		name = "[Ace] Sol Squadron";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ace_SolSquadron.ogg",db+0,1};
		duration = 223;
	};
	class BNA_KC_Ace_Werewolf: BNA_KC_Ace_Comona
	{
		name = "[Ace] Werewolf";
		// Ace Combat
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ace_Werewolf.ogg",db+0,1};
		duration = 459;
	};


	class BNA_KC_DOOM_Harbringer
	{
		name = "[DOOM] Harbringer";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\DOOM_Harbringer.ogg",db+0,1};
		duration = 432;
		musicClass = "BNA_KC_VGMusic"; // "Keeli Video Game Music";
	};
	class BNA_KC_DOOM_RipAndTear: BNA_KC_DOOM_Harbringer
	{
		name = "[DOOM] Rip and Tear";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\DOOM_RipAndTear.ogg",db+0,1};
		duration = 257;
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


	class BNA_KC_Halo_DeliverHope
	{
		name = "[Halo] Deliver Hope";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope.ogg",db+0,1};
		duration = 120;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_Halo_DeliverHope_Piano: BNA_KC_Halo_DeliverHope
	{
		name = "[Halo] Deliver Hope (Piano)";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Deliver_Hope_Piano.ogg",db+0,1};
		duration = 127;
	};
	class BNA_KC_Halo_FinishTheFight: BNA_KC_Halo_DeliverHope
	{
		name = "[Halo] Finish the Fight";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Halo_FinishTheFight.ogg",db+0,1};
		duration = 147;
	};
	class BNA_KC_Halo_LongNightOfSolace: BNA_KC_Halo_DeliverHope
	{
		name = "[Halo] Long Night of Solace";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Halo_LongNightOfSolace.ogg",db+0,1};
		duration = 706;
	};
	class BNA_KC_Halo_NeverForget: BNA_KC_Halo_DeliverHope
	{
		name = "[Halo] Never Forget";
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\Halo_NeverForget.ogg",db+0,1};
		duration = 187;
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


	class BNA_KC_MG_ItHasToBeThisWay
	{
		name = "[MG] It Has To Be This Way";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\It_Has_To_Be_This_Way.ogg",db+0,1};
		duration = 175;
		musicClass = "BNA_KC_VGMusic"; // Music category
	};
	class BNA_KC_MG_RulesOfNature: BNA_KC_MG_ItHasToBeThisWay
	{
		name = "[MG] The Rules of Nature";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MG_RulesOfNature.ogg",db+0,1};
		duration = 150;
	};
	class BNA_KC_MG_TheOnlyThingIKnowForReal: BNA_KC_MG_ItHasToBeThisWay
	{
		name = "[MG] The Only Thing I Know For Real";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MG_TheOnlyThingIKnowForReal.ogg",db+0,1};
		duration = 146;
	};
	class BNA_KC_MG_TheStainsOfTime: BNA_KC_MG_ItHasToBeThisWay
	{
		name = "[MG] The Stains of Time";
		// Metal Gear
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MG_TheStainsOfTime.ogg",db+0,1};
		duration = 130;
	};

	class BNA_KC_MW_ThemeCalm
	{
		name = "[MW] Theme (Calm)";
		// Modern Warfare
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MW_ThemeCalm.ogg",db+0,1};
		duration = 206;
		musicClass = "BNA_KC_VGMusic";
	};
	class BNA_KC_MW_ThemeHopeful: BNA_KC_MW_ThemeCalm
	{
		name = "[MW] Theme (Hopeful)";
		// Modern Warfare
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MW_ThemeHopeful.ogg",db+0,1};
		duration = 167;
	};
	class BNA_KC_MW_ThemeHype: BNA_KC_MW_ThemeCalm
	{
		name = "[MW] Theme (Hype)";
		// Modern Warfare
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\MW_ThemeHype.ogg",db+0,1};
		duration = 336;
	};


	class BNA_KC_PW_MidnightLight
	{
		name = "[PW] Theme (Calm)";
		// Project Wingman
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\PW_MignightLight.ogg.ogg",db+0,1};
		duration = 191;
		musicClass = "BNA_KC_VGMusic";
	};
	class BNA_KC_PW_Peacekeeper: BNA_KC_PW_MidnightLight
	{
		name = "[PW] Peacekeeper";
		// Project Wingman
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\PW_Peacekeeper.ogg",db+0,1};
		duration = 185;
	};
	class BNA_KC_PW_Presidia: BNA_KC_PW_MidnightLight
	{
		name = "[PW] Presidia";
		// Project Wingman
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\PW_Presidia.ogg.ogg",db+0,1};
		duration = 318;
	};

	
	class BNA_KC_SS_ToTheGallows
	{
		name = "[SS] To The Gallows";
		// Secession Studios
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SS_ToTheGallows.ogg",db+0,1};
		duration = 346;
		musicClass = "BNA_KC_OtherMusic";
	};
	class BNA_KC_SS_WithNoMercy: BNA_KC_SS_ToTheGallows
	{
		name = "[SS] With No Mercy";
		// Secession Studios
		sound[] = {"BNA_KC_ZeusAudioModule\Audio\SS_WithNoMercy.ogg",db+0,1};
		duration = 355;
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
	

	class BNA_KC_Transformers_ArrivalToEarth
	{
        name = "[Transformers] Arrival To Earth (Hopeful)";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Arrival_To_Earth.ogg",db+0,1};
        duration = 315;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 
	

	class BNA_KC_AxeManTheme
	{
        name = "Axe Man Theme (Hype/Hopeful)";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Axe_Man_Theme.ogg",db+0,1};
        duration = 92;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_FleetAdmiralFujitora
	{
        name = "Fleet Admiral Fujitora";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Fleet_Admiral_Fujitora.ogg",db+0,1};
        duration = 67;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
	}; 


	class BNA_KC_Transformers_ForestBattle
	{
        name = "[Transformers] Forest Battle";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Forest_Battle.ogg",db+0,1};
        duration = 122;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 

	
	class BNA_KC_Transformers_Prime
	{
        name = "[Transformers] Prime";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Prime.ogg",db+0,1};
        duration = 128;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_RampartAndWilco
	{
        name = "Rampart and Wilco (Tense)";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Rampart_and_Wilco.ogg",db+0,1};
        duration = 127;
        musicClass = "BNA_KC_SWMusic"; // Music category
	}; 


	class BNA_KC_RylothLastStand
	{
        name = "Ryloth Last Stand";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Ryloth_Last_Stand.ogg",db+0,1};
        duration = 123;
        musicClass = "BNA_KC_SWMusic"; // Music category
	}; 


	class BNA_KC_Transformers_Scorponok
	{
        name = "[Transformers] Scorponok (Motivational)";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Scorponok.ogg",db+0,1};
        duration = 273;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_SW_ImSoSorry
	{
        name = "[SW] Im So Sorry (Hopeless)";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Im_so_Sorry.ogg",db+0,1};
        duration = 135;
        musicClass = "BNA_KC_SWMusic"; // Music category
	}; 

	
	class BNA_KC_ElPresidente
	{
        name = "El Presidente";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\El_Presidente.ogg",db+0,1};
        duration = 129;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 

	
	class BNA_KC_Nest
	{
        name = "[Transformers II] Nest";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Nest.ogg",db+0,1};
        duration = 124;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 

	
	class BNA_KC_FatherG
	{
        name = "Father G";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Father_G.ogg",db+0,1};
        duration = 262;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 

	
	class BNA_KC_Mayday
	{
        name = "[TBB] Mayday";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Mayday.ogg",db+0,1};
        duration = 325;
        musicClass = "BNA_KC_SWMusic"; // Music category
	}; 
	
	
	class BNA_KC_EPF
	{
        name = "The EPF ";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\EPF_Forces.ogg",db+0,1};
        duration = 198;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_TU1
	{
        name = "Techno Union BM 1 ";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Techno_Union1.ogg",db+0,1};
        duration = 202;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_TU2
	{
        name = "Techno Union BM 2 ";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Techno_Union2.ogg",db+0,1};
        duration = 202;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	}; 


	class BNA_KC_RoseAtNightfall
	{
        name = "Rose At Nightfall ";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Rose_At_Nightfall.ogg",db+0,1};
        duration = 252;
        musicClass = "BNA_KC_VGMusic"; // Music category
	}; 


	class BNA_KC_TheAllSpark
	{
        name = "[Transformers I] The All Spark ";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\The_All_Spark.ogg",db+0,1};
        duration = 214;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	
	class BNA_KC_ElGeneral1
	{
        name = "[EPF] El General Speech 1";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\El_General1.ogg",db+0,1};
        duration = 49;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	};



	class BNA_KC_ElGeneral2
	{
        name = "[EPF] El General Speech 2";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\El_General2.ogg",db+0,1};
        duration = 52;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	};


	class BNA_KC_Bastard
	{
        name = "[MGR] Slippery Little Bastard";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Slippery_Little_Bastard.ogg",db+0,1};
        duration = 125;
        musicClass = "BNA_KC_VGMusic"; // Music category
	};

	class BNA_KC_ZodDisbandsCouncil
	{
        name = "[MoS] Zod Disband's Council";
        sound[] = {"BNA_KC_ZeusAudioModule\Audio\Superman_ZodDisbandsCouncil.ogg",db+0,1};
        duration = 125;
        musicClass = "BNA_KC_OtherMusic"; // Music category
	};
};