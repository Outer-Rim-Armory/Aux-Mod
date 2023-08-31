#include "CfgPatches.hpp"


class CfgWeapons
{
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
    };
};