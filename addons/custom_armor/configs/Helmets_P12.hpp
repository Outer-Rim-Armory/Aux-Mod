class CLASS(Helmet_Phase12_Base);
class CLASS(Helmet_Phase12_Joe): CLASS(Helmet_Phase12_Base) {
    displayName = "[KC] INF P1-2 Helm ('Joe')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase12\Joe_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\rex\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase12_Joe);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase12_JoeCrimson);
};
class CLASS(Helmet_Phase12_JoeCrimson): CLASS(Helmet_Phase12_Joe) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase12\Joe_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};