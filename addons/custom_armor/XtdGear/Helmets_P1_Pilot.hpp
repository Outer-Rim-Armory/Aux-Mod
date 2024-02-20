class CLASS(Helmet_Phase1_Pilot_Bailout)
{
    model = QCLASS(Helmets_Pilot_Phase1_Custom);
    camo = "Bailout";
};
class CLASS(Helmet_Phase1_Pilot_Blue): CLASS(Helmet_Phase1_Pilot_Bailout) { camo = "Blue"; };
class CLASS(Helmet_Phase1_Pilot_Mischief): CLASS(Helmet_Phase1_Pilot_Bailout) { camo = "Mischief"; };