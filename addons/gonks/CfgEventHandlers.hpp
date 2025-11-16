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
        clientInit = QUOTE(call COMPILE_SCRIPT(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_SCRIPT(XEH_postInitServer));
    };
};

class Extended_InitPost_EventHandlers {
    class CLASS(Gonk_Loadouts) {
        class GVAR(loadoutBoxInit) {
            clientInit = QUOTE(_this call FUNC(loadoutBoxInit));
        };
    };

    class CLASS(Gonk_Uniforms) {
        class GVAR(rankBoxInit) {
            clientInit = QUOTE(_this call FUNC(rankBoxInit));
        };
    };
};
