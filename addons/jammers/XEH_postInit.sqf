#include "script_component.hpp"

// Tracked separately on server and client
GVAR(activeJammers) = createHashMap;

if (isServer) then {
    call COMPILE_SCRIPT(XEH_postInitServer)
};

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient)
};