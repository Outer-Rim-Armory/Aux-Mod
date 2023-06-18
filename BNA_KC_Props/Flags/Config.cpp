#include "CfgPatches.hpp"


class CfgVehicles
{
    class ls_flag_base;
    class ls_staticFlag_base;

    class BNA_KC_Flag_KeeliCompany_Pole: ls_flag_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_Flags";

        displayName = "[KC] Keeli Company (Pole)";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture 'BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompany.paa'";
        };
    };
    class BNA_KC_Flag_KeeliCompany_Vertical: ls_staticFlag_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_Flags";

        displayName = "[KC] Keeli Company (Vertical)";

        // model and hiddenSelections need to be re-stated because 41st Aux modifies ls_staticFlag_base
        model = "LS_statics_props\flags\ls_vertical_flag";
        hiddenSelections[]=
		{
			"camo1"
		};
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompany_Vertical.paa"
        };
    };
    class BNA_KC_Flag_KeeliCompany_Horizontal: BNA_KC_Flag_KeeliCompany_Vertical
    {
        displayName = "[KC] Keeli Company (Horizontal)";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompany.paa"
        };
        /* EH to rotate flag | WIP
        class EventHandlers
        {
            // init = "systemChat 'Config EH'; (_this select 0) setVectorUp [0,-1,0];";
            init = "systemChat 'Config EH'; [(_this select 0), [0, 0, 270]] call BIS_fnc_setObjectRotation;";
        };
        */
    };

    class BNA_KC_Flag_KeeliCompanyDamaged_Pole: BNA_KC_Flag_KeeliCompany_Pole
    {
        displayName = "[KC] Keeli Company - Damaged (Pole)";
        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture 'BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompanyDamaged.paa'";
        };
    };
    class BNA_KC_Flag_KeeliCompanyDamaged_Vertical: BNA_KC_Flag_KeeliCompany_Vertical
    {
        displayName = "[KC] Keeli Company - Damaged (Vertical)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompanyDamaged_Vertical.paa"
        };
    };
    class BNA_KC_Flag_KeeliCompanyDamaged_Horizontal: BNA_KC_Flag_KeeliCompany_Horizontal
    {
        displayName = "[KC] Keeli Company - Damaged (Horizontal)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Props\Flags\Data\BNA_KC_Flag_KeeliCompanyDamaged.paa"
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Flags
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Flags";
    };
};