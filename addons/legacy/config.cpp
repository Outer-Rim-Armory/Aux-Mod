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
            QCLASS(armor),
            QCLASS(objects_ships)
        };
        units[] =
        {
            QCLASS(Ven_Resurgence_ClosedFullyHollowed),
            QCLASS(Ven_Resurgence_OpenFullyHollowed),
            QCLASS(Ven_Resurgence_Zeus)
        };
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

    class CLASS(Legacy_Base): CLASS(Legacy_Base)
    {
        units[] = {};
        weapons[] = {};
    };

    class CLASS(Gear): CLASS(Legacy_Base) {};
    class CLASS(Gear_Airborne): CLASS(Legacy_Base) {};
    class CLASS(Gear_Armored): CLASS(Legacy_Base) {};
    class CLASS(Gear_Aviation): CLASS(Legacy_Base) {};
    class CLASS(Gear_Commandos): CLASS(Legacy_Base) {};
    class CLASS(Gear_Customs): CLASS(Legacy_Base) {};
    class CLASS(Gear_Engineers): CLASS(Legacy_Base) {};
    class CLASS(Gear_Infantry): CLASS(Legacy_Base) {};
    class CLASS(Gear_Insignias): CLASS(Legacy_Base) {};
    class CLASS(Gear_Jedi): CLASS(Legacy_Base) {};
    class CLASS(Gear_Jetpacks): CLASS(Legacy_Base) {};
    class CLASS(Gear_SpecialForces): CLASS(Legacy_Base) {};
    class CLASS(INDEP): CLASS(Legacy_Base) {};
    class CLASS(INDEP_Galtorran): CLASS(Legacy_Base) {};
    class CLASS(OPFOR): CLASS(Legacy_Base) {};
    class CLASS(OPFOR_CIS): CLASS(Legacy_Base) {};
    class CLASS(OPFOR_EPF): CLASS(Legacy_Base) {};
    class CLASS(OPFOR_TechnoUnion): CLASS(Legacy_Base) {};
    class CLASS(Props): CLASS(Legacy_Base) {};
    class CLASS(Props_Deployables): CLASS(Legacy_Base) {};
    class CLASS(Props_Flags): CLASS(Legacy_Base) {};
    class CLASS(Props_Gonks): CLASS(Legacy_Base) {};
    class CLASS(Props_PlaceableHelmets): CLASS(Legacy_Base) {};
    class CLASS(Props_Resupply): CLASS(Legacy_Base) {};
    class CLASS(Props_StaticShips): CLASS(Legacy_Base) {};
    class CLASS(Rancorbug): CLASS(Legacy_Base) {};
    class CLASS(Weapons_Core): CLASS(Legacy_Base) {};
    class CLASS(Weapons_BTX42): CLASS(Legacy_Base) {};
    class CLASS(Weapons_Westar): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_StaticShips): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Aviation): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Static): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Armored): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Light): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Support): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Drones): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_Badger): CLASS(Legacy_Base) {};
    class CLASS(Vehicles_OLV20): CLASS(Legacy_Base) {};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"