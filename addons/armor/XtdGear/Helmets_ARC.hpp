class CLASS(Helmet_ARC_Base) {
    model = QCLASS(Helmets_ARC);
    rank = "Base";
    style = "Standard";
};

class CLASS(Helmet_ARC_CT): CLASS(Helmet_ARC_Base) { rank = "CT"; };
class CLASS(Helmet_ARC_CT_Legacy): CLASS(Helmet_ARC_CT) { style = "Legacy"; };
class CLASS(Helmet_ARC_NightShade): CLASS(Helmet_ARC_Base) { rank = "NightShade"; };

class CLASS(Helmet_ARC_Enlisted_CamoBrown): CLASS(Helmet_ARC_CT) { camo = "Brown"; };
class CLASS(Helmet_ARC_Enlisted_CamoGrey): CLASS(Helmet_ARC_CT) { camo = "Grey"; };
class CLASS(Helmet_ARC_Enlisted_CamoNight): CLASS(Helmet_ARC_CT) { camo = "Night"; };
