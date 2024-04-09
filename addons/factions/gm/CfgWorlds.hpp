class CfgWorlds {
    class GenericNames {
        class CLASS(GM_Soldier) {
            class FirstNames {
                GM = "GM";
            };
            class LastNames {
                Soldier = "Soldier";
            };
        };

        class CLASS(RLA_Soldier): CLASS(GM_Soldier) {
            class FirstNames {
                RLA = "RLA";
            };
        };
    };
};