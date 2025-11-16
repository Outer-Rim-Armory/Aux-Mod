class ACE_Medical_Treatment {
    class Medication {
        class GVAR(Painkiller) {
            painReduce = 0.3;

            hrIncreaseLow[] = {-2, -4};
            hrIncreaseNormal[] = {-2, -6};
            hrIncreaseHigh[] = {-2, -7};

            timeInSystem = 600;
            timeTillMaxEffect = 30;
            maxDose = 10;

            incompatibleMedication[] = {};
            viscosityChange = -2;
        };
    };
};
