class CLASS(Vest_Engineer_CT) {
    model = QCLASS(Vests_Engineer);
    camo = "CT";
};

class CLASS(Vest_Engineer_CS): CLASS(Vest_Engineer_CT) { camo = "CS"; };
class CLASS(Vest_Engineer_Officer): CLASS(Vest_Engineer_CT) { camo = "Officer"; };