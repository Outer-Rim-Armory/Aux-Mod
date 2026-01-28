class CfgVehicles {
    class 3AS_Octuptarra_Combat_F;
    class CLASS(Octuptarra_Combat_Base): 3AS_Octuptarra_Combat_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Walkers);

        displayName = "Octuptarra";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Combat_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };

    class 3AS_Octuptarra_Static_Combat_F;
    class CLASS(Octuptarra_Static_Combat_Base): 3AS_Octuptarra_Static_Combat_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Turrets);

        displayName = "Octuptarra Combat (Static)";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Combat_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };

    class 3AS_Octuptarra_Magna_F;
    class CLASS(Octuptarra_Magna_Base): 3AS_Octuptarra_Magna_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Walkers);

        displayName = "Octuptarra (Magna)";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Magna_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };

    class 3AS_Octuptarra_Static_Magna_F;
    class CLASS(Octuptarra_Static_Magna_Base): 3AS_Octuptarra_Static_Magna_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Turrets);

        displayName = "Octuptarra Magna (Static)";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Magna_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };

    class 3AS_Octuptarra_Torpedo_F;
    class CLASS(Octuptarra_Torpedo_Base): 3AS_Octuptarra_Torpedo_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Walkers);

        displayName = "Octuptarra (Torpedo)";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Combat_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };

    class 3AS_Octuptarra_Static_Torpedo_F;
    class CLASS(Octuptarra_Static_Torpedo_Base): 3AS_Octuptarra_Static_Torpedo_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(CIS);
        editorSubcategory = QEDSUBCAT(Turrets);

        displayName = "Octuptarra Torpedo (Static)";
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\octuptarra\data\textures\Body_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Legs_co.paa),
            QPATHTOF(land\octuptarra\data\textures\Combat_co.paa)
        };

        EGVAR(weapons,empCanBeDisabled) = TRUE;
    };
};
