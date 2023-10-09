#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class B_UGV_01_F;
    class BNA_KC_Khezu_Unarmed: B_UGV_01_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VDrones";
        editorPreview = "\BNA_KC_Vehicles\Drones\Data\Previews\BNA_KC_Khezu_Unarmed.jpg";

        displayName = "[KC] Khezu (Unarmed)";

        KHEZU_TEXTURES()
    };

    class UGV_01_base_F;
    class UGV_01_rcws_base_F: UGV_01_base_F
    {
        class Turrets;
    }
    class B_UGV_01_rcws_F: UGV_01_rcws_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            // class CargoTurret_01;
        };
    };
    class BNA_KC_Khezu_Armed: B_UGV_01_rcws_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VDrones";
        editorPreview = "\BNA_KC_Vehicles\Drones\Data\Previews\BNA_KC_Khezu_Armed.jpg";

        displayName = "[KC] Khezu (MG/GMG)";

        KHEZU_TEXTURES()

        class Turrets: Turrets
        {
            // class CargoTurret_01
            class MainTurret: MainTurret
            {
                weapons[] = { "BNA_KC_Coax", "GMG_40mm" };
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "200Rnd_40mm_G_belt"
                };
            };
        };
    };
};