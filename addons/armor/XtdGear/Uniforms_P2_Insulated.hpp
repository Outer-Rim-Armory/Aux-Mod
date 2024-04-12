class CLASS(Uniform_Phase2_Insulated_Base) {
    model = QCLASS(Uniforms_Insulated_Phase2);
    camo = "Base";
};
class CLASS(Uniform_Phase2_Insulated_CT): CLASS(Uniform_Phase2_Insulated_Base) { camo = "CT"; };