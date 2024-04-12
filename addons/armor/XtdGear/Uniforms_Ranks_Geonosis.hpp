class CLASS(Uniform_phase1Geo_Enlisted) {
    model = QCLASS(Uniforms_Ranks_Geonosis);
    camo = "Trooper";
};
class CLASS(Uniform_phase1Geo_NCO): CLASS(Uniform_phase1Geo_Enlisted) { camo = "NCO"; };
class CLASS(Uniform_phase1Geo_Officer): CLASS(Uniform_phase1Geo_Enlisted) { camo = "Officer"; };
class CLASS(Uniform_phase1Geo_Captain): CLASS(Uniform_phase1Geo_Enlisted) { camo = "Captain"; };
class CLASS(Uniform_phase1Geo_Commander): CLASS(Uniform_phase1Geo_Enlisted) { camo = "Commander"; };