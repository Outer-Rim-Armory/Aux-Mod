#include "CfgPatches.hpp"


class CfgVehicles
{
    class W41_LAAT_MK1;
    class W41_LAAT_MK2;
    // 41st has numbers swapped, mk1 = mk2, mk2 = mk1
    // 3AS Base Classes (For when dependency free)
    // class 3as_LAAT_Mk1;
    // class 3as_LAAT_Mk1Lights;
    // class 3as_LAAT_Mk2;
    // class 3as_LAAT_Mk2Lights;
    class lsd_heli_laatc;

    class BNA_KC_LAATi_MK1: W41_LAAT_MK2
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/i MK1";

        armor = 200;
        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\LAATi\BNA_KC_LAAT_Standard_Body.paa",
            "BNA_KC_Vehicles\Aviation\Data\LAATi\BNA_KC_LAAT_Standard_Wings.paa",
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };

        weapons[] =
        {
            "W41_plasma_weapon_HE",

            "ls_laat_DAR",
            "W41_AGM_missile_launcher",
            "W41_AA_missile_launcher",

            "Laserdesignator_pilotCamera",
            "ls_weapon_CMFlareLauncher",
            "SmokeLauncher"
        };
        magazines[] =
        {
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",

            "24Rnd_missiles" // Hydra Missiles
            "NCA_oro_AGM_missile_magazine",
            "NCA_oro_AGM_missile_magazine",
            "W41_A2A_missile_magazine",
            "W41_A2A_missile_magazine",

            "Laserbatteries",
            "Laser_Battery",
            "Laser_Battery",
            "Laser_Battery",

            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",

            "SmokeLauncherMag"
        };

        // Impulse
        tas_can_impulse = 0; // Disables 3AS's Impulse System
		ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
		ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
    };
    class BNA_KC_laati_mk2_3AS: BNA_KC_LAATi_MK1
    {
        // Dummy class
        scope = 1;
        scopeCurator = 1;
    };

    class BNA_KC_LAATi_MK2: W41_LAAT_MK1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/i MK2";

        armor = 200;
        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\LAATi\BNA_KC_LAAT_Standard_Body.paa",
            "BNA_KC_Vehicles\Aviation\Data\LAATi\BNA_KC_LAAT_Standard_Wings.paa",
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };

        weapons[] =
        {
            "W41_plasma_weapon_HE",
            "ls_laat_DAR",
            "W41_AGM_missile_launcher",
            "W41_AA_missile_launcher",

            "Laserdesignator_pilotCamera",
            "ls_weapon_CMFlareLauncher",
            "SmokeLauncher"
        };
        magazines[] =
        {
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",
            "W41_Plasma_Mags",

            "24Rnd_missiles" // Hydra Missiles
            "NCA_oro_AGM_missile_magazine",
            "NCA_oro_AGM_missile_magazine",
            "W41_A2A_missile_magazine",
            "W41_A2A_missile_magazine",

            "Laserbatteries",
            "Laser_Battery",
            "Laser_Battery",
            "Laser_Battery",

            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",

            "SmokeLauncherMag"
        };

        // Impulse
        tas_can_impulse = 0; // Disables 3AS's Impulse System
		ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
		ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
    };
    class BNA_KC_laati_mk1_3AS: BNA_KC_LAATi_MK2
    {
        // Dummy class
        scope = 1;
        scopeCurator = 1;
    };

    class BNA_KC_LAATc: lsd_heli_laatc
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/c";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Vehicles\Aviation\Data\LAATc\BNA_KC_LAATC_Auxiliary.paa",
            "BNA_KC_Vehicles\Aviation\Data\LAATc\BNA_KC_LAATC_Cockpit.paa",
            "lsd_vehicles_heli\laatc\data\glass_ca.paa",
            "BNA_KC_Vehicles\Aviation\Data\LAATc\BNA_KC_LAATC_Hull.paa",
            "BNA_KC_Vehicles\Aviation\Data\LAATc\BNA_KC_LAATC_Wings.paa"
        };
        textureList[] = {}; // Clears the extra skins
    };

    class 3AS_Republic_Transport_01;
    class BNA_KC_RepubTransport: 3AS_Republic_Transport_01
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Republic Transport";

        crew = "BNA_KC_Unit_Phase2_Pilot";

		hiddenselectionstextures[]=
		{
			"BNA_KC_Vehicles\Other\Data\Transport\BNA_KC_Republic_Transport_Body.paa",
			"3as\3as_starships\data\hs_int_co.paa"
		};
	};
};


class Extended_init_EventHandlers 
{
    // Add LS Impulse to 3AS vics
	class BNA_KC_LAATi_MK1
	{
		class BNA_KC_LAATi_MK1_init
		{
			init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
	class BNA_KC_LAATi_MK2
	{
		class BNA_KC_LAATi_MK2_init
		{
			init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
};


class CfgSounds
{
    class BNA_KC_ImpulseOn
    {
        name = "LAAT Impulse On";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOn.wav", db+160, 1};
        titles[] = {1, "Impulse Turns On"};
    };
    class BNA_KC_ImpulseOff
    {
        name = "LAAT Impulse Off";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOff.wav", db+160, 1};
        titles[] = {1, "Impulse Turns Off"};
    };
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VAviation
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Aviation";
	};
};