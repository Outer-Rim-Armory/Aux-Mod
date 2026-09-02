class CLASS(Helmet_Phase1_Base);
P1_HELMET_CUSTOM(Alvarez);
P1_HELMET_CUSTOM(Anvil);
P1_HELMET_CUSTOM(Axel);
P1_HELMET_CUSTOM(Azen);
P1_HELMET_VISOR_CUSTOM(Bailout,Kyber);
P1_HELMET_CUSTOM(Bane);
P1_HELMET_VISOR_CUSTOM(Bean,Crimson);
P1_HELMET_CUSTOM(Bigness);
//P1_HELMET_CUSTOM(Bond);
P1_HELMET_CUSTOM(Boon);
P1_HELMET_VISOR_CUSTOM(Burnt,Bacta);
//P1_HELMET_CUSTOM(Calvin);
P1_HELMET_VISOR_CUSTOM(Catholic,Kyber);
P1_HELMET_CUSTOM(Cherry);
P1_HELMET_CUSTOM(Church);
P1_HELMET_CUSTOM(Cinna);
P1_HELMET_CUSTOM(Clap);
P1_HELMET_CUSTOM(Colly);
//P1_HELMET_CUSTOM(Cutthroat);
P1_HELMET_CUSTOM(Dawg);
P1_HELMET_VISOR_CUSTOM(Defter,Bacta);
P1_HELMET_VISOR_CUSTOM(Destiny,Bacta);
P1_HELMET_CUSTOM(Deuce);
//P1_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P1_HELMET_CUSTOM(Doc);
P1_HELMET_CUSTOM(Doogle);
P1_HELMET_VISOR_CUSTOM(Drake,Bacta);
P1_HELMET_VISOR_CUSTOM(Drakken,Bacta);
P1_HELMET_CUSTOM(Fil);
//P1_HELMET_CUSTOM(Grey);
P1_HELMET_CUSTOM(Hades);
P1_HELMET_VISOR_CUSTOM(Hagrid,Plasma);
P1_HELMET_VISOR_CUSTOM(Harry,Bacta);
//P1_HELMET_CUSTOM(Hazard);
P1_HELMET_CUSTOM(Henkie);
P1_HELMET_CUSTOM(Jaws);
P1_HELMET_CUSTOM(Jean);
P1_HELMET_VISOR_CUSTOM(Jester,Bacta);
P1_HELMET_CUSTOM(Jimsbo);
P1_HELMET_VISOR_CUSTOM(Joe,Crimson);
P1_HELMET_CUSTOM(Juno);
P1_HELMET_CUSTOM(Kage);
P1_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_Phase1_Keeli_On): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Perma Crimson";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_On);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_On);
};
class CLASS(Helmet_Phase1_KeeliCrimson_On): CLASS(Helmet_Phase1_Keeli) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

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
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase1_Keeli_Worn_On): CLASS(Helmet_Phase1_Keeli) {
    displayName = "[KC] INF P1 Helm ('Keeli') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Keeli_camo1_co.paa),
         "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli_Worn_On);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson_Worn_On);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase1_KeeliCrimson_Worn_On): CLASS(Helmet_Phase1_Keeli_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\worn\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
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
class ls_gar_phase1_hologram_helmet;
class CLASS(Helmet_Phase1_Keeli_Hologram): ls_gar_phase1_hologram_helmet {
    DisplayName = "[KC] INF P1 Helm ('Keeli') - Hologram";
    model = "\ls\core\addons\characters_clone_legacy\helmets\phase1\ls_cloneHelmet_phase1_hologram.p3d";
    hiddenSelectionsMaterials[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\hologram\camo1.rvmat",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\hologram\visor.rvmat",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\hologram\illum.rvmat"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\hologram\Keeli_camo1_ca.paa),
        "\ls\core\addons\data\textures\hologram\blueHologram_flip_ca.paa",
        "\ls\core\addons\data\textures\hologram\blueHologram_ca.paa"
    };
};

P1_HELMET_CUSTOM(Kujo);
P1_HELMET_CUSTOM(Koa);
//P1_HELMET_VISOR_CUSTOM(Lou,Plasma);
//P1_HELMET_CUSTOM(Lacker);
P1_HELMET_CUSTOM(Leo);
P1_HELMET_CUSTOM(Match);
//P1_HELMET_CUSTOM(Marge);
P1_HELMET_CUSTOM(Maverick);
P1_HELMET_CUSTOM(Mink);
P1_HELMET_VISOR_CUSTOM(Nate,Kyber);
//P1_HELMET_CUSTOM(Ox);
P1_HELMET_VISOR_CUSTOM(Patriot,Crimson);
P1_HELMET_VISOR_CUSTOM(Rat,Crimson);
//P1_HELMET_CUSTOM(Rabble);
P1_HELMET_CUSTOM(Rev);
//P1_HELMET_CUSTOM(Rodger);
P1_HELMET_CUSTOM(Sage);
P1_HELMET_CUSTOM(Sausage);
P1_HELMET_CUSTOM(Scan);
P1_HELMET_CUSTOM(Sherlock);
P1_HELMET_CUSTOM(Sils);
P1_HELMET_CUSTOM(Sin);
P1_HELMET_CUSTOM(Slate);
P1_HELMET_CUSTOM(Snake);
P1_HELMET_CUSTOM(Spicy);
P1_HELMET_VISOR_CUSTOM(Splashdown,Kyber);
//P1_HELMET_CUSTOM(Spoon);
P1_HELMET_VISOR_CUSTOM(Sprint,Bacta);
P1_HELMET_CUSTOM(Star);
//P1_HELMET_VISOR_CUSTOM(Swoop,Bacta);
P1_HELMET_CUSTOM(Swim);
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

P1_HELMET_CUSTOM(Tye);
P1_HELMET_CUSTOM(Walsh);
//P1_HELMET_CUSTOM(Weenie);
P1_HELMET_CUSTOM(Whisker);
P1_HELMET_CUSTOM(Woods);
P1_HELMET_CUSTOM(Wormbait);
