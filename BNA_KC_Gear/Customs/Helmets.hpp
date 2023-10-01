/*
Custom Visor Color Names
* Red   : Crimson
* Blue  : Bacta
* Purple: Plasma
* Green : Kyber
*/


// ┌───────────────────┐
// │    P1  Helmets    │
// └───────────────────┘
class BNA_KC_Helmet_Phase1_Base;

class BNA_KC_Helmet_Phase1_Axel: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Axel')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Axel.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Burnt: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Burnt";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Burnt_Bacta";

	displayName = "[KC] INF P1 Helm ('Burnt')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Burnt.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Burnt_Bacta: BNA_KC_Helmet_Phase1_Burnt
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Burnt') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Burnt.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Catholic: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Catholic";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Catholic_Kyber";

	displayName = "[KC] INF P1 Helm ('Catholic')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Catholic.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Catholic_Kyber: BNA_KC_Helmet_Phase1_Catholic
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Catholic') [Kyber Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Catholic.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Kyber.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Defter: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Defter";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Defter_Bacta";

	displayName = "[KC] INF P1 Helm ('Defter')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Defter.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Defter_Bacta: BNA_KC_Helmet_Phase1_Defter
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Defter') [Bacta Visor]";
    hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Defter.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Dexus: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Dexus";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Dexus_Bacta";

	displayName = "[KC] INF P1 Helm ('Dexus')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Dexus.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Dexus_Bacta: BNA_KC_Helmet_Phase1_Dexus
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Dexus') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Dexus.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Drake: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Drake";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Drake_Bacta";

	displayName = "[KC] INF P1 Helm ('Drake')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Drake.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Drake_Bacta: BNA_KC_Helmet_Phase1_Drake
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Drake') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Drake.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Grey: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Grey')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Grey.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Hazard: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Hazard')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Hazard.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Jaws: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Jaws')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Jaws.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Jester: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Jester')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Jester.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Joe: BNA_KC_Helmet_Phase1_Base
{
	// NVG Script
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Joe";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Joe_Crimson";

	displayName = "[KC] INF P1 Helm ('Joe')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Joe.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Joe_Crimson: BNA_KC_Helmet_Phase1_Joe
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Joe') [Crimson Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Joe.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Keeli: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Keeli";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Keeli_Crimson";

	displayName = "[KC] INF P1 Helm ('Keeli')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Keeli.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Keeli_Crimson: BNA_KC_Helmet_Phase1_Keeli
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Keeli') [Crimson Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Keeli.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Lou: BNA_KC_Helmet_Phase1_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Lou";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Lou_Plasma";

	displayName = "[KC] INF P1 Helm ('Lou')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Lou.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};
class BNA_KC_Helmet_Phase1_Lou_Plasma: BNA_KC_Helmet_Phase1_Lou
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF P1 Helm ('Lou') [Plasma Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Lou.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Plasma.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Ox: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Ox')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Ox.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Patriot: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Patriot')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Patriot.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Ponds: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Ponds')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Ponds.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Rev: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Rev')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Rev.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Rodger: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Rodger')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Rodger.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Sin: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Sin')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Sin.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Splashdown: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Splashdown')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Splashdown.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Swoop: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Swoop')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Swoop.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};

class BNA_KC_Helmet_Phase1_Woods: BNA_KC_Helmet_Phase1_Base
{
	displayName = "[KC] INF P1 Helm ('Woods')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 1\BNA_KC_Helmet_P1_Woods.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
};


// ┌───────────────────┐
// │    P2  Helmets    │
// └───────────────────┘
class BNA_KC_Helmet_Phase2_Base;

class BNA_KC_Helmet_Phase2_Axel: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Axel')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Axel.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Bob: BNA_KC_Helmet_Phase2_Base
{
    BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Bob";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Bob_Kyber";

    displayName = "[KC] INF Helm ('Bob')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Bob.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};
class BNA_KC_Helmet_Phase2_Bob_Kyber: BNA_KC_Helmet_Phase2_Bob
{
    // Scopes
    scope = 1;
    scopeArsenal = 1;

    displayName = "[KC] INF Helm ('Bob') [Kyber Visor]";
    hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Bob.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Kyber.paa"
    };
};

class BNA_KC_Helmet_Phase2_Burnt: BNA_KC_Helmet_Phase2_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Burnt";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Burnt_Bacta";

	displayName = "[KC] INF Helm ('Burnt')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Burnt.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};
class BNA_KC_Helmet_Phase2_Burnt_Bacta: BNA_KC_Helmet_Phase2_Burnt
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF Helm ('Burnt') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Burnt.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
	};
};

class BNA_KC_Helmet_Phase2_Dexus: BNA_KC_Helmet_Phase2_Base
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Dexus";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Dexus_Bacta";

	displayName = "[KC] INF Helm ('Dexus')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Dexus.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};
