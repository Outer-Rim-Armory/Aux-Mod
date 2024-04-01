class CLASS(Helmet_Airborne_Base) {
    model = QCLASS(Helmets_Airborne);
    rank = "Base";
};

class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) { rank = "CT"; };
class CLASS(Helmet_Airborne_CT_v2): CLASS(Helmet_Airborne_Base) { rank = "CT_v2"; };