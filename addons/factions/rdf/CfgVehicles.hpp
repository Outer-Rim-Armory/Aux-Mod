class CfgVehicles
{
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(RDF_Unit_Base): CLASS(BLUFOR_Unit_Base)
    {
        SCOPE_HIDDEN;
        faction = FACTION(RDF);
        uniformClass = QCLASS(RDF_Uniform);

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_black_co.paa"};
    };
};