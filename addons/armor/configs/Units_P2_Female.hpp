class CLASS(Unit_Phase2_CT_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF 01 - Clone Trooper (Female)";

    uniformClass = QCLASS(Uniform_CT_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\CT_upper_co.paa),
        QPATHTOF(data\uniforms\female\CT_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };
};