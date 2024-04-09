class CLASS(Helmet_Phase2_Base);
P2_HELMET_CUSTOM(Alvarez);
P2_HELMET_CUSTOM(Axel);
P2_HELMET_VISOR_CUSTOM(Bob,Kyber);
P2_HELMET_VISOR_CUSTOM(Burnt,Bacta);
P2_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P2_HELMET_CUSTOM(Evo);
P2_HELMET_CUSTOM(Grey);
P2_HELMET_CUSTOM(Harry);
P2_HELMET_CUSTOM(Hazard);
P2_HELMET_CUSTOM(Jackal);
P2_HELMET_CUSTOM(Jaws);
P2_HELMET_VISOR_CUSTOM(Joe,Crimson);
P2_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_Phase2_Keeli_CamoBrown): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoBrown);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown);

    class XtdGearInfo
    {
        model = QCLASS(Helmets_Phase2_Custom);
        camo = "Keeli_CamoBrown";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoBrown): CLASS(Helmet_Phase2_Keeli_CamoBrown)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_CamoGrey): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoGrey);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey);

    class XtdGearInfo
    {
        model = QCLASS(Helmets_Phase2_Custom);
        camo = "Keeli_CamoGrey";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoGrey): CLASS(Helmet_Phase2_Keeli_CamoGrey)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P2_HELMET_CUSTOM(Leon);
P2_HELMET_VISOR_CUSTOM(Lou,Plasma);
P2_HELMET_CUSTOM(Ox);
P2_HELMET_CUSTOM(Patriot);
P2_HELMET_CUSTOM(Rodger);
P2_HELMET_CUSTOM(Sage);
P2_HELMET_CUSTOM(Scvrpio);
P2_HELMET_CUSTOM(Sogi);
P2_HELMET_CUSTOM(Star);
P2_HELMET_CUSTOM(Swoop);
P2_HELMET_CUSTOM(Sytha);
P2_HELMET_CUSTOM(Talyn);
P2_HELMET_CUSTOM(Tugz);
P2_HELMET_CUSTOM(Vortex);
P2_HELMET_CUSTOM(Woods);