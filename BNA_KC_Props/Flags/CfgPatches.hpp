class CfgPatches
{
    class BNA_KC_Props_Flags
    {
        addonRootClass = "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
			"ls_flags"
                // Base Flag Objects
        };
        units[] =
		{
			"BNA_KC_Flag_KeeliCompany_Pole",
            "BNA_KC_Flag_KeeliCompany_Vertical",
            "BNA_KC_Flag_KeeliCompany_Horizontal"
		};
        weapons[] = {};
    };
};