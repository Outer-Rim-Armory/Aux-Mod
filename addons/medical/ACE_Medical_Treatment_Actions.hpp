class ACE_Medical_Treatment_Actions
{
    class Morphine;
    class GVAR(Painkiller): Morphine
    {
        displayName = "Painkiller Autoinjector";
        displayNameProgress = "Injecting Painkiller...";

        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {QGVAR(PainKiller)};
        treatmentTime = 1;
    };
};
