#include "script_component.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"


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
            "ls_flags",
            "ls_venator"
        };
        units[] =
        {
            QCLASS(Flag_KC_Pole),
            QCLASS(Flag_KC_Vertical),
            QCLASS(Flag_KC_Horizontal),
            QCLASS(Flag_KC_Damaged_Pole),
            QCLASS(Flag_KC_Damaged_Vertical),
            QCLASS(Flag_KC_Damaged_Horizontal),
            QCLASS(Flag_KC_Damaged_Horizontal_Mirrored),
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
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};