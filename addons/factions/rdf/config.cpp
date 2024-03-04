#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "sc_equipment"
        };
        units[] =
        {
            QCLASS(RDF_Unit_Base),
            QCLASS(RDF_Unit_Rifleman),
            QCLASS(RDF_Unit_Rifleman_DC15C),
            QCLASS(RDF_Unit_Grenadier),
            QCLASS(RDF_Unit_Autorifleman),
            QCLASS(RDF_Unit_Marksman),
            QCLASS(RDF_Unit_Rifleman_AT),
            QCLASS(RDF_Unit_Rifleman_AT_Disposable),
            QCLASS(RDF_Unit_SWAT)
        };
        weapons[] =
        {
            QCLASS(RDF_Helmet),
            QCLASS(RDF_Helmet_Marksman),
            QCLASS(RDF_Uniform),
            QCLASS(RDF_Vest),
            QCLASS(RDF_Vest_Medium),
            QCLASS(RDF_Vest_Swat)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"