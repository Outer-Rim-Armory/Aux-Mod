class CfgVehicles
{
    class CLASS(Venator_Resurgence_ClosedFullyHollowed)
    class CLASS(Ven_Resurgence_ClosedFullyHollowed) CLASS(Venator_Resurgence_ClosedFullyHollowed)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Venator_Resurgence_OpenFullyHollowed)
    class CLASS(Ven_Resurgence_OpenFullyHollowed) CLASS(Venator_Resurgence_OpenFullyHollowed)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Venator_Resurgence_Zeus)
    class CLASS(Ven_Resurgence_Zeus) CLASS(Venator_Resurgence_Zeus)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Hydra);
    class CLASS(OLV20): CLASS(Hydra)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Reek);
    class CLASS(Badger): CLASS(Reek)
    {
        SCOPE_HIDDEN;
    };
    class CLASS(APC_Badger): CLASS(Badger) {};
};