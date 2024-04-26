class CLASS(Uniform_ARC_CT) {
    model = QCLASS(Uniforms_ARC);
    rank = "CT";
};

class CLASS(Uniform_ARC_NightShade): CLASS(Uniform_ARC_CT) { rank = "NightShade"; };

class CLASS(Uniform_ARC_Enlisted_CamoNight): CLASS(Uniform_ARC_CT) { camo = "Night"; };