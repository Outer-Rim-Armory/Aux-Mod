class CfgPatches
{
    class BNA_KC_Props_Deployables
    {
        addonRootClass = "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Props_Resupply",
                // Resupply object used as base
            "cba_common",
                // Base inventory item
            "RD501_patch_fx7_droid"
                // Model of FX-7
        };
        units[] =
		{
            "BNA_KC_Deployable_Object",
			"BNA_KC_Deployable_MedicalDroid"
		};
        weapons[] =
        {
            "BNA_KC_Deployable_MedicalDroid_Item"
        };
    };
};