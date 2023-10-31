class CfgPatches
{
    class BNA_KC_Vehicles
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VAir
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Vehicles - Air";
    };
    class BNA_KC_SubCat_VArmored: BNA_KC_SubCat_VAir
    {
        displayName = "Vehicles - Armored";
    };
    class BNA_KC_SubCat_VDrones: BNA_KC_SubCat_VAir
    {
        displayName = "Vehicles - Drones";
    };
    class BNA_KC_SubCat_VLight: BNA_KC_SubCat_VAir
    {
        displayName = "Vehicles - Light";
    };
    class BNA_KC_SubCat_VSupport: BNA_KC_SubCat_VAir
    {
        displayName = "Vehicles - Support";
    };
    class BNA_KC_SubCat_VStatic: BNA_KC_SubCat_VAir
    {
        displayName = "Static Weapons";
    };
    class BNA_KC_SubCat_Cars: BNA_KC_SubCat_VAir
    {
        displayName = "Cars";
    };
    class BNA_KC_SubCat_Speeders: BNA_KC_SubCat_VAir
    {
        displayName = "Speeders";
    };
    class BNA_KC_SubCat_Planes: BNA_KC_SubCat_VAir
    {
        displayName = "Planes";
    };
    class BNA_KC_SubCat_Helicopters: BNA_KC_SubCat_VAir
    {
        displayName = "Helicopters";
    };
};