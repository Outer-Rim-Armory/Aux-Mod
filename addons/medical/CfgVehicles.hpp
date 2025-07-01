class DefaultEventHandlers;

class CfgVehicles {
    class Land_3AS_Medical_Droid;
    class CLASS(Deployable_MedicalDroid): Land_3AS_Medical_Droid {
        SCOPE_PUBLIC;

        displayName = "FX-7 Medical Droid";
        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Droids);

        editorPreview = EDITOR_PREVIEW(Deployable_MedicalDroid);

        simulation = "house";
        sound = "";

        GVAR(areaHealRadius) = 7;
        GVAR(areaHealRate) = 6;
        GVAR(areaHealMaxPatients) = 2;

        EGVAR(core,soundLoop) = QCLASS(MedicalDroid_Treat);
        EGVAR(core,soundLoopDelay) = 15;
        EGVAR(core,soundLoopCondition) = QUOTE(alive (_this#0));

        EGVAR(objects,pickupTime) = 20;
        EGVAR(objects,interactionPosition)[] = {0, 0, 1.3};

        class EventHandlers: DefaultEventHandlers {};

        class DestructionEffects {};
    };

    class ACE_MedicalLitterBase;
    class GVAR(litter_Painkiller): ACE_MedicalLitterBase {
        model = "\kobra\442_misc\medical\StimPerigen.p3d";
    };
};
