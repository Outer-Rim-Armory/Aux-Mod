#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_redforHelmet_base;
    class BNA_KC_OPFOR_Helmet_Base: ls_redforHelmet_base
    {
        displayName = "OPFOR Helmet Base";
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_OPFOR_Uniform_Base: ls_redforUniform_base
    {
        displayName = "OPFOR Uniform Base";
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class ls_redforVest_base;
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        displayName = "OPFOR Vest Base";
        descriptionShort = "Armor Level III";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_redforUnit_base;
    class BNA_KC_OPFOR_Unit_Base: ls_redforUnit_base
    {
        displayName = "OPFOR Unit Base";
        uniformClass = "BNA_KC_OPFOR_Uniform_Base";

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

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class Bag_Base;
    class BNA_KC_OPFOR_Backpack_Base: Bag_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        displayName = "OPFOR Backpack Base";
        descriptionshort = "";
        maximumLoad = 200;
        mass = 30;

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "";
    };
};