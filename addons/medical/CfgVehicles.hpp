class CfgVehicles
{
    class ThingX;
    class CLASS(Deployable_MedicalDroid): ThingX
    {
        SCOPE_PUBLIC;

        displayName = "FX-7 Medical Droid";
        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(Edsubcat_Droids);

        model = "\RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";
        editorPreview = EDITOR_PREVIEW(CLASS(Deployable_MedicalDroid));

        GVAR(areaHealRadius) = 7;
        GVAR(areaHealRate) = 6;
        GVAR(areaHealMaxPatients) = 2;

        EGVAR(core,soundLoop) = QPATHTOF(data\audio\MedicalDroid_Treat.wss);
        EGVAR(core,soundLoopDelay) = 15;

        EGVAR(objects,pickupTime) = 20;

        class ACE_Actions
        {
            class ACE_MainActions
            {
                selection = "interaction_point";
                distance = 5;
                condition = "true";
            };
        };
    };
};