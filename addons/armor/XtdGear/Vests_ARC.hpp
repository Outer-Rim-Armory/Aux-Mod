class CLASS(Vest_ARC) {
    model = QCLASS(Vests_ARC);
    rank = "Trooper";
};

class CLASS(Vest_ARC_v2): CLASS(Vest_ARC) { rank = "Alternate"; };
class CLASS(Vest_ARC_Light): CLASS(Vest_ARC) { rank = "Light"; };
class CLASS(Vest_ARC_NightShade): CLASS(Vest_ARC) { rank = "NightShade"; };
class CLASS(Vest_ARC_Phase1Geo_Officer): CLASS(Vest_ARC) { rank = "GEO_Officer"; };
class CLASS(Vest_ARC_Phase1Geo_Captain): CLASS(Vest_ARC) { rank = "GEO_Captain"; };
