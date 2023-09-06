class CfgFunctions
{
    class BNAKC
    {
        class Aviation
        {
            file = "BNA_KC_Vehicles\Aviation\Data\Functions";
            class canSpecialLoad {};
            class specialLoad {};
        };
    };

    class ls_vehicle
    {
        class scripts
        {
            class ImpulseKey
            {
                file = "BNA_KC_Vehicles\Aviation\Data\Functions\fn_impulseKey.sqf";
            };
            class RepulseKey
            {
                file = "BNA_KC_Vehicles\Aviation\Data\Functions\fn_repulseKey.sqf";
            };
        };
    };
};


class Extended_init_EventHandlers
{
    // Add LS Impulse to 3AS vics
    class BNA_KC_LAATi_Base
    {
        class BNA_KC_Impulse_Init
        {
            init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
        };
    };
};