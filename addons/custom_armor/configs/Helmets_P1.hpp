class CLASS(Helmet_Phase1_Base);
P1_HELMET_CUSTOM(Alvarez);
P1_HELMET_CUSTOM(Anvil);
P1_HELMET_CUSTOM(Axel);
P1_HELMET_CUSTOM(Bailout);
P1_HELMET_CUSTOM(Bond);
P1_HELMET_VISOR_CUSTOM(Burnt,Bacta);
P1_HELMET_VISOR_CUSTOM(Catholic,Kyber);
P1_HELMET_CUSTOM(Cutthroat);
P1_HELMET_VISOR_CUSTOM(Defter,Bacta);
P1_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P1_HELMET_VISOR_CUSTOM(Drake,Bacta);
P1_HELMET_CUSTOM(Fil);
P1_HELMET_CUSTOM(Grey);
P1_HELMET_CUSTOM(Harry);
P1_HELMET_CUSTOM(Hazard);
P1_HELMET_CUSTOM(Henkie);
P1_HELMET_CUSTOM(Jaws);
P1_HELMET_VISOR_CUSTOM(Jester,Bacta);
P1_HELMET_VISOR_CUSTOM(Joe,Crimson);
P1_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_Phase1_Keeli_CamoBrown): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_CamoBrown);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_CamoBrown);

    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};
class CLASS(Helmet_Phase1_KeeliCrimson_CamoBrown): CLASS(Helmet_Phase1_Keeli_CamoBrown) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase1_Keeli_CamoGrey): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_CamoGrey);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_CamoGrey);

    class XtdGearInfo: XtdGearInfo {
        camo = "Grey";
    };
};
class CLASS(Helmet_Phase1_KeeliCrimson_CamoGrey): CLASS(Helmet_Phase1_Keeli_CamoGrey) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P1_HELMET_CUSTOM(Kujo);
P1_HELMET_VISOR_CUSTOM(Lou,Plasma);
P1_HELMET_CUSTOM(Marge);
P1_HELMET_CUSTOM(Ox);
P1_HELMET_VISOR_CUSTOM(Patriot,Crimson);
P1_HELMET_VISOR_CUSTOM(Rat,Crimson);
P1_HELMET_CUSTOM(Rabble);
P1_HELMET_CUSTOM(Rev);
P1_HELMET_CUSTOM(Rodger);
P1_HELMET_CUSTOM(Sage);
P1_HELMET_CUSTOM(Sin);
P1_HELMET_CUSTOM(Splashdown);
P1_HELMET_CUSTOM(Swoop);
P1_HELMET_CUSTOM(Talyn);
P1_HELMET_VISOR_CUSTOM(Tyrant,Crimson);
P1_HELMET_CUSTOM(Woods);