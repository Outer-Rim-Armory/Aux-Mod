class CfgPatches
{
    class BNA_KC_Props_Flags
    {
        addonRootClass = "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
			"ls_flags"
                // Base Flag Objects
        };
        units[] =
		{
			"BNA_KC_Flag_KeeliCompany_Pole",
            "BNA_KC_Flag_KeeliCompany_Vertical",
            "BNA_KC_Flag_KeeliCompany_Horizontal",
            "BNA_KC_Flag_KeeliCompanyDamaged_Pole",
            "BNA_KC_Flag_KeeliCompanyDamaged_Vertical",
            "BNA_KC_Flag_KeeliCompanyDamaged_Horizontal",
            "BNA_KC_Flag_KeeliCompanyDamaged_HorizontalMirrored"
		};
        weapons[] = {};
    };
};