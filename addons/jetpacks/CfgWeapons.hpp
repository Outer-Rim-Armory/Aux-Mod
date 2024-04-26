class CfgWeapons {
    class CLASS(ItemCore);
    class CLASS(ItemCore_ItemInfo);
    class CLASS(Jetpack_FuelCan_Empty): CLASS(ItemCore) {
        author = AUTHOR;

        SCOPE_PUBLIC;

        displayName = "[KC] Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty Jetpack fuel can.";

        GVAR(isFuelCan) = TRUE;
        GVAR(fuelCanMag) = QCLASS(Jetpack_FuelCan_Mag);

        ACE_isTool = TRUE;

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: CLASS(ItemCore_ItemInfo) {
            mass = 60;
        };
    };
};