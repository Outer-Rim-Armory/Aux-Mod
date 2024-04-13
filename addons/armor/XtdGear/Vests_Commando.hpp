class CLASS(Vest_Commando_Basic) {
    model = QCLASS(Vests_Commando);
    camo = "Basic";
};

class CLASS(Vest_Commando_EOD): CLASS(Vest_Commando_Basic) { camo = "EOD"; };

class CLASS(Vest_Commando_SL): CLASS(Vest_Commando_Basic) { camo = "SL"; };

class CLASS(Vest_Commando_Sniper): CLASS(Vest_Commando_Basic) { camo = "Sniper"; };

class CLASS(Vest_Commando_Tech): CLASS(Vest_Commando_Basic) { camo = "Tech"; };