class BNA_KC_Plesioth;
class BNA_KC_Plesioth_EPF: BNA_KC_Plesioth
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    faction = "BNA_KC_OPFOR_EPF";
    editorSubcategory = "BNA_KC_SubCat_OPFOR_Tanks";

    crew = "BNA_KC_EPF_Unit_Rifleman";
    typicalCargo[] = {"BNA_KC_EPF_Unit_Rifleman"};

    hiddenSelectionsTextures[] =
    {
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
        "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
    };
    textureList[] = {"TechnoUnion", 0, "EPF", 1};
};