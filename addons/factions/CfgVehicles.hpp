class CfgVehicles
{
    class ls_redforUnit_base;
    class CLASS(OPFOR_Unit_Base): ls_redforUnit_base
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";
        displayName = "OPFOR Unit Base";
        uniformClass = "BNA_KC_OPFOR_Uniform_Base";

        modelSides[] = {OPFOR};

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        backpack = "";
    };

    class ls_greenforUnit_base;
    class CLASS(INDEP_Unit_Base): ls_greenforUnit_base
    {
        SCOPE_PRIVATE;
        displayName = "INDEP Unit Base";
        uniformClass = "BNA_KC_INDEP_Uniform_Base";

        modelSides[] = {INDEP};

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        backpack = "";
    };

    class Bag_Base;
    class CLASS(Other_Backpack_Base): Bag_Base
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "Backpack Base";
        descriptionshort = "";
        maximumLoad = 200;
        mass = 30;

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "";
    };
};