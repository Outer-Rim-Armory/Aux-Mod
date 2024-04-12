class CLASS(Helmet_ARF_Base) {
    model = QCLASS(Helmets_ARF);
    camo = "Base";
};
class CLASS(Helmet_ARF_CT): CLASS(Helmet_ARF_Base) { camo = "CT"; };
class CLASS(Helmet_ARF_CT_Legacy): CLASS(Helmet_ARF_Base) { camo = "CT_Legacy"; };
class CLASS(Helmet_ARF_Enlisted_CamoBrown): CLASS(Helmet_ARF_Base) { camo = "Enlisted_CamoBrown"; };
class CLASS(Helmet_ARF_Enlisted_CamoGrey): CLASS(Helmet_ARF_Base) { camo = "Enlisted_CamoGrey"; };