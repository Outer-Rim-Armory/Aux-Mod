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

class Extended_Killed_EventHandlers {
    class AllVehicles {
        class GVAR(deactivateShield) {
            killed = QUOTE(call FUNC(deactivate));
        };
    };
};

class Extended_Deleted_EventHandlers {
    class AllVehicles {
        class GVAR(deactivateShield) {
            deleted = QUOTE(call FUNC(deactivate));
        };
    };
};
