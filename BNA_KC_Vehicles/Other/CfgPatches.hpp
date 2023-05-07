class CfgPatches
{
    class BNA_KC_Vehicles_Other
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3as_Starships",
				// Republic Transport
            "3AS_ATRT"
				// AT-RT
        };
        units[] =
		{
			"BNA_KC_RepubTransport",
			"BNA_KC_ATRT"
		};
        weapons[] = {};
    };
};