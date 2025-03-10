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

        displayName = "Venator (Resurgance)";

        hiddenSelectionsTextures[] = {
            QPATHTOF(ships\data\Resurgence\Old\Body1_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body2_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body3_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body4_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body5_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body6_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body7_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body8_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body9_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Body10_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Door_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Engine_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior1_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior2_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior3_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior4_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior5_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior6_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior7_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Interior8_co.paa),
            QPATHTOF(ships\data\Resurgence\Old\Bridge_co.paa)
        };
    };

    class ls_providence_zeus;
    class CLASS(Invincible_Zeus): ls_providence_zeus {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(StaticShips);

        displayName = "Providence (Invincible)";

         hiddenSelectionsTextures[] = {
            QPATHTOF(ships\data\Invincible\Body1_co.paa),
            QPATHTOF(ships\data\Invincible\Body2_co.paa),
            QPATHTOF(ships\data\Invincible\Body3_co.paa),
            QPATHTOF(ships\data\Invincible\Bridge_co.paa),
            QPATHTOF(ships\data\Invincible\Engine_co.paa),
            QPATHTOF(ships\data\Invincible\Interior_co.paa)
        };
    };

    class CLASS(Invisible_Hand_Zeus): ls_providence_zeus {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(StaticShips);

        displayName = "Providence (Invisible Hand)";

         hiddenSelectionsTextures[] = {
            QPATHTOF(ships\data\InvisibleHand\Body1_co.paa),
            QPATHTOF(ships\data\InvisibleHand\Body2_co.paa),
            QPATHTOF(ships\data\InvisibleHand\Body3_co.paa),
            QPATHTOF(ships\data\InvisibleHand\Bridge_co.paa),
            QPATHTOF(ships\data\InvisibleHand\Engine_co.paa),
            QPATHTOF(ships\data\InvisibleHand\Interior_co.paa)
        };
    };

    class 442_subjugator;
    class CLASS(Fatalis_Subjugator): 442_subjugator {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(StaticShips);

        displayName = "Fatalis";

        hiddenSelections[] = {"body1","body2","body3","body4","body5","bridge","emp1","emp2","engine"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(ships\data\Fatalis\Body1_co.paa),
            QPATHTOF(ships\data\Fatalis\Body2_co.paa),
            QPATHTOF(ships\data\Fatalis\Body3_co.paa),
            QPATHTOF(ships\data\Fatalis\Body4_co.paa),
            QPATHTOF(ships\data\Fatalis\Body5_co.paa),
            QPATHTOF(ships\data\Fatalis\Bridge_co.paa),
            QPATHTOF(ships\data\Fatalis\EMP1_co.paa),
            QPATHTOF(ships\data\Fatalis\EMP2_co.paa),
            QPATHTOF(ships\data\Fatalis\Engine_co.paa)
        };
    };
};