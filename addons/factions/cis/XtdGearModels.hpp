class XtdGearModels {
    class CfgWeapons {
        class CLASS(CIS_Uniforms_B1) {
            label = "B1 Battle Droid";
            author = AUTHOR;
            options[] = {"camo"};

            class camo {
                changeInGame = FALSE;
                values[] = {
                    "Standard",
                    "Crew",
                    "Saboteur"
                };

                class Standard { label = "Standard"; };
                class Crew { label = "Crew"; };
                class Saboteur { label = "Saboteur"; };
            };
        };
    };
};