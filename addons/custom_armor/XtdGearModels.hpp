class XtdGearModels
{
    class CfgWeapons
    {
        class CLASS(Helmets_Phase1_Custom)
        {
            label = "Custom Helmets (P1)";
            author = "Keeli Company Aux Team";
            options[] = {"camo"};

            class camo
            {
                changeInGame = FALSE;
                values[] =
                {
                    "Axel",
                    "Burnt",
                    "Catholic",
                    "Cutthroat",
                    "Defter",
                    "Dexus",
                    "Drake",
                    "Grey",
                    "Hazard",
                    "Jaws",
                    "Jester",
                    "Joe",
                    "Keeli",
                    "Lou",
                    "Ox",
                    "Patriot",
                    "Rev",
                    "Rodger",
                    "Sage",
                    "Sin",
                    "Splashdown",
                    "Swoop",
                    "Tyrant",
                    "Woods"
                };

                class Axel { label = "Axel"; };
                class Burnt { label = "Burnt"; };
                class Catholic { label = "Catholic"; };
                class Cutthroat { label = "Cutthroat"; };
                class Defter { label = "Defter"; };
                class Dexus { label = "Dexus"; };
                class Drake { label = "Drake"; };
                class Grey { label = "Grey"; };
                class Hazard { label = "Hazard"; };
                class Jaws { label = "Jaws"; };
                class Jester { label = "Jester"; };
                class Joe { label = "Joe"; };
                class Keeli { label = "Keeli"; };
                class Lou { label = "Lou"; };
                class Ox { label = "Ox"; };
                class Patriot { label = "Patriot"; };
                class Rev { label = "Rev"; };
                class Rodger { label = "Rodger"; };
                class Sage { label = "Sage"; };
                class Sin { label = "Sin"; };
                class Splashdown { label = "Splashdown"; };
                class Swoop { label = "Swoop"; };
                class Tyrant { label = "Tyrant"; };
                class Woods { label = "Woods"; };
            };
        };

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