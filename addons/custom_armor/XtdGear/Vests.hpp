class CLASS(Vest_Commander_Keeli) {
    model = QCLASS(Vests_Custom);
    camo = "Keeli";
};

class CLASS(Vest_Officer_Ponds): CLASS(Vest_Commander_Keeli) { camo = "Ponds"; };
class CLASS(Vest_Officer_Rat): CLASS(Vest_Commander_Keeli) { camo = "Rat"; };