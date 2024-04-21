class CLASS(Helmet_Phase1_Tanker_Base) {
    model = QCLASS(Helmets_Tanker_Phase1);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_Phase1_Tanker_CT): CLASS(Helmet_Phase1_Tanker_Base) { rank = "CT"; };
class CLASS(Helmet_Phase1_Tanker_CT_v2): CLASS(Helmet_Phase1_Tanker_CT) { style = "V2"; };