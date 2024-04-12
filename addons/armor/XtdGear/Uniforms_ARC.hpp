class CLASS(Uniform_ARC_CT) {
    model = QCLASS(Uniforms_ARC);
    camo = "CT";
};
class CLASS(Uniform_ARC_NightShade): CLASS(Uniform_ARC_CT) { camo = "NightShade"; };
class CLASS(Uniform_ARC_Enlisted_CamoNight): CLASS(Uniform_ARC_CT) { camo = "Enlisted_CamoNight"; };