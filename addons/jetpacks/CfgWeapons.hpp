class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class BNA_KC_Jetpack_FuelCan_Empty: CBA_MiscItem
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        SCOPE_PUBLIC;

        displayName = "[KC] Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty Jetpack fuel can.";

        BNA_KC_Jet_isFuelCan = TRUE;
        BNA_KC_Jet_fuelCanMag = "BNA_KC_Jetpack_FuelCan_Mag";

        ACE_isTool = TRUE;

        picture = "\BNA_KC_Gear\Jetpacks\Data\Textures\UI\BNA_KC_Jet_FuelCan.paa";
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 60;
        };
    };
};