class CfgWorlds {
    class GenericNames {
        class CLASS(CB_Clansman) {
            class FirstNames {
                Bel = "Bel";
            };
            class LastNames {
                Clansman = "Clansman";
            };
        };
        class CLASS(CB_Mommy): CLASS(CB_Clansman) {
            class FirstNames {
                Officer = "Officer";
            };
            class LastNames {
                Mommy = "Mommy";
            };
        };
    };
};
