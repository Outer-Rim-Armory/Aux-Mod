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
                    "Marine",
                    "Commander",
                    "Crew",
                    "Pilot",
                    "Saboteur"
                };

                class Standard { label = "Standard"; };
                class Marine { label = "Crew"Marine };
                class Commander { label = "Commander"; };
                class Crew { label = "Crew"; };
                class Pilot { label = "Pilot"; };
                class Saboteur { label = "Saboteur"; };
            };
        };
    };
};