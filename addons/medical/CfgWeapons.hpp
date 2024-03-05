class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class CLASS(Deployable_MedicalDroid_Item): CBA_MiscItem
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        displayName = "[KC] FX-7 Medical Droid";
        picture = QPATHTOEF(core,data\ui\Medic_ca.paa);

        model = "\RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";

        ACE_isMedicalItem = TRUE;

        EGVAR(objects,isDeployable) = TRUE;
        EGVAR(objects,deployTime) = 20;
        EGVAR(objects,deployedObject) = QCLASS(Deployable_MedicalDroid);

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 50;
        };
    };

    class ACE_ItemCore;
    class GVAR(Painkiller): ACE_ItemCore
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        displayName = "[KC] Painkiller Autoinjector";
        descriptionShort = "Used to combat light to moderate pain experiences.";
        descriptionUse = "An analgesic used to combat light to moderate pain experiences.";

        model = "\kobra\442_misc\medical\StimPerigen.p3d";
        picture = "\kobra\442_misc\medical\ui\stim_perigen_ui.paa";

        ACE_isMedicalItem = TRUE;

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.5;
        };
    };
};