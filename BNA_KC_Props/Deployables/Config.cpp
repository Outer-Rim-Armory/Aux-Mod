#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class BNA_KC_Deployable_MedicalDroid_Item: CBA_MiscItem
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        // Object form of the item
        BNA_KC_Deployable_object = "BNA_KC_Deployable_MedicalDroid";

        displayName = "[KC] FX-7 Medical Droid";
        picture = "\swlb_core\data\insignia\medical.paa"; // Placeholder
        model = "RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 50;
        };
    };
};


class CfgVehicles
{
    // Add the "place" actions
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ACE_Equipment
            {
                class BNA_KC_Deployable_MedicalDroid_Place
                {
                    displayName = "Place FX-7";
                    icon = "\swlb_core\data\insignia\medical.paa";

                    condition = "[_player, 'BNA_KC_Deployable_MedicalDroid_Item'] call ace_common_fnc_hasItem";
                    statement = "[_player, 'BNA_KC_Deployable_MedicalDroid_Item'] call BNAKC_fnc_deployablePlace";
                };
            };
        };
    };

    class ThingX;
    class BNA_KC_Deployable_Object: ThingX
    {
        // Scope
        scope = 0;
        scopeCurator = 1;

        ace_cargo_size = 2;
        ace_cargo_noRename = 1;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Deployables";
        side = 3;
    };

    class BNA_KC_Deployable_MedicalDroid: BNA_KC_Deployable_Object
    {
        displayName = "[KC] FX-7 Medical Droid";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Deployable properties
        BNA_KC_Deployable_item = "BNA_KC_Deployable_MedicalDroid_Item";
        BNA_KC_Deployable_placeTime = 5; // How long in seconds it takes to place down
        BNA_KC_Deployable_pickupTime = 8; // How long in seconds it takes to pick up

        // Sound effects
        BNA_KC_Object_soundLoop = "BNA_KC_Props\Deployables\Data\Audio\FX7_Ambient.wss";
        BNA_KC_Object_soundLoopDelay = 15;

        BNA_KC_Medical_areaHealRadius = 7;      // Range for healing (m)
        BNA_KC_Medical_areaHealRate = 6;        // 1 healing action every X seconds
        BNA_KC_Medical_areaHealMaxPatients = 2; // Maximum amount of units that can be healed at a time

        model = "RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";
        editorPreview = "\BNA_KC_Props\Gonks\Data\Textures\Previews\FX7.jpg";

        class ACE_Actions
        {
            class ACE_MainActions
            {
                selection = "interaction_point";
                condition = "true";
                distance = 5;

                class PickUp
                {
                    displayName = "Pick up FX-7";
                    icon = "\swlb_core\data\insignia\medical.paa";

                    selection = "interaction_point";
                    distance = 5;

                    condition = "true";
                    statement = "[_player, _target] call BNAKC_fnc_deployablePickup;";
                };
            };
        };
    };
};


// Assigns objects as medical facilities
class ace_medical_facilities
{
    BNA_KC[] +=
    {
        "BNA_KC_Deployable_MedicalDroid"
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Deployables
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Deployables";
    };
};