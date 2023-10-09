#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"


class CfgWeapons
{
};


class CBA_Extended_EventHandlers_base;
class CfgVehicles
{

};


class CfgFunctions
{
    class BNAKC
    {
        class ATRT
        {
            file = "BNA_KC_Vehicles\Light\Data\Functions\ATRT";
            class initATRT {};
            class mountATRT {};
            class dismountATRT {};
            class spawnATRTSmoke {};
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_ATRT
    {
        class BNA_KC_ATRT_init
        {
            init = "(_this select 0) call BNAKC_fnc_initATRT;";
        };
    };
};