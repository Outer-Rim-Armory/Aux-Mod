class CfgMagazines
{
    class CA_Magazine;
    class BNA_KC_Jetpack_FuelCan_Mag: CA_Magazine
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Jetpack Fuel Can";
        descriptionShort = "A partially full Jetpack fuel can.";

        count = 400; // Amount of fuel that can be carried
        mass = 60;

        BNA_KC_Jet_isFuelCan = 1;
        BNA_KC_Jet_fuelCanItem = "BNA_KC_Jetpack_FuelCan_Empty";

        picture = "\BNA_KC_Gear\Jetpacks\Data\Textures\UI\BNA_KC_Jet_FuelCan.paa";
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
    };
};