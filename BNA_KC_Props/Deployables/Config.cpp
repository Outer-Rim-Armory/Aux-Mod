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
        BNA_KC_Deployable_Object = "BNA_KC_Deployable_MedicalDroid";

        displayName = "[KC] FX-7 Medical Droid";
        picture = "\swlb_core\data\insignia\medical.paa"; // Placeholder
        model = "RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 120;
        };
    };

    class Launcher;
    class Launcher_Base_F: Launcher
    {
        class WeaponSlotsInfo;
    };
    class BNA_KC_Deployable_M190_Carry: Launcher_Base_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Model 190 Mortar System";

        // 3AS Mortar model is not fully set up for CSW
        // model = "3AS\3as_static\Mortar\model\MortarLauncher.p3d";
        // model = "3AS\3as_static\Mortar\model\mortarpack.p3d";
        // model = "3AS\3as_static\Mortar\model\republicmortar.p3d";
        // hiddenSelections[] = {"Camo_1","Camo_2"};
        // hiddenSelectionsMaterials[] = {"\3as\3as_static\Mortar\data\base.rvmat","\3as\3as_static\Mortar\data\tube.rvmat"};
        // hiddenSelectionsTextures[] = {"\3as\3as_static\Mortar\data\base.001_co.paa","\3as\3as_static\Mortar\data\tube.001_co.paa"};

        // LS model until 3AS is done
        model = "ls_vehicles_ground\mortar\ls_ground_mortar_alternateCarry.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"ls_vehicles_ground\mortar\data\republic_co.paa"};

        mass = 300;
        class ACE_CSW
        {
            // See https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework.html#22-carryable-tripod
            deploy = "BNA_KC_Deployable_M190";
            type = "mount"; // Used for tripod (mortar)

            deployTime = 1;
            pickupTime = 1;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot
            {
                iconScale = 0.1;
            };
        };
    };
    class 3AS_mortar_82mm;
    class BNA_KC_Deployable_M190_Turret: 3AS_mortar_82mm
    {
        displayName = "[KC] Model 190 Mortar System";
        magazines[] =
        {
            "BNA_KC_3Rnd_82mm_Shell"
        };
    };
    class BNA_KC_Deployable_M190_ProxyWeapon: BNA_KC_Deployable_M190_Turret
    {
        // Proxy weapon with low loading time, used for CSW
        magazineReloadTime = 0.5;
    };
};


class CfgMagazines
{
    class 3AS_8Rnd_82mm_Mo_shells;
    class BNA_KC_3Rnd_82mm_Shell: 3AS_8Rnd_82mm_Mo_shells
    {
        displayName = "[KC] 3Rnd Mortar HE Shells";
        displayNameShort = "3Rnd HE";
        count = 3;

        scope = 1;
        scopeArsenal = 0;

        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
    };
    // CSW converts inventory mags into vehicle mags, this is the one a unit carries
    class BNA_KC_3Rnd_82mm_Shell_CSW: BNA_KC_3Rnd_82mm_Shell
    {
        type = 256;
        scope = 2;
        scopeArsenal = 2;
    };
};


class ACE_CSW_Groups
{
    // Conversions for inventory mags to vehicle mags
    class BNA_KC_3Rnd_82mm_Shell_CSW
    {
        BNA_KC_3Rnd_82mm_Shell = 1; // Gives 1 of this magazine when loading
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

    class Thing;
    class ThingX: Thing
    {
        class EventHandlers;
    };
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

        // Item form of the object
        BNA_KC_Deployable_Item = "BNA_KC_Deployable_MedicalDroid_Item";

        // Sound effects
        BNA_KC_Deployable_SoundLoop = "BNA_KC_Props\Deployables\Data\Audio\FX7_Ambient.wss";
        BNA_KC_Deployable_SoundLoopDelay = 15;

        model = "RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";

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

        class EventHandlers: EventHandlers
        {
            init = "(_this select 0) spawn BNAKC_fnc_loopingAudioInit;"; // uses waitUntil to check for mission start, needs spawn
        };
    };

    class StaticMortar;
    class Mortar_01_base_F: StaticMortar
    {
        class Turrets;
        class ACE_Actions;
    };
    class B_Mortar_01_F: Mortar_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
    };
    class BNA_KC_Deployable_M190: B_Mortar_01_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] Model 190 Mortar System";
        
        // ACE
        ace_cargo_noRename = 1;
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};

        // Model and Textures
        model = "3AS\3as_static\Mortar\model\republicmortar.p3d";
        hiddenSelections[] = {"Camo_1","Camo_2"};
        hiddenSelectionsTextures[] = {"\3as\3as_static\Mortar\data\base.001_co.paa","\3as\3as_static\Mortar\data\tube.001_co.paa"};
        hiddenSelectionsMaterials[] = {"\3as\3as_static\Mortar\data\base.rvmat","\3as\3as_static\Mortar\data\tube.rvmat"};
        editorPreview = "\3as\3as_static\images\3AS_Republic_Mortar.jpg";
        icon = "3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Deployables";
        side = 3;

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = {"BNA_KC_3Rnd_82mm_Shell"};
                weapons[] = {"BNA_KC_Deployable_M190_Turret"};
            }
        };

        class ACE_CSW
        {
            enabled = 1;
            disassembleTo = "BNA_KC_Deployable_M190_Carry";

            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 3;
            
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            proxyWeapon = "BNA_KC_Deployable_M190_ProxyWeapon";
        };

        class ACE_Actions: ACE_Actions
        {
            displayName = "Mortar";
            selection = "gunnerview";
            condition = "true";
            distance = 4;

            class ACE_MainActions: ACE_MainActions
            {
                class ace_csw_pickUp
                {
                    displayName = "Disassemble Mortar";
                    condition="call ace_csw_fnc_assemble_canPickupTripod";
                    statement="call ace_csw_fnc_assemble_pickupTripod";
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