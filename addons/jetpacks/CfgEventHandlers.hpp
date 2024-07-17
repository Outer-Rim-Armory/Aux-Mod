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

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_Init_EventHandlers {
    class CLASS(Resupply_JetpackFuel) {
        class GVAR(refuel) {
            init = QUOTE(_this call FUNC(addRefuelAction));
        };
    };
};

class Extended_GetOutMan_EventHandlers {
    class CAManBase {
        class GVAR(getOutMan) {
            clientGetOutMan = QUOTE(_this call FUNC(getOutMan));
        };
    };
};

class Extended_Killed_EventHandlers {
    class CAManBase {
        class GVAR(clearEffects) {
            killed = QUOTE(_this call FUNC(clearEffectsLocal));
        };
    };
};

class Extended_Deleted_EventHandlers {
    class CAManBase {
        class GVAR(clearEffects) {
            deleted = QUOTE(_this call FUNC(clearEffectsLocal));
        };
    };
};