class CLASS(Helmet_Phase2_Base) {
    model = QCLASS(Helmets_Phase2);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_Phase2_CR): CLASS(Helmet_Phase2_Base) { rank = "CR"; };
class CLASS(Helmet_Phase2_CR_Legacy): CLASS(Helmet_Phase2_CR) { style = "Legacy"; };
class CLASS(Helmet_Phase2_CT): CLASS(Helmet_Phase2_Base) { rank = "CT"; };
class CLASS(Helmet_Phase2_CT_v2): CLASS(Helmet_Phase2_CT) { style = "V2"; };
class CLASS(Helmet_Phase2_CT_Legacy): CLASS(Helmet_Phase2_CT) { style = "Legacy"; };
class CLASS(Helmet_Phase2_SCT): CLASS(Helmet_Phase2_Base) { rank = "SCT"; };
class CLASS(Helmet_Phase2_SCT_Legacy): CLASS(Helmet_Phase2_SCT) { style = "Legacy"; };
class CLASS(Helmet_Phase2_VCT): CLASS(Helmet_Phase2_Base) { rank = "VCT"; };
class CLASS(Helmet_Phase2_VCT_Legacy): CLASS(Helmet_Phase2_VCT) { style = "Legacy"; };
class CLASS(Helmet_Phase2_CLC): CLASS(Helmet_Phase2_Base) { rank = "CLC"; };
class CLASS(Helmet_Phase2_CLC_Legacy): CLASS(Helmet_Phase2_CLC) { style = "Legacy"; };
class CLASS(Helmet_Phase2_CPL): CLASS(Helmet_Phase2_Base) { rank = "CPL"; };
class CLASS(Helmet_Phase2_CS): CLASS(Helmet_Phase2_Base) { rank = "CS"; };
class CLASS(Helmet_Phase2_CS_Legacy): CLASS(Helmet_Phase2_CS) { style = "Legacy"; };
class CLASS(Helmet_Phase2_CSS): CLASS(Helmet_Phase2_Base) { rank = "CSS"; };
class CLASS(Helmet_Phase2_CSFC): CLASS(Helmet_Phase2_Base) { rank = "CSFC"; };
class CLASS(Helmet_Phase2_CMS): CLASS(Helmet_Phase2_Base) { rank = "CMS"; };
class CLASS(Helmet_Phase2_CMS_Legacy): CLASS(Helmet_Phase2_CMS) { style = "Legacy"; };
class CLASS(Helmet_Phase2_CSM): CLASS(Helmet_Phase2_Base) { rank = "CSM"; };
class CLASS(Helmet_Phase2_Officer): CLASS(Helmet_Phase2_Base) { rank = "Officer"; };
class CLASS(Helmet_Phase2_WO): CLASS(Helmet_Phase2_Base) { rank = "WO"; };
class CLASS(Helmet_Phase2_WO2): CLASS(Helmet_Phase2_Base) { rank = "WO2"; };
class CLASS(Helmet_Phase2_WO3): CLASS(Helmet_Phase2_Base) { rank = "WO3"; };
class CLASS(Helmet_Phase2_CL): CLASS(Helmet_Phase2_Base) { rank = "CL"; };
class CLASS(Helmet_Phase2_CL1): CLASS(Helmet_Phase2_Base) { rank = "CL1"; };

class CLASS(Helmet_Phase2_Recruit_CamoBrown): CLASS(Helmet_Phase2_CR) { camo = "Brown"; };
class CLASS(Helmet_Phase2_Recruit_CamoGrey): CLASS(Helmet_Phase2_CR) { camo = "Grey"; };

class CLASS(Helmet_Phase2_Enlisted_CamoBrown): CLASS(Helmet_Phase2_CT) { camo = "Brown"; };
class CLASS(Helmet_Phase2_Enlisted_CamoGrey): CLASS(Helmet_Phase2_CT) { camo = "Grey"; };

class CLASS(Helmet_Phase2_NCO_CamoBrown): CLASS(Helmet_Phase2_CS) { camo = "Brown"; };
class CLASS(Helmet_Phase2_NCO_CamoGrey): CLASS(Helmet_Phase2_CS) { camo = "Grey"; };

class CLASS(Helmet_Phase2_Officer_CamoBrown): CLASS(Helmet_Phase2_WO) { camo = "Brown"; };
class CLASS(Helmet_Phase2_Officer_CamoGrey): CLASS(Helmet_Phase2_WO) { camo = "Grey"; };