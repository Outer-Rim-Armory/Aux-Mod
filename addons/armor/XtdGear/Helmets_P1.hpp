class CLASS(Helmet_Phase1_Base) {
    model = QCLASS(Helmets_Phase1);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_Phase1_CR): CLASS(Helmet_Phase1_Base) { rank = "CR"; };
class CLASS(Helmet_Phase1_CT): CLASS(Helmet_Phase1_Base) { rank = "CT"; };
class CLASS(Helmet_Phase1_CT_v2): CLASS(Helmet_Phase1_CT) { style = "V2"; };
class CLASS(Helmet_Phase1_CT_v3): CLASS(Helmet_Phase1_CT) { style = "V3"; };
class CLASS(Helmet_Phase1_CT_v4): CLASS(Helmet_Phase1_CT) { style = "V4"; };
class CLASS(Helmet_Phase1_SCT): CLASS(Helmet_Phase1_Base) { rank = "SCT"; };
class CLASS(Helmet_Phase1_VCT): CLASS(Helmet_Phase1_Base) { rank = "VCT"; };
class CLASS(Helmet_Phase1_CLC): CLASS(Helmet_Phase1_Base) { rank = "CLC"; };
class CLASS(Helmet_Phase1_CPL): CLASS(Helmet_Phase1_Base) { rank = "CPL"; };
class CLASS(Helmet_Phase1_CS): CLASS(Helmet_Phase1_Base) { rank = "CS"; };
class CLASS(Helmet_Phase1_CSS): CLASS(Helmet_Phase1_Base) { rank = "CSS"; };
class CLASS(Helmet_Phase1_CSFC): CLASS(Helmet_Phase1_Base) { rank = "CSFC"; };
class CLASS(Helmet_Phase1_CMS): CLASS(Helmet_Phase1_Base) { rank = "CMS"; };
class CLASS(Helmet_Phase1_CSM): CLASS(Helmet_Phase1_Base) { rank = "CSM"; };

class CLASS(Helmet_Phase1_Recruit_CamoBrown): CLASS(Helmet_Phase1_CR) { camo = "Brown"; };
class CLASS(Helmet_Phase1_Recruit_CamoGrey): CLASS(Helmet_Phase1_CR) { camo = "Grey"; };

class CLASS(Helmet_Phase1_Enlisted_CamoBrown): CLASS(Helmet_Phase1_CT) { camo = "Brown"; };
class CLASS(Helmet_Phase1_Enlisted_CamoGrey): CLASS(Helmet_Phase1_CT) { camo = "Grey"; };

class CLASS(Helmet_Phase1_NCO_CamoBrown): CLASS(Helmet_Phase1_CS) { camo = "Brown"; };
class CLASS(Helmet_Phase1_NCO_CamoGrey): CLASS(Helmet_Phase1_CS) { camo = "Grey"; };

class CLASS(Helmet_Phase1_Officer_CamoBrown): CLASS(Helmet_Phase1_Base) {
    rank = "WO";
    camo = "Brown";
};
class CLASS(Helmet_Phase1_Officer_CamoGrey): CLASS(Helmet_Phase1_Base) {
    rank = "WO";
    camo = "Grey";
};