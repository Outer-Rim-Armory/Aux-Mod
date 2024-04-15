class CLASS(Vest_Commander_Keeli) {
    model = QCLASS(Vests_Custom);
    custom = "Keeli";
};

class CLASS(Vest_Officer_Ponds): CLASS(Vest_Commander_Keeli) { custom = "Ponds"; };
class CLASS(Vest_Officer_Rat): CLASS(Vest_Commander_Keeli) { custom = "Rat"; };