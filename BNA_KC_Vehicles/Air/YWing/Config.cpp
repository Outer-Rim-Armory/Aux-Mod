#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F
    {
        class ACE_Actions;
        class ACE_SelfActions;
        class PilotCamera;
    };
    class BNA_KC_BTLB_YWing: BTL_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAir";

        displayName = "BTL-B Y-Wing";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        weapons[] = {"3AS_BTLB_Heavy_Cannon", "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] =
        {
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "ls_mag_240rnd_CMFlareChaff_blue",
            "ls_mag_240rnd_CMFlareChaff_blue",
            "Laserbatteries"
        };

        BNA_KC_Shield_hasShield = 1;
        BNA_KC_Shield_maxHealth = 15;
        BNA_KC_Shield_regenTime = 10;
        BNA_KC_Shield_regenRate = 1;

        hiddenselectionstextures[] =
        {
            "\3as\3AS_btlb\data\chasis_co.paa",
            "\3as\3AS_btlb\data\detail_co.paa",
            "\3as\3AS_btlb\data\interior_co.paa"
        };

        textureList[] = {"Standard", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3AS_btlb\data\chasis_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
        };

        class ACE_Actions: ACE_Actions
        {
            class RechargeShield
            {
                displayName = "Recharge Shield: %1";
                position = "[0, -3, 0.4]";
                distance = 2;

                condition = "[_this#0, _this#1] call BNAKC_fnc_canFullRecharge";
                statement = "[_this#0, _this#1] call BNAKC_fnc_shieldFullChargeAction";
                modifierFunction = "_this call BNAKC_fnc_shieldActionModifier";
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER

            SHIELD_ACTIONS

            class TFAR_IntercomChannel
            {
                displayName = "Intercom Channel";
                condition = "true";
                statement = "";

                class TFAR_IntercomChannel_disabled
                {
                    displayName = "Disabled";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true]";
                };
                class TFAR_IntercomChannel_2
                {
                    displayName = "Crew";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true]";
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2)

        class PilotCamera: PilotCamera
        {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;
        };
    };
};