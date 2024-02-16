class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(Helmets_Airborne)
        {
            label = "Airborne Helmets";
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

        class CLASS(Helmets_ARC)
        {
            label = "ARC Helmets";
            author = "Keeli Company Aux Team";
            options[] = {"camo", "Base", "CT", "CT_Legacy", "NightShade", "Enlisted_CamoBrown", "Enlisted_CamoGrey", "Enlisted_CamoNight"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Base",
                    "CT",
                    "CT_Legacy",
                    "NightShade",
                    "Enlisted_CamoBrown",
                    "Enlisted_CamoGrey",
                    "Enlisted_CamoNight"
                };
            };

            class Base { label = "Base"; };
            class CT { label = "CT"; };
            class CT_Legacy { label = "CT (Legacy)"; };
            class NightShade { label = "NightShade"; };
            class Enlisted_CamoBrown { label = "Enlisted (Brown Camo)"; };
            class Enlisted_CamoGrey { label = "Enlisted (Grey Camo)"; };
            class Enlisted_CamoNight { label = "Enlisted (Night Camo)"; };
        };
    };
};