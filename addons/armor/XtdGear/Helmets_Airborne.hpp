class CLASS(Helmet_Airborne_Base) {
    model = QCLASS(Helmets_Airborne);
    camo = "Base";
};
class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) { camo = "CT"; };
class CLASS(Helmet_Airborne_CT_v2): CLASS(Helmet_Airborne_Base) { camo = "CT_v2"; };