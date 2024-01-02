class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class CLASS(Deployable_MedicalDroid_Item): CBA_MiscItem
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        displayName = "[KC] FX-7 Medical Droid";
        picture = QPATHTOEF(armor,data\insignias\Medic_ca.paa);

        model = "\RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";

        EGVAR(objects,isDeployable) = TRUE;
        EGVAR(objects,deployTime) = 20;

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 50;
        };
    };
};