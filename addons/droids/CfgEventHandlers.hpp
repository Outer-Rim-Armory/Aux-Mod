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
    class CLASS(CIS_Unit_Droid_B2) {
        class GVAR(init) {
            init = QUOTE(_this#0 call FUNC(initB2));
        };
    };
    class CLASS(CIS_Unit_Droid_B2) {
        class GVAR(init) {
            init = QUOTE(_this#0 call FUNC(initB1Prototype));
        };
    };
};