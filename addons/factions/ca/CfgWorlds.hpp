class CfgWorlds {
    class GenericNames {
        class CLASS(CA_Clansman) {
            class FirstNames {
                Arctic = "Arctic";
            };
            class LastNames {
                Clansman = "Clansman";
            };
        };
        class CLASS(CA_Arctic): CLASS(CA_Clansman) {
            class FirstNames {
                Governor = "Governor";
            };
            class LastNames {
                Arctic = "Arctic";
            };
        };
    };
};
