class CLASS(Uniform_Phase2_Insulated_Base) {
    model = QCLASS(Uniforms_Insulated_Phase2);
    rank = "Base";
};

class CLASS(Uniform_Phase2_Insulated_CT): CLASS(Uniform_Phase2_Insulated_Base) { rank = "CT"; };
