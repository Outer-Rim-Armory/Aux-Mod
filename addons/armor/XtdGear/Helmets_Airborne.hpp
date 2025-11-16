class CLASS(Helmet_Airborne_Base) {
    model = QCLASS(Helmets_Airborne);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) { rank = "CT"; };
class CLASS(Helmet_Airborne_CT_V2): CLASS(Helmet_Airborne_CT) { style = "V2"; };
