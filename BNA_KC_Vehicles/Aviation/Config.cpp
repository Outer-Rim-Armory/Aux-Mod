#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "..\Common\Macros.hpp"


class CfgVehicles
{

};


class CfgSounds
{
    class BNA_KC_ImpulseOn
    {
        name = "LAAT Impulse On";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOn.wav", 800, 1, 800};
        titles[] = {1, "Impulse Turns On"};
    };
    class BNA_KC_ImpulseOff
    {
        name = "LAAT Impulse Off";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOff.wav", 500, 1, 500};
        titles[] = {1, "Impulse Turns Off"};
    };
};