class CBA_Extended_EventHandlers;

class CfgVehicles
{
    class O_Soldier_02_F;
    class ls_redforUnit_base: O_Soldier_02_F
    {
        class EventHandlers;
    };
    class CLASS(OPFOR_Unit_Base): ls_redforUnit_base
    {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "OPFOR Unit Base";
        uniformClass = "BNA_KC_OPFOR_Uniform_Base";

        editorSubcategory = QCLASS(EdSubCat_Infantry);

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

        class EventHandlers: EventHandlers
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };

    class I_Soldier_02_F;
    class ls_greenforUnit_base: I_Soldier_02_F
    {
        class EventHandlers;
    };
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

        class EventHandlers: EventHandlers
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };

    class Bag_Base;
    class CLASS(Other_Backpack_Base): Bag_Base
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

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