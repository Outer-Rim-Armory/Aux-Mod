class BNA_KC_AAT_CIS;
class BNA_KC_AAT_TU: BNA_KC_AAT_CIS
{
    faction = "BNA_KC_OPFOR_TU";
    editorSubcategory = "BNA_KC_SubCat_OPFOR_Tanks";

    crew = "BNA_KC_TU_Unit_Rifleman";
    typicalCargo[] = {"BNA_KC_TU_Unit_Rifleman"};

    hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
    editorPreview = "\3as\3AS_AAT\images\3AS_AAT_tan.jpg";

    textureList[] =
    {
        "CIS", 0,
        "TradeFederation", 1,
        "Green", 0,
        "Red", 0,
        "Desert", 0,
        "Geonosis", 0,
        "Woodland", 0,
        "Tropical", 0,
        "Arid", 0,
        "Winter", 0,
        "Aqua", 0
    };
};

class BNA_KC_Plesioth;
class BNA_KC_Plesioth_TU: BNA_KC_Plesioth
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    faction = "BNA_KC_OPFOR_TU";
    editorSubcategory = "BNA_KC_SubCat_OPFOR_Tanks";

    crew = "BNA_KC_TU_Unit_Rifleman";
    typicalCargo[] = {"BNA_KC_TU_Unit_Rifleman"};

    hiddenSelectionsTextures[] =
    {
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_desert_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_desert_co.paa"
    };
    textureList[] = {"TechnoUnion", 1, "EPF", 0};
};