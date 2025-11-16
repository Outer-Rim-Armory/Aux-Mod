class CLASS(Helmet_Phase2_Tanker_Base) {
    model = QCLASS(Helmets_Tanker_Phase2);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_Phase2_Tanker_CT): CLASS(Helmet_Phase2_Tanker_Base) { rank = "CT"; };
class CLASS(Helmet_Phase2_Tanker_CT_v2): CLASS(Helmet_Phase2_Tanker_CT) { style = "V2"; };

class CLASS(Helmet_Phase2_Tanker_Enlisted_CamoBrown): CLASS(Helmet_Phase2_Tanker_CT) { camo = "Brown"; };
class CLASS(Helmet_Phase2_Tanker_Enlisted_CamoGrey): CLASS(Helmet_Phase2_Tanker_CT) { camo = "Grey"; };
