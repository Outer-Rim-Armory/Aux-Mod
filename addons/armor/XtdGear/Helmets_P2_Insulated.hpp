class CLASS(Helmet_Phase2_Insulated_Base) {
    model = QCLASS(Helmets_Insulated_Phase2);
    rank = "Base";
};

class CLASS(Helmet_Phase2_Insulated_CT): CLASS(Helmet_Phase2_Insulated_Base) { rank = "CT"; };
