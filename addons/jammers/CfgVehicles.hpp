class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class Land_TTowerBig_2_F;
    class GVAR(communicationTower): Land_TTowerBig_2_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "Radio Jammer Tower";

        editorCategory = QEDCAT(Objects);
        editorSubCategory = QEDSUBCAT(Utility);

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };
};
