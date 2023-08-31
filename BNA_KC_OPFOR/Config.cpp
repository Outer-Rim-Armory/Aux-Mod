#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_Uniform_OPFOR_Base: ls_redforUniform_base
    {
        displayName = "OPFOR Uniform Base";
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class ls_redforVest_base;
    class BNA_KC_Vest_OPFOR_Base: ls_redforVest_base
    {
        displayName = "OPFOR Vest Base";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_redforUnit_base;
    class BNA_KC_Unit_OPFOR_Base: ls_redforUnit_base
    {
        displayName = "OPFOR Unit Base";
    };
};