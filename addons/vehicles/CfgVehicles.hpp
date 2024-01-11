class CfgVehicles
{
    class LandVehicle;
    class Car: LandVehicle
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
    class Tank: LandVehicle
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };

    class Air;
    class Helicopter: Air
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
    class Plane: Air
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };

    class Ship;
    class Ship_F: Ship
    {
        class ACE_SelfActions
        {
            SKIN_SWITCHER;
        };
    };
};