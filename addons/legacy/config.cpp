#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            QCLASS(armor)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Helmet_ARF),
            QCLASS(Helmet_ARC),
            QCLASS(Uniform_ARF),
            QCLASS(Uniform_ARC),
            QCLASS(Vest_Officer_Keeli)
        };
        VERSION_CONFIG;
    };

    class CLASS(Gear): ADDON {};
    class CLASS(Gear_Airborne): ADDON {};
    class CLASS(Gear_Armored): ADDON {};
    class CLASS(Gear_Aviation): ADDON {};
    class CLASS(Gear_Commandos): ADDON {};
    class CLASS(Gear_Customs): ADDON {};
    class CLASS(Gear_Engineers): ADDON {};
    class CLASS(Gear_Infantry): ADDON {};
    class CLASS(Gear_Insignias): ADDON {};
    class CLASS(Gear_Jedi): ADDON {};
    class CLASS(Gear_Jetpacks): ADDON {};
    class CLASS(Gear_SpecialForces): ADDON {};
    class CLASS(INDEP): ADDON {};
    class CLASS(INDEP_Galtorran): ADDON {};
    class CLASS(OPFOR): ADDON {};
    class CLASS(OPFOR_CIS): ADDON {};
    class CLASS(OPFOR_EPF): ADDON {};
    class CLASS(OPFOR_TechnoUnion): ADDON {};
    class CLASS(Props): ADDON {};
    class CLASS(Props_Deployables): ADDON {};
    class CLASS(Props_Flags): ADDON {};
    class CLASS(Props_Gonks): ADDON {};
    class CLASS(Props_PlaceableHelmets): ADDON {};
    class CLASS(Props_Resupply): ADDON {};
    class CLASS(Props_StaticShips): ADDON {};
    class CLASS(Rancorbug): ADDON {};
    class CLASS(Weapons_Core): ADDON {};
    class CLASS(Weapons_BTX42): ADDON {};
    class CLASS(Weapons_Westar): ADDON {};
    class CLASS(Vehicles_StaticShips): ADDON {};
    class CLASS(Vehicles_Aviation): ADDON {};
    class CLASS(Vehicles_Static): ADDON {};
    class CLASS(Vehicles_Armored): ADDON {};
    class CLASS(Vehicles_Light): ADDON {};
    class CLASS(Vehicles_Support): ADDON {};
    class CLASS(Vehicles_Drones): ADDON {};
    class CLASS(Vehicles_Badger): ADDON {};
    class CLASS(Vehicles_OLV20): ADDON {};
};

#include "CfgWeapons.hpp"