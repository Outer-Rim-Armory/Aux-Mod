class CLASS(Helmet_ARF_Base);
ARF_HELMET_VISOR_CUSTOM(Defter,Bacta);
ARF_HELMET_CUSTOM(Evo);
ARF_HELMET_VISOR_CUSTOM(Jester,Bacta);
ARF_HELMET_CUSTOM(Patriot);
ARF_HELMET_CUSTOM(Rabble);
ARF_HELMET_CUSTOM(Rev);
ARF_HELMET_CUSTOM(Seeger);
ARF_HELMET_VISOR_CUSTOM(Sogi,Plasma);
ARF_HELMET_CUSTOM(Stormz);
ARF_HELMET_VISOR_CUSTOM(Tanker,Bacta);
class CLASS(Helmet_ARF_Tanker_Worn): CLASS(Helmet_ARF_Base) {
    SCOPE_PUBLIC;
    displayName = "[KC] SF ARF Helm ('Tanker') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\camo\worn\Tanker_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARF_Tanker_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARF_TankerBacta_Worn);
};
class CLASS(Helmet_ARF_TankerBacta_Worn): CLASS(Helmet_ARF_Tanker_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\camo\worn\Tanker_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_ARF_visor_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
ARF_HELMET_CUSTOM(Tugz);
ARF_HELMET_CUSTOM(Turtle);
