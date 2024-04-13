class CLASS(Helmet_Phase1_Tanker_Base) {
    model = QCLASS(Helmets_Tanker_Phase1);
    camo = "Base";
};
class CLASS(Helmet_Phase1_Tanker_CT): CLASS(Helmet_Phase1_Tanker_Base) { camo = "CT"; };
class CLASS(Helmet_Phase1_Tanker_CT_v2): CLASS(Helmet_Phase1_Tanker_Base) { camo = "CT_v2"; };