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

class Extended_VisionModeChanged_EventHandlers {
    class CAManBase {
        GVAR(nvHelmetToggle) = QUOTE(_this call FUNC(nvHelmetToggle));
    };
};