#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "ls_venator"
        };
        units[] = {
            QCLASS(Venator_Resurgence_Body1_1),
            QCLASS(Venator_Resurgence_Body1_2),
            QCLASS(Venator_Resurgence_Body2_1),
            QCLASS(Venator_Resurgence_Body2_2),
            QCLASS(Venator_Resurgence_Body2_3),
            QCLASS(Venator_Resurgence_Body3),
            QCLASS(Venator_Resurgence_Body4),
            QCLASS(Venator_Resurgence_Body5),
            QCLASS(Venator_Resurgence_Body6),
            QCLASS(Venator_Resurgence_Body7),
            QCLASS(Venator_Resurgence_Body8),
            QCLASS(Venator_Resurgence_Body9),
            QCLASS(Venator_Resurgence_Body10),
            QCLASS(Venator_Resurgence_Bridge),
            QCLASS(Venator_Resurgence_Door),
            QCLASS(Venator_Resurgence_Door2),
            QCLASS(Venator_Resurgence_Engine),
            QCLASS(Venator_Resurgence_Interior1),
            QCLASS(Venator_Resurgence_Interior2),
            QCLASS(Venator_Resurgence_Interior3),
            QCLASS(Venator_Resurgence_Interior4),
            QCLASS(Venator_Resurgence_Interior5),
            QCLASS(Venator_Resurgence_Interior6),
            QCLASS(Venator_Resurgence_Interior7),
            QCLASS(Venator_Resurgence_Interior8),
            QCLASS(Venator_Resurgence_ClosedFullyHollowed),
            QCLASS(Venator_Resurgence_OpenFullyHollowed),
            QCLASS(Venator_Resurgence_Zeus)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"