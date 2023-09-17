class CfgPatches
{
    class BNA_KC_Props_Gonks
    {
        addonRootClass= "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
			"3as_GNK_Prop",
                // Gonk
            "3AS_Prop_Terminals",
                // Terminal
            "RD501_patch_fx7_droid"
                // Model of FX-7
        };
        units[] =
		{
			"BNA_KC_Utility_Base",
			"BNA_KC_Gonk_Uniforms",
			"BNA_KC_Gonk_Permissions",
            "BNA_KC_Utility_Arsenal",
            "BNA_KC_Utility_Heal"
		};
        weapons[] = {};
    };
};