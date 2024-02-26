class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class CLASS(Jetpack_FuelCan_Empty): CBA_MiscItem
    {
        author = "Keeli Company Aux Team";

        SCOPE_PUBLIC;

        displayName = "[KC] Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty Jetpack fuel can.";

        BNA_KC_Jet_isFuelCan = TRUE;
        BNA_KC_Jet_fuelCanMag = "BNA_KC_Jetpack_FuelCan_Mag";

        ACE_isTool = TRUE;

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 60;
        };
    };
};