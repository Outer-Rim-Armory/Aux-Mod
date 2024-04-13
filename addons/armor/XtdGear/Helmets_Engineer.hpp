class CLASS(Helmet_Engineer_Base) {
    model = QCLASS(Helmets_Engineer);
    camo = "Base";
};
class CLASS(Helmet_Engineer_CT): CLASS(Helmet_Engineer_Base) { camo = "CT"; };
class CLASS(Helmet_Engineer_Enlisted_CamoBrown): CLASS(Helmet_Engineer_Base) { camo = "Enlisted_CamoBrown"; };
class CLASS(Helmet_Engineer_Enlisted_CamoGrey): CLASS(Helmet_Engineer_Base) { camo = "Enlisted_CamoGrey"; };