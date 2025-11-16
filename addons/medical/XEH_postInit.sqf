#include "script_component.hpp"

if (isServer) then {
    call COMPILE_SCRIPT(XEH_postInitServer)
};

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient)
};
