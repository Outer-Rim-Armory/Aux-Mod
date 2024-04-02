class CLASS(Uniform_Base) {
    model = QCLASS(Uniforms_Ranks_Infantry);
    rank = "Base";
    style = "Standard";
};

class CLASS(Uniform_CR): CLASS(Uniform_Base) { rank = "CR"; };
class CLASS(Uniform_CT): CLASS(Uniform_Base) { rank = "CT"; };
class CLASS(Uniform_CT_Legacy): CLASS(Uniform_CT) { style = "Legacy"; };
class CLASS(Uniform_SCT): CLASS(Uniform_Base) { rank = "SCT"; };
class CLASS(Uniform_VCT): CLASS(Uniform_Base) { rank = "VCT"; };
class CLASS(Uniform_CLC): CLASS(Uniform_Base) { rank = "CLC"; };
class CLASS(Uniform_CPL): CLASS(Uniform_Base) { rank = "CPL"; };
class CLASS(Uniform_CS): CLASS(Uniform_Base) { rank = "CS"; };
class CLASS(Uniform_CSS): CLASS(Uniform_Base) { rank = "CSS"; };
class CLASS(Uniform_CSFC): CLASS(Uniform_Base) { rank = "CSFC"; };
class CLASS(Uniform_CMS): CLASS(Uniform_Base) { rank = "CMS"; };
class CLASS(Uniform_CSM): CLASS(Uniform_Base) { rank = "CSM"; };
class CLASS(Uniform_WO): CLASS(Uniform_Base) { rank = "WO"; };
class CLASS(Uniform_WO2): CLASS(Uniform_Base) { rank = "WO2"; };
class CLASS(Uniform_WO3): CLASS(Uniform_Base) { rank = "WO3"; };
class CLASS(Uniform_CL): CLASS(Uniform_Base) { rank = "CL"; };
class CLASS(Uniform_CL1): CLASS(Uniform_Base) { rank = "CL1"; };

class CLASS(Uniform_Recruit_CamoBrown): CLASS(Uniform_CR) { camo = "Brown"; };
class CLASS(Uniform_Recruit_CamoGrey): CLASS(Uniform_CR) { camo = "Grey"; };

class CLASS(Uniform_Enlisted_CamoBrown): CLASS(Uniform_CT) { camo = "Brown"; };
class CLASS(Uniform_Enlisted_CamoGrey): CLASS(Uniform_CT) { camo = "Grey"; };

class CLASS(Uniform_NCO_CamoBrown): CLASS(Uniform_CS) { camo = "Brown"; };
class CLASS(Uniform_NCO_CamoGrey): CLASS(Uniform_CS) { camo = "Grey"; };

class CLASS(Uniform_Officer_CamoBrown): CLASS(Uniform_WO) { camo = "Brown"; };
class CLASS(Uniform_Officer_CamoGrey): CLASS(Uniform_WO) { camo = "Grey"; };