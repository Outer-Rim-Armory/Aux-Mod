class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_InitPost_EventHandlers {
    class CLASS(CIS_Unit_Droid_B1_Prototype) {
        class GVAR(init) {
            init = QUOTE(_this#0 call FUNC(initB1Prototype));
        };
    };

    class CLASS(CIS_Unit_Droid_B2) {
        class GVAR(init) {
            init = QUOTE(_this#0 call FUNC(initB2));
        };
    };
    class CLASS(CIS_Unit_Droid_B2_Revived) {
        class GVAR(init) {
            init = "";
        };
    };
};

class Extended_Killed_EventHandlers {
    class CLASS(CIS_Unit_Droid_Base) {
        class GVAR(revive) {
            killed = QUOTE(_this#0 call FUNC(revive));
        };
    };
    class CLASS(CIS_Unit_Droid_B2) {
        class GVAR(revive) {
            killed = QUOTE([ARR_2(_this#0,'b2')] call FUNC(revive));
        };
    };
};