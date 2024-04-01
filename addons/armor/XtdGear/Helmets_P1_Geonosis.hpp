class CLASS(Helmet_phase1Geo_Enlisted) {
    model = QCLASS(Helmets_Phase1_Geonosis);
    rank = "Trooper";
};

class CLASS(Helmet_phase1Geo_NCO): CLASS(Helmet_phase1Geo_Enlisted) { rank = "NCO"; };
class CLASS(Helmet_phase1Geo_Officer): CLASS(Helmet_phase1Geo_Enlisted) { rank = "Officer"; };
class CLASS(Helmet_phase1Geo_Captain): CLASS(Helmet_phase1Geo_Enlisted) { rank = "Captain"; };
class CLASS(Helmet_phase1Geo_Commander): CLASS(Helmet_phase1Geo_Enlisted) { rank = "Commander"; };