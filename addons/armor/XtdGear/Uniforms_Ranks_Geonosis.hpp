class CLASS(Uniform_phase1Geo_Enlisted) {
    model = QCLASS(Uniforms_Ranks_Geonosis);
    rank = "Trooper";
};

class CLASS(Uniform_phase1Geo_NCO): CLASS(Uniform_phase1Geo_Enlisted) { rank = "NCO"; };
class CLASS(Uniform_phase1Geo_Officer): CLASS(Uniform_phase1Geo_Enlisted) { rank = "Officer"; };
class CLASS(Uniform_phase1Geo_Captain): CLASS(Uniform_phase1Geo_Enlisted) { rank = "Captain"; };
class CLASS(Uniform_phase1Geo_Commander): CLASS(Uniform_phase1Geo_Enlisted) { rank = "Commander"; };
