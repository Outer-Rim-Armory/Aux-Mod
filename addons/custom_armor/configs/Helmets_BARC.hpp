class CLASS(Helmet_BARC_Base);
BARC_HELMET_VISOR_CUSTOM(Burnt,Bacta);

class CLASS(Helmet_BARC_Burnt_Worn): CLASS(Helmet_BARC_Base) {
    displayName = "[KC] INF BARC Helm ('Burnt') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\worn\Burnt_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_BARC_Burnt_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_BARC_BurntBacta_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_BARC_BurntBacta_Worn): CLASS(Helmet_BARC_Burnt_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\worn\Burnt_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

BARC_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_BARC_Keeli_Worn): CLASS(Helmet_BARC_Base) {
    displayName = "[KC] INF BARC Helm ('Keeli') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\worn\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_BARC_Keeli_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_BARC_KeeliCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_BARC_KeeliCrimson_Worn): CLASS(Helmet_BARC_Keeli_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\worn\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_BARC_Keeli_Empire): CLASS(Helmet_BARC_Base) {
    displayName = "[KC] INF BARC Helm ('Keeli') - Empire";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\empire\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_BARC_Keeli_Empire);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_BARC_KeeliCrimson_Empire);

    class XtdGearInfo: XtdGearInfo {
        camo = "Empire";
    };
};
class CLASS(Helmet_BARC_KeeliCrimson_Empire): CLASS(Helmet_BARC_Keeli_Empire) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\camo\empire\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
BARC_HELMET_CUSTOM(Lines);
BARC_HELMET_VISOR_CUSTOM(Rat,Crimson);
BARC_HELMET_CUSTOM(Weenie);