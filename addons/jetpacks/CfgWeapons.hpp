class CfgWeapons {
    class CLASS(ItemCore);
    class CLASS(ItemCore_ItemInfo);
    class GVAR(fuelCan_empty): CLASS(ItemCore) {
        SCOPE_PUBLIC;

        displayName = "[KC] Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty fuel can.<br/>Can carry 4 liters of fuel.";

        GVAR(isFuelCan) = TRUE;
        GVAR(fuelCanMag) = QGVAR(fuelCan_mag);

        ACE_isTool = TRUE;

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: CLASS(ItemCore_ItemInfo) {
            mass = 60;
        };
    };
};
