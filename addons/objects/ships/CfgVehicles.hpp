class CfgVehicles {
    #include "configs\Resurgence_Parts.hpp"

    class venator_base_5;
    class CLASS(Venator_Resurgence_ClosedFullyHollowed): venator_base_5 {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(StaticShips);

        displayName = "Resurgence (Closed Fully Hollowed)";
        multiStructureParts[] = {
            {QCLASS(Venator_Resurgence_Body1_1), "body1_1"},
            {QCLASS(Venator_Resurgence_Body1_2), "body1_2"},
            {QCLASS(Venator_Resurgence_Body2_1), "body2_1"},
            {QCLASS(Venator_Resurgence_Body2_2), "body2_2"},
            {QCLASS(Venator_Resurgence_Body2_3), "body2_3"},
            {QCLASS(Venator_Resurgence_Body3), "body3"},
            {QCLASS(Venator_Resurgence_Body4), "body4"},
            {QCLASS(Venator_Resurgence_Body5), "body5"},
            {QCLASS(Venator_Resurgence_Body6), "body6"},
            {QCLASS(Venator_Resurgence_Body7), "body7"},
            {QCLASS(Venator_Resurgence_Body8), "body8"},
            {QCLASS(Venator_Resurgence_Body9), "body9"},
            {QCLASS(Venator_Resurgence_Body10), "body10"},
            {QCLASS(Venator_Resurgence_Door), "door"},
            {QCLASS(Venator_Resurgence_Engine), "engine"},
            {QCLASS(Venator_Resurgence_Bridge), "bridge"}
        };
    };

    class CLASS(Venator_Resurgence_OpenFullyHollowed): CLASS(Venator_Resurgence_ClosedFullyHollowed) {
        displayName = "Resurgence (Open Fully Hollowed)";
        multiStructureParts[] = {
            {QCLASS(Venator_Resurgence_Body1_1), "body1_1"},
            {QCLASS(Venator_Resurgence_Body1_2), "body1_2"},
            {QCLASS(Venator_Resurgence_Body2_1), "body2_1"},
            {QCLASS(Venator_Resurgence_Body2_2), "body2_2"},
            {QCLASS(Venator_Resurgence_Body2_3), "body2_3"},
            {QCLASS(Venator_Resurgence_Body3), "body3"},
            {QCLASS(Venator_Resurgence_Body4), "body4"},
            {QCLASS(Venator_Resurgence_Body5), "body5"},
            {QCLASS(Venator_Resurgence_Body6), "body6"},
            {QCLASS(Venator_Resurgence_Body7), "body7"},
            {QCLASS(Venator_Resurgence_Body8), "body8"},
            {QCLASS(Venator_Resurgence_Body9), "body9"},
            {QCLASS(Venator_Resurgence_Body10), "body10"},
            {QCLASS(Venator_Resurgence_Door2), "door"},
            {QCLASS(Venator_Resurgence_Engine), "engine"},
            {QCLASS(Venator_Resurgence_Bridge), "bridge"}
        };
    };

    class venator_zeus;
    class CLASS(Venator_Resurgence_Zeus): venator_zeus {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(StaticShips);

        displayName = "Resurgance (Zeus)";

        hiddenSelectionsTextures[] = {
            QPATHTOF(ships\data\Resurgence\Body1_co.paa),
            QPATHTOF(ships\data\Resurgence\Body2_co.paa),
            QPATHTOF(ships\data\Resurgence\Body3_co.paa),
            QPATHTOF(ships\data\Resurgence\Body4_co.paa),
            QPATHTOF(ships\data\Resurgence\Body5_co.paa),
            QPATHTOF(ships\data\Resurgence\Body6_co.paa),
            QPATHTOF(ships\data\Resurgence\Body7_co.paa),
            QPATHTOF(ships\data\Resurgence\Body8_co.paa),
            QPATHTOF(ships\data\Resurgence\Body9_co.paa),
            QPATHTOF(ships\data\Resurgence\Body10_co.paa),
            QPATHTOF(ships\data\Resurgence\Door_co.paa),
            QPATHTOF(ships\data\Resurgence\Engine_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior1_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior2_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior3_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior4_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior5_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior6_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior7_co.paa),
            QPATHTOF(ships\data\Resurgence\Interior8_co.paa),
            QPATHTOF(ships\data\Resurgence\Bridge_co.paa)
        };
    };
};