class CfgWeapons {
    class CLASS(ItemCore);
    class CLASS(ItemCore_ItemInfo);
    class CLASS(Deployable_MedicalDroid_Item): CLASS(ItemCore) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] FX-7 Medical Droid";
        picture = QPATHTOEF(core,data\ui\Medic_ca.paa);

        model = "\3AS\3AS_props\droids\models\3AS_medical_droid.p3d";

        ACE_isMedicalItem = TRUE;

        EGVAR(objects,isDeployable) = TRUE;
        EGVAR(objects,deployTime) = 20;
        EGVAR(objects,deployedObject) = QCLASS(Deployable_MedicalDroid);

        class ItemInfo: CLASS(ItemCore_ItemInfo) {
            mass = 50;
        };
    };

    class GVAR(Painkiller): CLASS(ItemCore) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] Painkiller Autoinjector";
        descriptionShort = "Used to combat light to moderate pain experiences.";
        descriptionUse = "An analgesic used to combat light to moderate pain experiences.";

        model = "\kobra\442_misc\medical\StimPerigen.p3d";
        picture = "\kobra\442_misc\medical\ui\stim_perigen_ui.paa";

        ACE_isMedicalItem = TRUE;

        class ItemInfo: CLASS(ItemCore_ItemInfo) {
            mass = 0.5;
        };
    };
};