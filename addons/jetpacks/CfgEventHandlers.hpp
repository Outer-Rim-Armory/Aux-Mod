class Extended_Init_EventHandlers
{
    class BNA_KC_Resupply_JetpackFuel
    {
        class BNA_KC_Jetpacks_refuelAction
        {
            init = "_this#0 lockInventory true; [_this#0, 1] call BNAKC_Jetpacks_fnc_addRefuelActions";
        };
    };
};