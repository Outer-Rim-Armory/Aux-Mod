class CfgPatches
{
    class BNA_KC_Vehicles_Galaxy
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Air_F_Exp_VTOL_01",
                // Blackfish
            "BNA_KC_Gear"
                // Pilot unit
        };
        units[] =
        {
            "BNA_KC_Galaxy_Gunship",
            "BNA_KC_HAG_Base",
            "BNA_KC_Galaxy_Transport_Vehicle",
            "BNA_KC_HVT_Base",
            "BNA_KC_Galaxy_Transport_Infantry",
            "BNA_KC_HIT_Base"
        };
        weapons[] = {};
    };
};