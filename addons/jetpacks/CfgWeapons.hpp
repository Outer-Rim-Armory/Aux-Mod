class CfgWeapons {
    class CLASS(ItemCore);
    class CLASS(ItemCore_ItemInfo);
    class GVAR(fuelCan_empty): CLASS(ItemCore) {
        SCOPE_PUBLIC;

        displayName = "[KC] Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty Jetpack fuel can.";

        GVAR(isFuelCan) = TRUE;
        GVAR(fuelCanMag) = QGVAR(fuelCan_mag);

        ACE_isTool = TRUE;
        ACE_asItem = TRUE; // treat this magazine like an item

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: CLASS(ItemCore_ItemInfo) {
            mass = 60;
        };
    };
};