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
    class GVAR(communicationTower) {
        class GVAR(init) {
            serverInit = QUOTE([ARR_4(_this#0,5000,150,true)] call FUNC(addJammerServer));
        };
    };

    class CLASS(CIS_Unit_Droid_B1_Saboteur) {
        class GVAR(init) {
            serverInit = QUOTE([ARR_4(_this#0,100,100,true)] call FUNC(addJammerServer));
        };
    };
};
