	//---------------------------------------------------
	// Helmet Customs
	//---------------------------------------------------
	
	// Trooper
	// Keeli
	class BNA_KC_P2Helmet_Keeli: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Keeli's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Keeli_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Guardian
	class BNA_KC_P2Helmet_Guardian: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Guardian's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Guardian_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Dexus
	class BNA_KC_P2Helmet_Dexus: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Dexus's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Dexus_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Vortex
	class BNA_KC_P2Helmet_Vortex: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Vortex's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Vortex_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Burnt
	class BNA_KC_P2Helmet_Burnt: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Burnt's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Burnt_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Patriot
	class BNA_KC_P2Helmet_Patriot: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Patriot's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Patriot_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Joe
	class BNA_KC_P2Helmet_Joe: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Joe's Helmet";
		hiddenSelectionsMaterials[] = 
		{
			"",
			"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Joe_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_RedVisor_CO.paa"
		};
	};
	
	// Commander Fil
	class BNA_KC_P2Helmet_Fil: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Commander Fil's Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Fil_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Commander Fil's Squad Members
	class BNA_KC_P2Helmet_Fil_Squad: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] CM-Fil's Squad Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Fil_Squad_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// Pilot
	// Dexus
	class BNA_KC_PilotHelmet_Dexus: BNA_KC_PilotHelmet
	{
		displayName = "[KC] Dexus's Helmet (Pilot)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_PilotHelmet_Dexus_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
		};
	};
	
	// Engineer
	// Snow Trooper
	// Reeker
	
	//---------------------------------------------------
	// Uniforms
	//---------------------------------------------------
	
	// Trooper
	// Keeli
	class BNA_KC_Uniform_Keeli: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] Clone Trooper Uniform (Keeli)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Keeli";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Guardian
	class BNA_KC_Uniform_Guardian: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] Guardian's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Guardian";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Joe
	class BNA_KC_Uniform_Joe: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] Joe's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Joe";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Commander Fil
	class BNA_KC_Uniform_Fil: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] Commander Fil's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Fil";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Commander Fil's Squad Members
	class BNA_KC_Uniform_Fil_Squad: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] CM-Fil's Squad Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Fil_Squad";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	//---------------------------------------------------
	// Vests
	//---------------------------------------------------