class BNA_KC_Helmet_Phase2_Dexus_Bacta: BNA_KC_Helmet_Phase2_Dexus
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF Helm ('Dexus') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Dexus.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa",
	};
};

class BNA_KC_Helmet_Phase2_Fil: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Fil')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Fil.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_FilSquad: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Fil's Squad')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_FilSquad.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Grey: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Grey')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Grey.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Harry: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Harry')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Harry.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Hazard: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Hazard')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Hazard.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Jaws: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Jaws')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Jaws.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Jester: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Jester')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Jester.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Joe: BNA_KC_Helmet_Phase2_Base
{
	// NVG Script
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Joe";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Joe_Crimson";

	displayName = "[KC] INF Helm ('Joe')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Joe.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};
class BNA_KC_Helmet_Phase2_Joe_Crimson: BNA_KC_Helmet_Phase2_Joe
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF Helm ('Joe') [Crimson Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Joe.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
	};
};

class BNA_KC_Helmet_Phase2_Keeli: BNA_KC_Helmet_Phase2_Base
{
	// NVG Script
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Keeli";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Keeli_Crimson";

	displayName = "[KC] INF Helm ('Keeli')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Keeli.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};
class BNA_KC_Helmet_Phase2_Keeli_Crimson: BNA_KC_Helmet_Phase2_Keeli
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF Helm ('Keeli') [Crimson Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Keeli.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
	};
};
class BNA_KC_Helmet_Phase2_Keeli_CamoBrown: BNA_KC_Helmet_Phase2_Base
{
    // NVG Script
    BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Keeli_CamoBrown";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Keeli_CamoBrown_Crimson";

    displayName = "[KC] INF Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Camo\Brown\BNA_KC_Helmet_P2_Keeli_CamoBrown.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};
class BNA_KC_Helmet_Phase2_Keeli_CamoBrown_Crimson: BNA_KC_Helmet_Phase2_Keeli_CamoBrown
{
    // Scopes
    scope = 1;
    scopeArsenal = 1;

    displayName = "[KC] INF Helm ('Keeli') - Brown Camo [Crimson Visor]";
    hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Camo\Brown\BNA_KC_Helmet_P2_Keeli_CamoBrown.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
    };
};
class BNA_KC_Helmet_Phase2_Keeli_CamoGrey: BNA_KC_Helmet_Phase2_Base
{
    // NVG Script
    BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Keeli_CamoGrey";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Keeli_CamoGrey_Crimson";

    displayName = "[KC] INF Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Camo\Grey\BNA_KC_Helmet_P2_Keeli_CamoGrey.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};
class BNA_KC_Helmet_Phase2_Keeli_CamoGrey_Crimson: BNA_KC_Helmet_Phase2_Keeli_CamoGrey
{
    // Scopes
    scope = 1;
    scopeArsenal = 1;

    displayName = "[KC] INF Helm ('Keeli') - Grey Camo [Crimson Visor]";
    hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Camo\Grey\BNA_KC_Helmet_P2_Keeli_CamoGrey.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa",
    };
};

class BNA_KC_Helmet_Phase2_Lou: BNA_KC_Helmet_Phase2_Base
{
    BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Lou";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Lou_Plasma";

    displayName = "[KC] INF Helm ('Lou')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_Lou.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};
class BNA_KC_Helmet_Phase2_Lou_Plasma: BNA_KC_Helmet_Phase2_Lou
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] INF Helm ('Lou') [Plasma Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_Lou.paa",
		"BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Plasma.paa"
	};
};

class BNA_KC_Helmet_Phase2_Ox: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Ox')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Ox.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Patriot: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Patriot')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Patriot.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Ponds: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC 187th] INF Helm ('Ponds')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Ponds.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_PondsTrooper: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC 187th] INF Helm";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_PondsTrooper.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Rev: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Rev')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Rev.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Rodger: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Rodger')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Rodger.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};
class BNA_KC_Helmet_Phase2_Sage: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Sage')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Sage.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Splashdown: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Splashdown')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Splashdown.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Star: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Star')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_Star.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Stone: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Stone')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Stone.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Swoop: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Swoop')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Swoop.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Sytha: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Sytha')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_Sytha.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Taun: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Taun')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Taun.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};

class BNA_KC_Helmet_Phase2_Tyrant: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Tyrant)";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Tyrant.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Vortex: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF Helm ('Vortex')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\Helmet_P2_Vortex.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
    };
};

class BNA_KC_Helmet_Phase2_Woods: BNA_KC_Helmet_Phase2_Base
{
	displayName = "[KC] INF Helm ('Woods')";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Customs\Data\Helmets\Standard\Phase 2\BNA_KC_Helmet_P2_Woods.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa",
	};
};


