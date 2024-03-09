class CLASS(Helmet_Phase2_Pilot_Base);
P2_PILOT_HELMET_CUSTOM(Bailout);
P2_PILOT_HELMET_VISOR_CUSTOM(Blue,Bacta);

class CLASS(Helmet_Phase2_Pilot_Mischief): CLASS(Helmet_Phase2_Pilot_Base)
{
    displayName = "[KC] AVI P2 Helm ('Mischief')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Mischief_camo1_co.paa),
        QPATHTOF(data\helmets\phase2Pilot\Mischief_camo2_co.paa)
    };
    GVAR(isCustom) = TRUE;
    class XtdGearInfo
    {
        model = QCLASS(Helmets_Pilot_Phase2_Custom);
        camo = "Mischief";
    };
};