class CfgMusic
{
    class BNA_KC_BattlestarOST
    {
        name = "[BsG] Online OST"; // Name displayed in music list
        // Battlestar Galactica
        sound[] = {QPATHTOF(data\music\Battlestar_Galactica_Online.ogg), db+0, 1}; // Path to audio file, volume, pitch
        duration = 531; // Song duration in seconds
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_BattlestarPreludeToWar
    {
        name = "[BsG] Prelude To War";
        // Battle Star Galactica
        sound[] = {QPATHTOF(data\music\battlestar_galactica_prelude_to_war.ogg), db+0, 1};
        duration = 502;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_AoTOST
    {
        name = "[Aot] Before Lights Out";
        // Attack on Titan
        sound[] = {QPATHTOF(data\music\AoT_Before_Lights_Out.ogg), db+0, 1};
        duration = 173;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };
    class BNA_KC_Vogel
    {
        name = "[AoT] Vogel im Käfig";
        // Attack on Titan
        sound[] = {QPATHTOF(data\music\Vogel_im_Käfig.ogg), db+0, 1};
        duration = 380;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };
    class BNA_KC_SymphonicSuite
    {
        name = "[AoT] Symphonic Suite";
        // Attack on Titan
        sound[] = {QPATHTOF(data\music\SymphonicSuite.ogg), db+0, 1};
        duration = 313;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };
    class BNA_KC_BigGirl
    {
        name = "[AoT] YouSeeBIGGIRL";
        // Attack on Titan
        sound[] = {QPATHTOF(data\music\YouSeeBIGGIRL.ogg), db+0, 1};
        duration = 359;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };


    class BNA_KC_CLU
    {
        name = "[Tron] C.L.U";
        sound[] = {QPATHTOF(data\music\C.L.U.ogg), db+0, 1};
        duration = 279;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };
    class BNA_KC_Rectifier
    {
        name = "[Tron] Rectifier";
        sound[] = {QPATHTOF(data\music\Rectifier.ogg), db+0, 1};
        duration = 134;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_ANewEnemy
    {
        name = "[Shogun] A New Enemy";
        // Total War: Shogun 2 Fall of the Samurai
        sound[] = {QPATHTOF(data\music\A_New_Enemy-Shogun.ogg), db+0, 1};
        duration = 270;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Oyoiyoi
    {
        name = "[Shogun] Oyoiyoi";
        // Total War: Shogun 2 Fall of the Samurai
        sound[] = {QPATHTOF(data\music\Oyoiyoi.ogg), db+0, 1};
        duration = 153;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Tsunami
    {
        name = "[Shogun] Tsunami";
        // Total War: Shogun 2 Fall of the Samurai
        sound[] = {QPATHTOF(data\music\Tsunami.ogg), db+0, 1};
        duration = 124;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_ArabicVictory
    {
        name = "[TW] Arabic Victory";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Arabic_Victory-Rome.ogg), db+0, 1};
        duration = 78;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Divinitus
    {
        name = "[TW] Divinitus";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Divinitus-Rome.ogg), db+0, 1};
        duration = 110;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_EasternIntro
    {
        name = "[TW] Eastern Intro";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Eastern_Intro-Rome.ogg), db+0, 1};
        duration = 90;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_JourneytoRome
    {
        name = "[TW] Journey to Rome";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Journey_to_Rome-Rome.ogg), db+0, 1};
        duration = 139;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Mayhem
    {
        name = "[TW] Mayhem";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Mayhem-Rome.ogg), db+0, 1};
        duration = 219;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_MeleeCafe
    {
        name = "[TW] Melee Cafe";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Melee_Cafe-Rome.ogg), db+0, 1};
        duration = 173;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Mobilize
    {
        name = "[TW] Mobilize";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Mobilize-Rome.ogg), db+0, 1};
        duration = 116;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_SoldiersChant
    {
        name = "[TW] Soldiers Chant";
        // Rome: Total War
        sound[] = {QPATHTOF(data\music\Soldiers_Chant-Rome.ogg), db+0, 1};
        duration = 161;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_SW_Delightful
    {
        name = "[SW] Delightful";
        sound[] = {QPATHTOF(data\music\Ahsoka_Delightful.ogg), db+0, 1};
        duration = 136;
        musicClass = "BNA_KC_SWMusic";
    };
    class BNA_KC_SW_IonCannon: BNA_KC_SW_Delightful
    {
        name = "[SW] Ion Cannon";
        sound[] = {QPATHTOF(data\music\Ion_Cannon_Kevin_Kiner.ogg), db+0, 1};
        duration = 128;
    };
    class BNA_KC_SW_ARCTrooper_Epic: BNA_KC_SW_Delightful
    {
        name = "[SW] ARC Trooper Theme (Epic)";
        sound[] = {QPATHTOF(data\music\SW_ARCTrooper_Epic.ogg), db+0, 1};
        duration = 251;
    };
    class BNA_KC_SW_BattleOfChristophsis_Epic: BNA_KC_SW_Delightful
    {
        name = "[SW] Battle of Christophsis (Epic)";
        sound[] = {QPATHTOF(data\music\SW_BattleOfChristophsis_Epic.ogg), db+0, 1};
        duration = 281;
    };
    class BNA_KC_SW_CloneThemeTwoSteps: BNA_KC_SW_Delightful
    {
        name = "[SW] Clone Theme (Two Steps from Hell)";
        sound[] = {QPATHTOF(data\music\SW_CloneThemeTwoSteps.ogg), db+0, 1};
        duration = 291;
    };
    class BNA_KC_SW_DuelOfTheFates_Epic: BNA_KC_SW_Delightful
    {
        name = "[SW] Duel of the Fates (Epic)";
        sound[] = {QPATHTOF(data\music\SW_DuelOfTheFates_Epic.ogg), db+0, 1};
        duration = 364;
    };
    class BNA_KC_SW_LandingOnRyloth: BNA_KC_SW_Delightful
    {
        name = "[SW] Landing on Ryloth";
        sound[] = {QPATHTOF(data\music\SW_LandingOnRyloth.ogg), db+0, 1};
        duration = 102;
    };
    class BNA_KC_SW_ObiWanVDarthVader: BNA_KC_SW_Delightful
    {
        name = "[SW] Obi Wan vs Darth Vader";
        sound[] = {QPATHTOF(data\music\SW_ObiWanVDarthVader.ogg), db+0, 1};
        duration = 250;
    };
    class BNA_KC_SW_TheBattleInTheSnow: BNA_KC_SW_Delightful
    {
        name = "[SW] The Battle in the Snow";
        sound[] = {QPATHTOF(data\music\SW_TheBattleInTheSnow.ogg), db+0, 1};
        duration = 222;
    };
    class BNA_KC_SW_TimeToMeetTheNatives: BNA_KC_SW_Delightful
    {
        name = "[SW] Time to Meet the Natives";
        sound[] = {QPATHTOF(data\music\SW_TimeToMeetTheNatives.ogg), db+0, 1};
        duration = 96;
    };

    class BNA_KC_SW_GeonosisRadioChatter
    {
        name = "[SW] Geonosis Radio Chatter";
        sound[] = {QPATHTOF(data\music\Geonosis_Radio_Chatter.ogg), db+0, 1};
        duration = 544;
        musicClass = "BNA_KC_SFX";
    };


    class BNA_KC_Ace_Comona
    {
        name = "[Ace] Comona";
        // Ace Combat
        sound[] = {QPATHTOF(data\music\Comona_Ace_Combat.ogg), db+0, 1};
        duration = 161;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Ace_Enchanter: BNA_KC_Ace_Comona
    {
        name = "[Ace] Enchanter";
        // Ace Combat
        sound[] = {QPATHTOF(data\music\Enchanter_Ace_Combat.ogg), db+0, 1};
        duration = 485;
    };
    class BNA_KC_Ace_MagicSpear: BNA_KC_Ace_Comona
    {
        name = "[Ace] Magic Spear";
        // Ace Combat
        sound[] = {QPATHTOF(data\music\Magic_Spear_Ace_Combat.ogg), db+0, 1};
        duration = 246;
    };
    class BNA_KC_Ace_SolSquadron: BNA_KC_Ace_Comona
    {
        name = "[Ace] Sol Squadron";
        // Ace Combat
        sound[] = {QPATHTOF(data\music\Ace_SolSquadron.ogg), db+0, 1};
        duration = 223;
    };
    class BNA_KC_Ace_Werewolf: BNA_KC_Ace_Comona
    {
        name = "[Ace] Werewolf";
        // Ace Combat
        sound[] = {QPATHTOF(data\music\Ace_Werewolf.ogg), db+0, 1};
        duration = 459;
    };


    class BNA_KC_COD_115
    {
        name = "[COD] 115";
        // Call of Duty
        sound[] = {QPATHTOF(data\music\COD_115.ogg), db+0, 1};
        duration = 228;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_DOOM_Harbringer
    {
        name = "[DOOM] Harbringer";
        sound[] = {QPATHTOF(data\music\DOOM_Harbringer.ogg), db+0, 1};
        duration = 432;
        musicClass = "BNA_KC_VGMusic"; // "Keeli Video Game Music";
    };
    class BNA_KC_DOOM_RipAndTear: BNA_KC_DOOM_Harbringer
    {
        name = "[DOOM] Rip and Tear";
        sound[] = {QPATHTOF(data\music\DOOM_RipAndTear.ogg), db+0, 1};
        duration = 257;
    };


    class BNA_KC_SquadMain
    {
        name = "[Squad] Main Theme";
        sound[] = {QPATHTOF(data\music\squad_main.ogg), db+0, 1};
        duration = 180;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_SquadDowntime
    {
        name = "[Squad] Downtime";
        sound[] = {QPATHTOF(data\music\squad_downtime.ogg), db+0, 1};
        duration = 187;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_SquadZechariah
    {
        name = "[Squad] Zechariah";
        sound[] = {QPATHTOF(data\music\squad_zechariah.ogg), db+0, 1};
        duration = 187;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_Halo_DeliverHope
    {
        name = "[Halo] Deliver Hope";
        sound[] = {QPATHTOF(data\music\Deliver_Hope.ogg), db+0, 1};
        duration = 120;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_Halo_DeliverHope_Piano: BNA_KC_Halo_DeliverHope
    {
        name = "[Halo] Deliver Hope (Piano)";
        sound[] = {QPATHTOF(data\music\Deliver_Hope_Piano.ogg), db+0, 1};
        duration = 127;
    };
    class BNA_KC_Halo_FinishTheFight: BNA_KC_Halo_DeliverHope
    {
        name = "[Halo] Finish the Fight";
        sound[] = {QPATHTOF(data\music\Halo_FinishTheFight.ogg), db+0, 1};
        duration = 147;
    };
    class BNA_KC_Halo_LongNightOfSolace: BNA_KC_Halo_DeliverHope
    {
        name = "[Halo] Long Night of Solace";
        sound[] = {QPATHTOF(data\music\Halo_LongNightOfSolace.ogg), db+0, 1};
        duration = 706;
    };
    class BNA_KC_Halo_NeverForget: BNA_KC_Halo_DeliverHope
    {
        name = "[Halo] Never Forget";
        sound[] = {QPATHTOF(data\music\Halo_NeverForget.ogg), db+0, 1};
        duration = 187;
    };


    class BNA_KC_WarThunderMain
    {
        name = "[WT] Main Theme";
        // War Thunder
        sound[] = {QPATHTOF(data\music\war_thunder_main.ogg), db+0, 1};
        duration = 292;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_NoEscape
    {
        name = "[LoU] No Escape (All Gone)";
        // The Last of Us
        sound[] = {QPATHTOF(data\music\All_Gone_No_Escape.ogg), db+0, 1};
        duration = 174;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_ShepherdofFire
    {
        name = "[AS] Shepherd of Fire";
        // Avenged Sevenfold
        sound[] = {QPATHTOF(data\music\Avenged_Sevenfold_Shepherd_Of_Fire.ogg), db+0, 1};
        duration = 319;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_ILament
    {
        name = "[RD] Elven Dirge - I Lament";
        // Richard Daskas
        sound[] = {QPATHTOF(data\music\RD_Elven_Dirge_I_Lament.ogg), db+0, 1};
        duration = 196;
        musicClass = "BNA_KC_OtherMusic";
    };


    class BNA_KC_BridgeofDeath
    {
        name = "[Chern] Bridge of Death";
        // Chernobyl TV Series
        sound[] = {QPATHTOF(data\music\Bridge_of_Death_Chernobyl.ogg), db+0, 1};
        duration = 284;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_FatalisMedley
    {
        name = "[MH] Fatalis Medley";
        // Monster Hunter
        sound[] = {QPATHTOF(data\music\Fatalis_Medley_Monster_Hunter.ogg), db+0, 1};
        duration = 1093;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_MG_ItHasToBeThisWay
    {
        name = "[MG] It Has To Be This Way";
        // Metal Gear
        sound[] = {QPATHTOF(data\music\It_Has_To_Be_This_Way.ogg), db+0, 1};
        duration = 175;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };
    class BNA_KC_MG_RulesOfNature: BNA_KC_MG_ItHasToBeThisWay
    {
        name = "[MG] The Rules of Nature";
        // Metal Gear
        sound[] = {QPATHTOF(data\music\MG_RulesOfNature.ogg), db+0, 1};
        duration = 150;
    };
    class BNA_KC_MG_TheOnlyThingIKnowForReal: BNA_KC_MG_ItHasToBeThisWay
    {
        name = "[MG] The Only Thing I Know For Real";
        // Metal Gear
        sound[] = {QPATHTOF(data\music\MG_TheOnlyThingIKnowForReal.ogg), db+0, 1};
        duration = 146;
    };
    class BNA_KC_MG_TheStainsOfTime: BNA_KC_MG_ItHasToBeThisWay
    {
        name = "[MG] The Stains of Time";
        // Metal Gear
        sound[] = {QPATHTOF(data\music\MG_TheStainsOfTime.ogg), db+0, 1};
        duration = 130;
    };

    class BNA_KC_MW_ThemeCalm
    {
        name = "[MW] Theme (Calm)";
        // Modern Warfare
        sound[] = {QPATHTOF(data\music\MW_ThemeCalm.ogg), db+0, 1};
        duration = 206;
        musicClass = "BNA_KC_VGMusic";
    };
    class BNA_KC_MW_ThemeHopeful: BNA_KC_MW_ThemeCalm
    {
        name = "[MW] Theme (Hopeful)";
        // Modern Warfare
        sound[] = {QPATHTOF(data\music\MW_ThemeHopeful.ogg), db+0, 1};
        duration = 167;
    };
    class BNA_KC_MW_ThemeHype: BNA_KC_MW_ThemeCalm
    {
        name = "[MW] Theme (Hype)";
        // Modern Warfare
        sound[] = {QPATHTOF(data\music\MW_ThemeHype.ogg), db+0, 1};
        duration = 336;
    };


    class BNA_KC_PW_MidnightLight
    {
        name = "[PW] Theme (Calm)";
        // Project Wingman
        sound[] = {QPATHTOF(data\music\PW_MignightLight.ogg.ogg), db+0, 1};
        duration = 191;
        musicClass = "BNA_KC_VGMusic";
    };
    class BNA_KC_PW_Peacekeeper: BNA_KC_PW_MidnightLight
    {
        name = "[PW] Peacekeeper";
        // Project Wingman
        sound[] = {QPATHTOF(data\music\PW_Peacekeeper.ogg), db+0, 1};
        duration = 185;
    };
    class BNA_KC_PW_Presidia: BNA_KC_PW_MidnightLight
    {
        name = "[PW] Presidia";
        // Project Wingman
        sound[] = {QPATHTOF(data\music\PW_Presidia.ogg.ogg), db+0, 1};
        duration = 318;
    };


    class BNA_KC_SS_ToTheGallows
    {
        name = "[SS] To The Gallows";
        // Secession Studios
        sound[] = {QPATHTOF(data\music\SS_ToTheGallows.ogg), db+0, 1};
        duration = 346;
        musicClass = "BNA_KC_OtherMusic";
    };
    class BNA_KC_SS_WithNoMercy: BNA_KC_SS_ToTheGallows
    {
        name = "[SS] With No Mercy";
        // Secession Studios
        sound[] = {QPATHTOF(data\music\SS_WithNoMercy.ogg), db+0, 1};
        duration = 355;
    };


    class BNA_KC_DBSBrolysTheme
    {
        name = "[DbS] Broly's Theme";
        // Dragon Ball Super
        sound[] = {QPATHTOF(data\music\dbs_brolys_theme.ogg), db+0, 1};
        duration = 473;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };


    class BNA_KC_InterstellarMountains
    {
        name = "[IntrStlr] Mountains";
        // Interstellar
        sound[] = {QPATHTOF(data\music\intersellar_mountains.ogg), db+0, 1};
        duration = 219;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_ProjectRealityMain
    {
        name = "[PR] Main Theme";
        // Project Reality
        sound[] = {QPATHTOF(data\music\project_reality_main.ogg), db+0, 1};
        duration = 501;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_Transformers_ArrivalToEarth
    {
        name = "[Transformers] Arrival To Earth (Hopeful)";
        sound[] = {QPATHTOF(data\music\Arrival_To_Earth.ogg), db+0, 1};
        duration = 315;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_AxeManTheme
    {
        name = "Axe Man Theme (Hype/Hopeful)";
        sound[] = {QPATHTOF(data\music\Axe_Man_Theme.ogg), db+0, 1};
        duration = 92;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_FleetAdmiralFujitora
    {
        name = "Fleet Admiral Fujitora";
        sound[] = {QPATHTOF(data\music\Fleet_Admiral_Fujitora.ogg), db+0, 1};
        duration = 67;
        musicClass = "BNA_KC_AnimeMusic"; // Music category
    };


    class BNA_KC_Transformers_ForestBattle
    {
        name = "[Transformers] Forest Battle";
        sound[] = {QPATHTOF(data\music\Forest_Battle.ogg), db+0, 1};
        duration = 122;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_Transformers_Prime
    {
        name = "[Transformers] Prime";
        sound[] = {QPATHTOF(data\music\Prime.ogg), db+0, 1};
        duration = 128;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_RampartAndWilco
    {
        name = "Rampart and Wilco (Tense)";
        sound[] = {QPATHTOF(data\music\Rampart_and_Wilco.ogg), db+0, 1};
        duration = 127;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };


    class BNA_KC_RylothLastStand
    {
        name = "Ryloth Last Stand";
        sound[] = {QPATHTOF(data\music\Ryloth_Last_Stand.ogg), db+0, 1};
        duration = 123;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };


    class BNA_KC_Transformers_Scorponok
    {
        name = "[Transformers] Scorponok (Motivational)";
        sound[] = {QPATHTOF(data\music\Scorponok.ogg), db+0, 1};
        duration = 273;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_SW_ImSoSorry
    {
        name = "[SW] Im So Sorry (Hopeless)";
        sound[] = {QPATHTOF(data\music\Im_so_Sorry.ogg), db+0, 1};
        duration = 135;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };


    class BNA_KC_ElPresidente
    {
        name = "El Presidente";
        sound[] = {QPATHTOF(data\music\El_Presidente.ogg), db+0, 1};
        duration = 129;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_Nest
    {
        name = "[Transformers II] Nest";
        sound[] = {QPATHTOF(data\music\Nest.ogg), db+0, 1};
        duration = 124;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_FatherG
    {
        name = "Father G";
        sound[] = {QPATHTOF(data\music\Father_G.ogg), db+0, 1};
        duration = 262;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_Mayday
    {
        name = "[TBB] Mayday";
        sound[] = {QPATHTOF(data\music\Mayday.ogg), db+0, 1};
        duration = 325;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };


    class BNA_KC_EPF
    {
        name = "The EPF ";
        sound[] = {QPATHTOF(data\music\EPF_Forces.ogg), db+0, 1};
        duration = 198;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_TU1
    {
        name = "Techno Union BM 1 ";
        sound[] = {QPATHTOF(data\music\Techno_Union1.ogg), db+0, 1};
        duration = 202;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_TU2
    {
        name = "Techno Union BM 2 ";
        sound[] = {QPATHTOF(data\music\Techno_Union2.ogg), db+0, 1};
        duration = 202;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_RoseAtNightfall
    {
        name = "Rose At Nightfall ";
        sound[] = {QPATHTOF(data\music\Rose_At_Nightfall.ogg), db+0, 1};
        duration = 252;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_TheAllSpark
    {
        name = "[Transformers I] The All Spark ";
        sound[] = {QPATHTOF(data\music\The_All_Spark.ogg), db+0, 1};
        duration = 214;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };



    class BNA_KC_ElGeneral1
    {
        name = "[EPF] El General Speech 1";
        sound[] = {QPATHTOF(data\music\El_General1.ogg), db+0, 1};
        duration = 49;
        musicClass = "BNA_KC_SFX"; // Music category
    };



    class BNA_KC_ElGeneral2
    {
        name = "[EPF] El General Speech 2";
        sound[] = {QPATHTOF(data\music\El_General2.ogg), db+0, 1};
        duration = 52;
        musicClass = "BNA_KC_SFX"; // Music category
    };



    class BNA_KC_Bastard
    {
        name = "[MGR] Slippery Little Bastard";
        sound[] = {QPATHTOF(data\music\Slippery_Little_Bastard.ogg), db+0, 1};
        duration = 125;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };



    class BNA_KC_ZodDisbandsCouncil
    {
        name = "[MoS] Zod Disband's Council";
        sound[] = {QPATHTOF(data\music\Superman_ZodDisbandsCouncil.ogg), db+0, 1};
        duration = 125;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };



    class BNA_KC_ArmstrongArrival
    {
        name = "[MGR] The Senators Arrival";
        sound[] = {QPATHTOF(data\music\The_Senators_Arrival.ogg), db+0, 1};
        duration = 34;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };



    class BNA_KC_Umbara_Landing
    {
        name = "[CW] Umbara Landing";
        sound[] = {QPATHTOF(data\music\Umbara_Landing.ogg), db+0, 1};
        duration = 202;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };



    class BNA_KC_Umbara_1
    {
        name = "[CW] Umbara Music";
        sound[] = {QPATHTOF(data\music\CWA_Umbara.ogg), db+0, 1};
        duration = 147;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };



    class BNA_KC_Umbara_2
    {
        name = "[CW] Umbara Music 2";
        sound[] = {QPATHTOF(data\music\CWA_Umbara_2.ogg), db+0, 1};
        duration = 235;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };



    class BNA_KC_Umbara_3
    {
        name = "[CW] Umbara Music 3";
        sound[] = {QPATHTOF(data\music\CWA_Umbara_3.ogg), db+0, 1};
        duration = 125;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };



    class BNA_KC_TU3
    {
        name = "Techno Union BM 3";
        sound[] = {QPATHTOF(data\music\Techno_Union3.ogg), db+0, 1};
        duration = 150;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };


    class BNA_KC_Woods_Betrayal
    {
        name = "Wood's Betrayal";
        sound[] = {QPATHTOF(data\music\Wood's_Betrayal.ogg), db+0, 1};
        duration = 350;
        musicClass = "BNA_KC_SWMusic"; // Music category
    };


    class BNA_KC_Infection
    {
        name = "OutBreak";
        sound[] = {QPATHTOF(data\music\Infection.ogg), db+0, 1};
        duration = 232;
        musicClass = "BNA_KC_VGMusic"; // Music category
    };


    class BNA_KC_WWZ
    {
        name = "WWZ";
        sound[] = {QPATHTOF(data\music\WWZ.ogg), db+0, 1};
        duration = 221;
        musicClass = "BNA_KC_OtherMusic"; // Music category
    };
};