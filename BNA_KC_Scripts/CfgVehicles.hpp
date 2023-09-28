class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class BNA_KC_Misc_MarkSelf
            {
                displayName = "Mark Self";
                icon = "";

                exceptions[] = {"notOnMap"};
                condition = "BNA_KC_Map_ShowAceAction";
                statement = "[] call BNAKC_fnc_markSelf";
                modifierFunction = "_this call BNAKC_fnc_markSelfModifier";
                insertChildren = "_this call BNAKC_fnc_markSelfChildren";
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle
    {
        class ACE_SelfActions
        {
            class BNA_KC_SkinSwitcher
            {
                displayName = "Switch Vehicle Skin";
                icon = "";

                condition = "_this call BNAKC_fnc_hasVehicleSkins";
                statement = "systemChat 'test'";
                insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
            };
        };
    };
    class Tank: LandVehicle
    {
        class ACE_SelfActions
        {
            class BNA_KC_SkinSwitcher
            {
                displayName = "Switch Vehicle Skin";
                icon = "";

                condition = "_this call BNAKC_fnc_hasVehicleSkins";
                statement = "systemChat 'test'";
                insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
            };
        };
    };

    class Air;
    class Helicopter: Air
    {
        class ACE_SelfActions
        {
            class BNA_KC_SkinSwitcher
            {
                displayName = "Switch Vehicle Skin";
                icon = "";

                condition = "_this call BNAKC_fnc_hasVehicleSkins";
                statement = "systemChat 'test'";
                insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
            };
        };
    };
    class Plane: Air
    {
        class ACE_SelfActions
        {
            class BNA_KC_SkinSwitcher
            {
                displayName = "Switch Vehicle Skin";
                icon = "";

                condition = "_this call BNAKC_fnc_hasVehicleSkins";
                statement = "systemChat 'test'";
                insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
            };
        };
    };

    class Ship;
    class Ship_F: Ship
    {
        class ACE_SelfActions
        {
            class BNA_KC_SkinSwitcher
            {
                displayName = "Switch Vehicle Skin";
                icon = "";

                condition = "_this call BNAKC_fnc_hasVehicleSkins";
                statement = "systemChat 'test'";
                insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
            };
        };
    };
};