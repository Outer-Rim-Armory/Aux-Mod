class ACE_Medical_Treatment_Actions {
    class Morphine;
    class GVAR(Painkiller): Morphine {
        displayName = "Painkiller Autoinjector";
        displayNameProgress = "Injecting Painkiller...";

        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {QGVAR(Painkiller)};
        litter[] = {{QGVAR(litter_Painkiller)}};
        treatmentTime = 1;
    };

    class CPR;
    class GVAR(Reorient): CPR {
        displayName = "Reorient Patient";
        displayNameProgress = "Reorienting...";

        allowedSelections[] = {"Head"};

        medicRequired = QGVAR(reorient_medicRequired);
        treatmentTime = QGVAR(reorient_treatmentTime);

        condition = QUOTE(!(_patient call ace_common_fnc_isAwake));
        callbackFailure = "";
        callbackProgress = "";
        callbackSuccess = QUOTE([ARR_2(_medic,_patient)] call FUNC(reorient));
        callbackStart = "";

        animationMedic = "";
        animationMedicProne = "";
    };
};
