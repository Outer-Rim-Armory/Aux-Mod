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

class Extended_Init_EventHandlers {
    class CLASS(Gonk_Loadouts) {
        class GVAR(loadoutBoxInit) {
            clientInit = QUOTE(_this call FUNC(loadoutBoxInit));
        };
    };

    class CLASS(Gonk_Uniforms) {
        class GVAR(uniformBoxInit) {
            clientInit = QUOTE(_this call FUNC(uniformBoxInit));
        };
    };
};