class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
    class BNA_KC_vehicles_Skills
    {
        init = "call compileScript ['ORA\BNA_KC\addons\vehicles\functions\skills\scripts\XEH_preInit.sqf']";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_Killed_EventHandlers {
    class All {
        class GVAR(autoEject) {
            serverKilled = QUOTE(_this call FUNC(autoEject));
        };
    };
};