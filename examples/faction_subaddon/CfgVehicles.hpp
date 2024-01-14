class CfgVehicles
{
    class CLASS(OPFOR_Unit_Base);
    class CLASS(INDEP_Unit_Base);
    class CLASS(Faction_Unit_Base): CLASS(OPFOR_Unit_Base)
    {

    };
};