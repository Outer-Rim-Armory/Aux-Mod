class CfgGroups {
    class West {
        class FACTION(TK) {
            name = "[KC] TK Troopers";

            class CLASS(TK_Infantry) {
                name = "Infantry";
                class RifleSquad {
                    faction = QFACTION(TK);
                    name = "Rifleman Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0 {
                        side = 1;
                        vehicle = QCLASS(TK_Officer);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0 {
                        vehicle = QCLASS(TK_Trooper);
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1 {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1 {
                        position[] = {10, -10, 0};
                    };
                    class Object4: Object1 {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object1 {
                        position[] = {15, -15, 0};
                    };
                    class Object6: Object1 {
                        position[] = {-15, -15, 0};
                    };
                };

                class RifleTeam: RifleSquad {
                    faction = QFACTION(TK);
                    name = "Rifleman Team";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0 {
                        side = 1;
                        vehicle = QCLASS(TK_Officer);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0 {
                        vehicle = QCLASS(TK_Trooper);
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1 {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1 {
                        position[] = {10, -10, 0};
                    };
                };

                class AntiArmorTeam: RifleSquad {
                    faction = QFACTION(TK);
                    name = "Anti-Armor Team";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0 {
                        side = 1;
                        vehicle = QCLASS(TK_Officer);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0 {
                        vehicle = QCLASS(TK_AT_Trooper);
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1 {
                        vehicle = QCLASS(TK_Trooper);
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1 {
                        vehicle = QCLASS(TK_Trooper);
                        position[] = {10, -10, 0};
                    };
                };
            };
        };
    };
};