// ┌───────────────────┐
// │    ENG Helmets    │
// └───────────────────┘
class BNA_KC_Helmet_Engineer;
/*
class BNA_KC_Helmet_Engineer_x: BNA_KC_Helmet_Engineer
{
	displayName = "[KC] INF ENG Helm ('x')";
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Engineer\BNA_KC_Helmet_Engineer_x.paa",
        "ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};
*/


// ┌───────────────────┐
// │    AB  Helmets    │
// └───────────────────┘
class BNA_KC_Helmet_Airborne;
/*
class BNA_KC_Helmet_Airborne_x: BNA_KC_Helmet_Airborne
{
	displayName = "[KC] AB Helm ('x')";
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Airborne\BNA_KC_Helmet_Airborne_x.paa"
    };
};
*/


// ┌───────────────────┐
// │  AVI P1  Helmets  │
// └───────────────────┘
class BNA_KC_Helmet_Phase1_Pilot;

class BNA_KC_Helmet_Phase1_Pilot_Bailout: BNA_KC_Helmet_Phase1_Pilot
{
	displayName = "[KC] AVI P1 Helm ('Bailout')";
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 1\BNA_KC_Helmet_P1_Pilot_Bailout.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase1_Pilot_Blue: BNA_KC_Helmet_Phase1_Pilot
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase1_Pilot_Blue";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase1_Pilot_Blue_Bacta";

	subItems[] = {};

	displayName = "[KC] AVI P1 Helm ('Blue')";
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 1\BNA_KC_Helmet_P1_Pilot_Blue.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase1_Pilot_Blue_Bacta: BNA_KC_Helmet_Phase1_Pilot_Blue
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] AVI P1 Helm ('Blue') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
		"",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 1\BNA_KC_Helmet_P1_Pilot_Blue.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa"
    };
};

class BNA_KC_Helmet_Phase1_Pilot_Mischief: BNA_KC_Helmet_Phase1_Pilot
{
	displayName = "[KC] AVI P1 Helm ('Mischief')";
	hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 1\BNA_KC_Helmet_P1_Pilot_Mischief.paa",
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 1\BNA_KC_Helmet_P1_Pilot_Mischief_LifeSupport.paa",
        "ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};



// ┌───────────────────┐
// │  AVI P2  Helmets  │
// └───────────────────┘
class BNA_KC_Helmet_Phase2_Pilot;

class BNA_KC_Helmet_Phase2_Pilot_Bailout: BNA_KC_Helmet_Phase2_Pilot
{
	displayName = "[KC] AVI Helm ('Bailout')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 2\BNA_KC_Helmet_P2_Pilot_Bailout.paa",
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Pilot_Blue: BNA_KC_Helmet_Phase2_Pilot
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Pilot_Blue";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Pilot_Blue_Bacta";

	subItems[] = {};

	displayName = "[KC] AVI Helm ('Blue')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 2\BNA_KC_Helmet_P2_Pilot_Blue.paa",
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Pilot_Blue_Bacta: BNA_KC_Helmet_Phase2_Pilot_Blue
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] AVI Helm ('Blue') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 2\BNA_KC_Helmet_P2_Pilot_Blue.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa"
    };
};

class BNA_KC_Helmet_Phase2_Pilot_Mischief: BNA_KC_Helmet_Phase2_Pilot
{
	displayName = "[KC] AVI Helm ('Mischief')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Pilots\Phase 2\BNA_KC_Helmet_P2_Pilot_Mischief.paa",
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};


// ┌───────────────────┐
// │  P1 ARMR Helmets  │
// └───────────────────┘
class BNA_KC_Helmet_Phase1_Tanker;

class BNA_KC_Helmet_Phase1_Tanker_Grey: BNA_KC_Helmet_Phase1_Tanker
{
	displayName = "[KC] ARMR P1 Helm ('Grey')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecOP\Phase 1\BNA_KC_Helmet_P1_Tanker_Grey.paa",
        "ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
    };
};


// ┌───────────────────┐
// │  P2 ARMR Helmets  │
// └───────────────────┘
class BNA_KC_Helmet_Phase2_Tanker;

class BNA_KC_Helmet_Phase2_Tanker_Catholic: BNA_KC_Helmet_Phase2_Tanker
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_Phase2_Tanker_Catholic";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_Phase2_Tanker_Catholic_Kyber";

	displayName = "[KC] ARMR Helm ('Catholic')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecOP\Phase 2\Helmet_P2_Tanker_Catholic.paa",
        "ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };

	subItems[] = {};
};
class BNA_KC_Helmet_Phase2_Tanker_Catholic_Kyber: BNA_KC_Helmet_Phase2_Tanker_Catholic
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] ARMR Helm ('Catholic') [Kyber Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecOP\Phase 2\Helmet_P2_Tanker_Catholic.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Kyber.paa"
    };
};


