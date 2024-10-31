class CLASS(Helmet_Phase2_Base);
P2_HELMET_CUSTOM(Alvarez);
P2_HELMET_CUSTOM(Axel);
P2_HELMET_CUSTOM(Bailout);
P2_HELMET_CUSTOM(Bean);
P2_HELMET_CUSTOM(Bigness);
P2_HELMET_VISOR_CUSTOM(Bob,Kyber);
P2_HELMET_CUSTOM(Bond);
P2_HELMET_VISOR_CUSTOM(Burnt,Bacta);
P2_HELMET_CUSTOM(Cough);
P2_HELMET_CUSTOM(Cutthroat);
P2_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P2_HELMET_CUSTOM(Evo);
P2_HELMET_CUSTOM(Flare);
P2_HELMET_CUSTOM(Grey);
P2_HELMET_CUSTOM(Goldie);
P2_HELMET_CUSTOM(Harry);
P2_HELMET_CUSTOM(Hazard);
P2_HELMET_CUSTOM(Henkie);
P2_HELMET_CUSTOM(Jackal);
P2_HELMET_CUSTOM(Jaws);

class CLASS(Helmet_Phase2_Jaws_CamoBrown): CLASS(Helmet_Phase2_Jaws) {
    displayName = "[KC] INF P2 Helm ('Jaws') - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Jaws_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};

P2_HELMET_VISOR_CUSTOM(Joe,Crimson);
P2_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_Phase2_Keeli_CamoBrown): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoBrown);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown);

    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoBrown): CLASS(Helmet_Phase2_Keeli_CamoBrown) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_CamoGrey): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoGrey);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey);

    class XtdGearInfo: XtdGearInfo {
        camo = "Grey";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoGrey): CLASS(Helmet_Phase2_Keeli_CamoGrey) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_Worn): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_Worn): CLASS(Helmet_Phase2_Keeli_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P2_HELMET_CUSTOM(Kujo);
P2_HELMET_CUSTOM(Leon);
P2_HELMET_VISOR_CUSTOM(Lou,Plasma);
P2_HELMET_CUSTOM(Marge);
P2_HELMET_CUSTOM(Ox);
P2_HELMET_CUSTOM(Patriot);
P2_HELMET_CUSTOM(Rodger);
P2_HELMET_CUSTOM(Sage);
P2_HELMET_CUSTOM(Scvrpio);
P2_HELMET_VISOR_CUSTOM(Sin,Crimson);
P2_HELMET_CUSTOM(Sogi);
P2_HELMET_CUSTOM(Star);
P2_HELMET_CUSTOM(Swoop);
P2_HELMET_CUSTOM(Sytha);
P2_HELMET_CUSTOM(Talyn);
P2_HELMET_CUSTOM(Tugz);
P2_HELMET_CUSTOM(Vortex);
P2_HELMET_CUSTOM(Weenie);
P2_HELMET_CUSTOM(Woods);