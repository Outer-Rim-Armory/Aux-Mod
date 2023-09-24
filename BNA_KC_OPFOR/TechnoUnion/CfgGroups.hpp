class CfgGroups
{
    class East
    {
        class BNA_KC_OPFOR_TU
        {
            name = "[KC] Techno Union";

            class BNA_KC_TU_Infantry
            {
                name = "Infantry";
                class RifleSquad
                {
                    faction = "BNA_KC_OPFOR_TU";
                    name = "Rifleman Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0
                    {
                        side = 0;
                        vehicle = "BNA_KC_OPFOR_Unit_TU_SL";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_Rifleman";
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1
                    {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1
                    {
                        position[] = {10, -10, 0};
                    };
                    class Object4: Object1
                    {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object1
                    {
                        position[] = {15, -15, 0};
                    };
                    class Object6: Object1
                    {
                        position[] = {-15, -15, 0};
                    };
                };

                class AntiArmorSquad
                {
                    faction = "BNA_KC_OPFOR_TU";
                    name = "Anti-Armor Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0
                    {
                        side = 0;
                        vehicle = "BNA_KC_OPFOR_Unit_TU_SL";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_AT";
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1
                    {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_Rifleman";
                        position[] = {10, -10, 0};
                    };
                    class Object4: Object3
                    {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object3
                    {
                        position[] = {15, -15, 0};
                    };
                    class Object6: Object3
                    {
                        position[] = {-15, -15, 0};
                    };
                };

                class AssaultSquad
                {
                    faction = "BNA_KC_OPFOR_TU";
                    name = "Assault Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0
                    {
                        side = 0;
                        vehicle = "BNA_KC_OPFOR_Unit_TU_SL";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_Rifleman";
                        rank = "Private";
                        position[] = {5, -5, 0};
                    };
                    class Object2: Object1
                    {
                        position[] = {-5, -5, 0};
                    };
                    class Object3: Object1
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_AssaultMedium";
                        position[] = {10, -10, 0};
                    };
                    class Object4: Object3
                    {
                        position[] = {-10, -10, 0};
                    };
                    class Object5: Object1
                    {
                        vehicle = "BNA_KC_OPFOR_Unit_TU_AssaultHeavy";
                        position[] = {15, -15, 0};
                    };
                    class Object6: Object5
                    {
                        position[] = {-15, -15, 0};
                    };
                };
            };
        };
    };
};