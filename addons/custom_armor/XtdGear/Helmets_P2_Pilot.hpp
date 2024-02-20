class CLASS(Helmet_Phase2_Pilot_Bailout)
{
    model = QCLASS(Helmets_Pilot_Phase2_Custom);
    camo = "Bailout";
};

class CLASS(Helmet_Phase2_Pilot_Blue): CLASS(Helmet_Phase2_Pilot_Bailout) { camo = "Blue"; };
class CLASS(Helmet_Phase2_Pilot_Mischief): CLASS(Helmet_Phase2_Pilot_Bailout) { camo = "Mischief"; };