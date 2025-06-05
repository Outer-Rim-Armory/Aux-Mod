class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class BNA_KC_Datapad_Mag_Base: CA_Magazine
	{
		// type = "3*		256";
	    author = "JRY";
	    scope = 0;
	    // allowedSlots[] = {}; {701,801,901};
	    picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_data.paa";
	    count = 3;
	    mass = 0;
	    initSpeed = 306;
	    descriptionShort = "Datapad Cartridge";
	};
	class BNA_KC_Datapad_Mag_MortarStrike: BNA_KC_Datapad_Mag_Base
	{
		ammo = "BNA_KC_Shell_PlasmaMortar_82mm_HE";
	    author = "JRY";
	    scope = 2;
	    useAction = 0;
	    displayName = "[KC] Datapad Cartridge (Mortar/Smoke Strike)";
	    descriptionShort = "Datapad Cartidge Type: Mortar Strike and Smoke Strike<br />Rounds: 3<br />Used in: Datapad";
	};
	class BNA_KC_Datapad_Mag_AV7AStrike: BNA_KC_Datapad_Mag_Base
	{
		ammo = "3AS_Cluster_300mm_AMOS";
	    author = "JRY";
	    scope = 2;
	    useAction = 0;
	    displayName = "[KC] Datapad Cartridge (AV-7 Artillery Strike)";
	    descriptionShort = "Datapad Cartidge Type: AV-7 Artillery Strike<br />Rounds: 3<br />Used in: Datapad";
	};
};