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

class Extended_GetIn_EventHandlers {
    class All {
        class GVAR(autoSetChannel) {
            getIn = QUOTE(call FUNC(autoSetChannel));
        };
    };
};