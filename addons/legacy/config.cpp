#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QCLASS(armor),
            QCLASS(objects_ships),
            QCLASS(vehicles_hydra),
            QCLASS(vehicles_reek)
        };
        units[] = {
            QCLASS(Unit_ARC),
            QCLASS(Unit_ARF),
            QCLASS(Unit_Phase1_Pilot),
            QCLASS(Unit_Phase2_Pilot),
            QCLASS(Unit_Phase2_Pilot_Officer),
            QCLASS(Unit_Phase1_Tanker),
            QCLASS(Unit_Phase2_Tanker),
            QCLASS(Ven_Resurgence_ClosedFullyHollowed),
            QCLASS(Ven_Resurgence_OpenFullyHollowed),
            QCLASS(Ven_Resurgence_Zeus),
            QCLASS(OLV20),
            QCLASS(Badger),
            QCLASS(APC_Badger)
        };
        weapons[] = {
            QCLASS(Helmet_ARF),
            QCLASS(Helmet_ARC),
            QCLASS(Helmet_Phase1_Pilot),
            QCLASS(Helmet_Phase2_Pilot),
            QCLASS(Helmet_Phase2_Pilot_Officer),
            QCLASS(Helmet_Phase1_Tanker),
            QCLASS(Helmet_Phase1_Tanker_v2),
            QCLASS(Helmet_Phase2_Tanker),
            QCLASS(Helmet_Phase2_Tanker_v2),
            QCLASS(Uniform_ARF),
            QCLASS(Uniform_ARC),
            QCLASS(Uniform_Pilot),
            QCLASS(Uniform_Pilot_Officer),
            QCLASS(Uniform_Tanker),
            QCLASS(Vest_Officer_Keeli)
        };
        VERSION_CONFIG;
    };

    class CLASS(Legacy_Base) {
        units[] = {};
        weapons[] = {};
    };

    // Undefine macros that are in legacy names
    #undef INDEP
    #undef OPFOR

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