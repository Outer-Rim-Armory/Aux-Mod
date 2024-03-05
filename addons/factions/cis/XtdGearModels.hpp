class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(CIS_Uniforms_B1)
        {
            label = "B1 Battle Droid";
            author = "Keeli Company Aux Team";
            options[] = {"camo"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Standard",
                    "Crew"
                };

                class Standard { label = "Standard"; };
                class Crew { label = "Crew"; };
            };
        };
    };
};