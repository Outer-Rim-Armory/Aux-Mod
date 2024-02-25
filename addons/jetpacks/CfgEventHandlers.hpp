class Extended_Init_EventHandlers
{
    class CLASS(Resupply_JetpackFuel)
    {
        class GVAR(refuel)
        {
            init = QUOTE(_this#0 lockInventory true; [ARR_2(_this#0,1)] call BNAKC_jetpacks_fnc_addRefuelActions);
        };
    };
};