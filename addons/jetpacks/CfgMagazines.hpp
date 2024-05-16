class CfgMagazines {
    class CA_Magazine;
    class GVAR(fuelCan_mag): CA_Magazine {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] Jetpack Fuel Can";
        descriptionShort = "A partially full Jetpack fuel can.";

        count = 400; // Amount of fuel that can be carried
        mass = 60;

        GVAR(isFuelCan) = TRUE;
        GVAR(fuelCanItem) = QGVAR(fuelCan_empty);

        ACE_isTool = TRUE;

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
    };
};