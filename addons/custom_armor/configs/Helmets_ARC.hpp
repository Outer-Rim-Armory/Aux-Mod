class CLASS(Helmet_ARC_Base);
ARC_HELMET_VISOR_CUSTOM(Drake,Bacta);

//class CLASS(Helmet_ARC_Drake_Emp): CLASS(Helmet_ARC_Base) {
//    displayName = "[KC] SF ARC P1.5 Helm ('Drake') - Empire";
//    hiddenSelectionsTextures[] = {
//        QPATHTOF(data\helmets\arc\camo\empire\Drake_camo1_co.paa),
//        "\ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
//   };

//    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARC_Drake_Emp);
//    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARC_DrakeBacta_Emp);

//    class XtdGearInfo: XtdGearInfo {
//        camo = "Empire";
//    };
//};
//class CLASS(Helmet_ARC_DrakeBacta_Emp): CLASS(Helmet_ARC_Drake_Emp) {
//    SCOPE_HIDDEN;
//    hiddenSelectionsTextures[] = {
//        QPATHTOF(data\helmets\arc\camo\empire\Drake_camo1_co.paa),
 //       QPATHTOF(data\visors\Bacta_camo2_co.paa)
//    };
//    hiddenSelectionsMaterials[] = {
//        "",
//        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
//    };
//};

ARC_HELMET_VISOR_CUSTOM(Hagrid,Plasma);
ARC_HELMET_CUSTOM(Harry);
ARC_HELMET_VISOR_CUSTOM(Sin,Crimson);
ARC_HELMET_CUSTOM(Swoop);
ARC_HELMET_VISOR_CUSTOM(Tyrant,Crimson);

class CLASS(Helmet_ARC_Tyrant_Worn): CLASS(Helmet_ARC_Base) {
    SCOPE_HIDDEN;
    displayName = "[KC] SF ARC P1.5 Helm ('Tyrant') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\camo\worn\Tyrant_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
   };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARC_Tyrant_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARC_TyrantCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Empire";
    };
};
class CLASS(Helmet_ARC_TyrantCrimson_Worn): CLASS(Helmet_ARC_Tyrant_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\camo\worn\Tyrant_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};