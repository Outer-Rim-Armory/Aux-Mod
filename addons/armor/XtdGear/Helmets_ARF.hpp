class CLASS(Helmet_ARF_Base) {
    model = QCLASS(Helmets_ARF);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_ARF_CT): CLASS(Helmet_ARF_Base) { rank = "CT"; };
class CLASS(Helmet_ARF_CT_Legacy): CLASS(Helmet_ARF_CT) { style = "Legacy"; };

class CLASS(Helmet_ARF_Enlisted_CamoBrown): CLASS(Helmet_ARF_CT) { camo = "Brown"; };
class CLASS(Helmet_ARF_Enlisted_CamoGrey): CLASS(Helmet_ARF_CT) { camo = "Grey"; };