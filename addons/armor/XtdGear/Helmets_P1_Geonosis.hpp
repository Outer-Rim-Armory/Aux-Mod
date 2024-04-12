class CLASS(Helmet_phase1Geo_Enlisted) {
    model = QCLASS(Helmets_Phase1_Geonosis);
    camo = "Trooper";
};
class CLASS(Helmet_phase1Geo_NCO): CLASS(Helmet_phase1Geo_Enlisted) { camo = "NCO"; };
class CLASS(Helmet_phase1Geo_Officer): CLASS(Helmet_phase1Geo_Enlisted) { camo = "Officer"; };
class CLASS(Helmet_phase1Geo_Captain): CLASS(Helmet_phase1Geo_Enlisted) { camo = "Captain"; };
class CLASS(Helmet_phase1Geo_Commander): CLASS(Helmet_phase1Geo_Enlisted) { camo = "Commander"; };