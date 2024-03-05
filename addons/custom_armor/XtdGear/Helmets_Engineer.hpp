class CLASS(Helmet_Engineer_Bob)
{
    model = QCLASS(Helmets_Engineer_Custom);
    camo = "Bob";
};
class CLASS(Helmet_Engineer_Splashdown): CLASS(Helmet_Engineer_Bob) { camo = "Splashdown"; };