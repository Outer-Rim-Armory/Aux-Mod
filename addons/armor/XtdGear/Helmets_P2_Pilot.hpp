class CLASS(Helmet_Phase2_Pilot_Base) {
    model = QCLASS(Helmets_Pilot_Phase2);
    rank = "Base";
};

class CLASS(Helmet_Phase2_Pilot_CXA): CLASS(Helmet_Phase2_Pilot_Base) { rank = "CXA"; };
class CLASS(Helmet_Phase2_Pilot_CXE): CLASS(Helmet_Phase2_Pilot_Base) { rank = "CXE"; };

class CLASS(Helmet_Phase2_Pilot_Officer_CamoBrown): CLASS(Helmet_Phase2_Pilot_CXE) { camo = "Brown"; };
class CLASS(Helmet_Phase2_Pilot_Officer_CamoGrey): CLASS(Helmet_Phase2_Pilot_CXE) { camo = "Grey"; };
