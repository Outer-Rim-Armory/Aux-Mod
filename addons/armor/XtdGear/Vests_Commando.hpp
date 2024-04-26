class CLASS(Vest_Commando_Basic) {
    model = QCLASS(Vests_Commando);
    type = "Basic";
};

class CLASS(Vest_Commando_EOD): CLASS(Vest_Commando_Basic) { type = "EOD"; };
class CLASS(Vest_Commando_SL): CLASS(Vest_Commando_Basic) { type = "SL"; };
class CLASS(Vest_Commando_Sniper): CLASS(Vest_Commando_Basic) { type = "Sniper"; };
class CLASS(Vest_Commando_Tech): CLASS(Vest_Commando_Basic) { type = "Tech"; };