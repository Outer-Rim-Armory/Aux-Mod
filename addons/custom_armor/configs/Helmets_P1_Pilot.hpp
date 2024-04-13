class CLASS(Helmet_Phase1_Pilot_Base);
P1_PILOT_HELMET_CUSTOM(Bailout);
P1_PILOT_HELMET_VISOR_CUSTOM(Blue,Bacta);

class CLASS(Helmet_Phase1_Pilot_Mischief): CLASS(Helmet_Phase1_Pilot_Base) {
    displayName = "[KC] AVI P1 Helm ('Mischief')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1Pilot\Mischief_camo1_co.paa),
        QPATHTOF(data\helmets\phase1Pilot\Mischief_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
    GVAR(isCustom) = TRUE;
    class XtdGearInfo {
        model = QCLASS(Helmets_Pilot_Phase1_Custom);
        camo = "Mischief";
    };
};