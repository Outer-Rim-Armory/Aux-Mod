class CfgVehicles
{
    class Land_3AS_Medical_Droid;
    class CLASS(Deployable_MedicalDroid): Land_3AS_Medical_Droid {
        SCOPE_PUBLIC;

        displayName = "FX-7 Medical Droid";
        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Droids);

        model = "\3AS\3AS_props\droids\models\3AS_medical_droid.p3d";
        editorPreview = EDITOR_PREVIEW(Deployable_MedicalDroid);

        GVAR(areaHealRadius) = 7;
        GVAR(areaHealRate) = 6;
        GVAR(areaHealMaxPatients) = 2;

        EGVAR(core,soundLoop) = QCLASS(MedicalDroid_Treat);
        EGVAR(core,soundLoopDelay) = 15;

        EGVAR(objects,pickupTime) = 20;
        EGVAR(objects,interactionPosition)[] = {0, 0, 1.3};
    };

    class ACE_MedicalLitterBase;
    class GVAR(litter_Painkiller): ACE_MedicalLitterBase {
        model = "\kobra\442_misc\medical\StimPerigen.p3d";
    };
};