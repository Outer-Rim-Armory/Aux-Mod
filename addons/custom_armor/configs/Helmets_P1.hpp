class CLASS(Helmet_Phase1_Base);
P1_HELMET_CUSTOM(Alvarez);
P1_HELMET_CUSTOM(Anvil);
P1_HELMET_CUSTOM(Axel);
P1_HELMET_CUSTOM(Bailout);
P1_HELMET_VISOR_CUSTOM(Bean,Crimson);
P1_HELMET_CUSTOM(Bigness);
P1_HELMET_CUSTOM(Bond);
P1_HELMET_VISOR_CUSTOM(Burnt,Bacta);
P1_HELMET_CUSTOM(Calvin);
P1_HELMET_VISOR_CUSTOM(Catholic,Kyber);
P1_HELMET_CUSTOM(Cutthroat);
P1_HELMET_VISOR_CUSTOM(Defter,Bacta);
P1_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P1_HELMET_VISOR_CUSTOM(Drake,Bacta);
P1_HELMET_CUSTOM(Fil);
P1_HELMET_CUSTOM(Grey);
P1_HELMET_VISOR_CUSTOM(Hagrid,Plasma);
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
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
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
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
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
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
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
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase1_Keeli_Worn): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Keeli_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase1_KeeliCrimson_Worn): CLASS(Helmet_Phase1_Keeli_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase1_Keeli_Geo): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Geo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\Keeli_Yellow_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_Geo);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_Geo);
};
class CLASS(Helmet_Phase1_KeeliCrimson_Geo): CLASS(Helmet_Phase1_Keeli_Geo) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\Keeli_Yellow_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P1_HELMET_CUSTOM(Kujo);
P1_HELMET_VISOR_CUSTOM(Lou,Plasma);
P1_HELMET_CUSTOM(Marge);
P1_HELMET_CUSTOM(Maverick);
P1_HELMET_CUSTOM(Nate);
P1_HELMET_CUSTOM(Ox);
P1_HELMET_VISOR_CUSTOM(Patriot,Crimson);
P1_HELMET_VISOR_CUSTOM(Rat,Crimson);
P1_HELMET_CUSTOM(Rabble);
P1_HELMET_CUSTOM(Rev);
P1_HELMET_CUSTOM(Rodger);
P1_HELMET_CUSTOM(Sage);
P1_HELMET_CUSTOM(Sin);
P1_HELMET_VISOR_CUSTOM(Splashdown,Kyber);
P1_HELMET_CUSTOM(Spoon);
P1_HELMET_CUSTOM(Star);
P1_HELMET_CUSTOM(Swoop);
P1_HELMET_CUSTOM(Talyn);
P1_HELMET_VISOR_CUSTOM(Tyrant,Crimson);

class CLASS(Helmet_Phase1_Tyrant_Worn): CLASS(Helmet_Phase1_Tyrant) {
    SCOPE_HIDDEN;
    displayName = "[KC] INF P1 Helm ('Tyrant') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Tyrant_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Tyrant_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_TyrantCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase1_TyrantCrimson_Worn): CLASS(Helmet_Phase1_Tyrant_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Tyrant_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P1_HELMET_CUSTOM(Weenie);
P1_HELMET_CUSTOM(Woods);
