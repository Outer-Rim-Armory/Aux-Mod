class CLASS(Uniform_CXA) {
    model = QCLASS(Uniforms_Pilot);
    rank = "CXA";
};

class CLASS(Uniform_CXE): CLASS(Uniform_CXA) { rank = "CXE"; };