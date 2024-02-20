class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(Uniforms_Custom)
        {
            label = "Custom Uniforms";
            author = "Keeli Company Aux Team";
            options[] = {"camo"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Axel",
                    "Burnt",
                    "Defter",
                    "Dexus",
                    "Drake",
                    "Joe",
                    "Keeli",
                    "Keeli_CamoBrown",
                    "Keeli_CamoGrey",
                    "Rat",
                    "Sin",
                    "Tyrant"
                };

                class Axel { label = "Axel"; };
                class Burnt { label = "Burnt"; };
                class Defter { label = "Defter"; };
                class Dexus { label = "Dexus"; };
                class Drake { label = "Drake"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
                class Keeli_CamoBrown { label = "Keeli Brown"; };
                class Keeli_CamoGrey { label = "Keeli Grey"; };
                class Rat { label = "Rat"; };
                class Sin { label = "Sin"; };
                class Tyrant { label = "Tyrant"; };
            };
        };

        class CLASS(Uniforms_Insulated_Custom)
        {
            label = "Custom Insulated Uniforms (P2)";
            author = "Keeli Company Aux Team";
            options[] = {"camo"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Dexus",
                    "Joe",
                    "Keeli"
                };

                class Dexus { label = "Dexus"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
            };
        };
    };
};