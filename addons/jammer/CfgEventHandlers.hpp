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

class Extended_Init_EventHandlers {
    class GVAR(communicationTower) {
        class GVAR(init) {
            init = QUOTE([ARR_3(_this#0,300,150)] call FUNC(addJammer));
        };
    };

    class CLASS(CIS_Unit_Droid_B1_Saboteur) {
        class GVAR(init) {
            init = QUOTE([ARR_2(_this#0,100)] call FUNC(addJammer));
        };
    };
};