class BNA_KC_Helmet_Phase2_Tanker_Grey: BNA_KC_Helmet_Phase2_Tanker
{
	displayName = "[KC] ARMR Helm ('Grey')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecOP\Phase 2\BNA_KC_Helmet_P2_Tanker_Grey.paa",
        "ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };
};


// ┌───────────────────┐
// │    SF  Helmets    │
// └───────────────────┘
// May be broken up into separate ARC, ARF, and BARC categories if necessary.
class BNA_KC_Helmet_ARC;
class BNA_KC_Helmet_ARF;
class BNA_KC_Helmet_BARC;

class BNA_KC_Helmet_ARC_Drake: BNA_KC_Helmet_ARC
{
	BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_ARC_Drake";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_ARC_Drake_Bacta";

	displayName = "[KC] SF ARC Helm ('Drake')";
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARC\BNA_KC_Helmet_ARC_Drake.paa",
	    "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
	};
};
class BNA_KC_Helmet_ARC_Drake_Bacta: BNA_KC_Helmet_ARC_Drake
{
	// Scopes
	scope = 1;
    scopeArsenal = 1;

	displayName = "[KC] SF ARC Helm ('Drake') [Bacta Visor]";
	hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARC\BNA_KC_Helmet_ARC_Drake.paa",
	    "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Bacta.paa"
	};
};

class BNA_KC_Helmet_ARC_Hagrid: BNA_KC_Helmet_ARC
{
	displayName = "[KC] SF ARC Helm ('Hagrid')";
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARC\BNA_KC_Helmet_ARC_Hagrid.paa",
	    "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
	};
};

class BNA_KC_Helmet_ARC_Tyrant: BNA_KC_Helmet_ARC
{
	displayName = "[KC] SF ARC Helm ('Tyrant')";
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARC\BNA_KC_Helmet_ARC_Tyrant.paa",
	    "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
	};
};

class BNA_KC_Helmet_ARF_Patriot: BNA_KC_Helmet_ARF
{
	displayName = "[KC] SF ARF Helm ('Patriot')";
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARF\BNA_KC_Helmet_ARF_Patriot.paa",
	    "", // Helmet "flaps"
        "ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" // Visor
	};
};

class BNA_KC_Helmet_ARF_Sin: BNA_KC_Helmet_ARF
{
	displayName = "[KC] SF ARF Helm ('Sin')";
	hiddenSelectionsTextures[] =
	{
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARF\BNA_KC_Helmet_ARF_Sin.paa",
	    "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\ARF\Helmet_ARF_Sin_Flaps.paa", // Helmet "flaps"
        "ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" // Visor
	};
};

class BNA_KC_Helmet_BARC_Rat: BNA_KC_Helmet_BARC
{
    // NVG Script
    BNAKC_Helmet_Toggle = 1;
    BNAKC_Helmet_Off = "BNA_KC_Helmet_BARC_Rat";
    BNAKC_Helmet_On  = "BNA_KC_Helmet_BARC_Rat_Crimson";

    displayName = "[KC] SF BARC Helm ('Rat')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\BARC\BNA_KC_Helmet_BARC_Rat.paa",
        "ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_BARC_Rat_Crimson: BNA_KC_Helmet_BARC_Rat
{
    // Scopes
    scope = 1;
    scopeArsenal = 1;

    displayName = "[KC] SF BARC Helm ('Rat') [Crimson Visor]";
    hiddenSelectionsMaterials[] =
    {
        "",
        "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\SpecialForces\BARC\BNA_KC_Helmet_BARC_Rat.paa",
        "BNA_KC_Gear\Customs\Data\Visors\BNA_KC_Visor_Crimson.paa"
    };
};


// ┌────────────────────┐
// │    Snow Helmets    │
// └────────────────────┘
class BNA_KC_Helmet_Insulated;

class BNA_KC_Helmet_Insulated_Dexus: BNA_KC_Helmet_Insulated
{
	displayName = "[KC] INF Snow Helm ('Dexus')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Insulated\BNA_KC_Helmet_Insulated_Dexus.paa"
    };
};

class BNA_KC_Helmet_Insulated_Joe: BNA_KC_Helmet_Insulated
{
	displayName = "[KC] INF Snow Helm ('Joe')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Insulated\BNA_KC_Helmet_Insulated_Joe.paa"
    };
};

class BNA_KC_Helmet_Insulated_Keeli: BNA_KC_Helmet_Insulated
{
	displayName = "[KC] INF Snow Helm ('Keeli')";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Helmets\Insulated\BNA_KC_Helmet_Insulated_Keeli.paa"
    };
};