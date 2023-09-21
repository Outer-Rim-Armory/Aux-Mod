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
                statement = "[] call BNAKC_fnc_CreateMarkOnSelf";
                modifierFunction = "_this call BNAKC_fnc_markSelfModifier";
                insertChildren = "_this call BNAKC_fnc_markSelfChildren";
            };
        };
    };
};