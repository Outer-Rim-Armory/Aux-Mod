class CfgEditorSubcategories
{
    // Units
    class BNA_KC_SubCat_Infantry
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Infantry";
    };
    class BNA_KC_SubCat_Crewmen: BNA_KC_SubCat_Infantry
    {
        displayName = "Crewmen";
    };
    class BNA_KC_SubCat_SpecialForces: BNA_KC_SubCat_Infantry
    {
        displayName = "Special Forces";
    };
    class BNA_KC_SubCat_Special: BNA_KC_SubCat_Infantry
    {
        displayName = "Special"; // Used for things like faction officers
    };

    // Ground Vehicles
    class BNA_KC_SubCat_Tanks: BNA_KC_SubCat_Infantry
    {
        displayName = "Tanks";
    };
    class BNA_KC_SubCat_APCs: BNA_KC_SubCat_Infantry
    {
        displayName = "APCs";
    };
    class BNA_KC_SubCat_Walkers: BNA_KC_SubCat_Infantry
    {
        displayName = "Walkers";
    };
    class BNA_KC_SubCat_Armored: BNA_KC_SubCat_Infantry
    {
        displayName = "Armored"; // Generic category
    };
    class BNA_KC_SubCat_Cars: BNA_KC_SubCat_Infantry
    {
        displayName = "Cars";
    };
    class BNA_KC_SubCat_Speeders: BNA_KC_SubCat_Infantry
    {
        displayName = "Speeders";
    };
    class BNA_KC_SubCat_Drones: BNA_KC_SubCat_Infantry
    {
        displayName = "Drones";
    };
    class BNA_KC_SubCat_Light: BNA_KC_SubCat_Infantry
    {
        displayName = "Light"; // Generic category
    };
    class BNA_KC_SubCat_Turrets: BNA_KC_SubCat_Infantry
    {
        displayName = "Turrets";
    };

    // Air Vehicles
    class BNA_KC_SubCat_Planes: BNA_KC_SubCat_Infantry
    {
        displayName = "Planes";
    };
    class BNA_KC_SubCat_Helicopters: BNA_KC_SubCat_Infantry
    {
        displayName = "Helicopters";
    };
    class BNA_KC_SubCat_Aircraft: BNA_KC_SubCat_Infantry
    {
        displayName = "Aircraft"; // Generic category
    };
};