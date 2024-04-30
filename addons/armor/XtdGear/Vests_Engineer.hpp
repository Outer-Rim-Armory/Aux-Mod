class CLASS(Vest_Engineer_CT) {
    model = QCLASS(Vests_Engineer);
    rank = "CT";
};

class CLASS(Vest_Engineer_CS): CLASS(Vest_Engineer_CT) { rank = "CS"; };
class CLASS(Vest_Engineer_Officer): CLASS(Vest_Engineer_CT) { rank = "Officer"; };