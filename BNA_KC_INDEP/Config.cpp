#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_greenforHelmet_base;
    class BNA_KC_INDEP_Helmet_Base: ls_greenforHelmet_base
    {
        displayName = "INDEP Helmet Base";
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_greenforUniform_base;
    class BNA_KC_INDEP_Uniform_Base: ls_greenforUniform_base
    {
        displayName = "INDEP Uniform Base";
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class ls_greenforVest_base;
    class BNA_KC_INDEP_Vest_Base: ls_greenforVest_base
    {
        displayName = "INDEP Vest Base";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_greenforUnit_base;
    class BNA_KC_INDEP_Unit_Base: ls_greenforUnit_base
    {
        displayName = "INDEP Unit Base";
        uniformClass = "BNA_KC_INDEP_Uniform_Base";

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
    class BNA_KC_INDEP_Backpack_Base: Bag_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        displayName = "INDEP Backpack Base";
        descriptionshort = "";
        maximumLoad = 200;
        mass = 30;

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "";
    };
};