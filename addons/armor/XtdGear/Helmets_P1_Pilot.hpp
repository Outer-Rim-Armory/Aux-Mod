class CLASS(Helmet_Phase1_Pilot_Base) {
    model = QCLASS(Helmets_Pilot_Phase1);
    rank = "Base";
};

class CLASS(Helmet_Phase1_Pilot_CXA): CLASS(Helmet_Phase1_Pilot_Base) { rank = "CXA"; };
