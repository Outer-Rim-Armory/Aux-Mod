class CfgGroups {
    class Indep {
        class FACTION(SC) {
            name = "[KC] Shadow Collective";

            class CLASS(SC_Infantry_T1) {
                name = "Infantry T1 - Basic";
                class RifleSquad {
                    faction = QFACTION(SC);
                    name = "Rifleman Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    side = INDEP;

                    class Object0 {
                        side = INDEP;
                        vehicle = QCLASS(SC_Unit_SL);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0 {
                        vehicle = QCLASS(SC_Unit_Rifleman);
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

                class WeaponsSquad: RifleSquad {
                    name = "Weapons Squad";
                    class Object0: Object0 {};
                    class Object1: Object1 {
                        vehicle = QCLASS(SC_Unit_Marksman);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(SC_Unit_Marksman);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(SC_Unit_AT);
                    };
                    class Object4: Object4 {};
                    class Object5: Object5 {};
                    class Object6: Object6 {};
                };
            };

            class CLASS(SC_Infantry_T2): CLASS(SC_Infantry_T1) {
                name = "Infantry T2 - Veteran";
                class RifleSquad: RifleSquad {
                    class Object0: Object0 {
                        vehicle = QCLASS(SC_Unit_SL_T2);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                };

                class WeaponsSquad: WeaponsSquad {
                    class Object0: Object0 {
                        vehicle = QCLASS(SC_Unit_SL_T2);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(SC_Unit_Marksman_T2);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(SC_Unit_Marksman_T2);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(SC_Unit_AT_T2);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(SC_Unit_AA_T2);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T2);
                    };
                };
            };

            class CLASS(SC_Infantry_T3): CLASS(SC_Infantry_T1) {
                name = "Infantry T3 - Elite";
                class RifleSquad: RifleSquad {
                    class Object0: Object0 {
                        vehicle = QCLASS(SC_Unit_SL_T3);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                };

                class WeaponsSquad: WeaponsSquad {
                    class Object0: Object0 {
                        vehicle = QCLASS(SC_Unit_SL_T3);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(SC_Unit_Marksman_T3);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(SC_Unit_Marksman_T3);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(SC_Unit_AT_T3);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(SC_Unit_AA_T3);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(SC_Unit_Rifleman_T3);
                    };
                };
            };
        };
    };
};
