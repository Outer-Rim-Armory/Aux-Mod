class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(Helmet_Airborne)
        {
            label = "[KC] Airborne Helmets";
            author = "Keeli Company Aux Team";
            options[] = {"camo", "Base", "CT", "CT_v2"};

            class camo
            {
                changeInGame = FALSE; // Can be changed from ACE interact
                values[] =
                {
                    "Base",
                    "CT",
                    "CT_v2"
                };
            };

            class Base { label = "Base"; };
            class CT { label = "CT"; };
            class CT_v2 { label = "CT v2"; };
        };
    };
};