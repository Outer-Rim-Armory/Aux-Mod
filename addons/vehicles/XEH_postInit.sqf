#include "script_component.hpp"

[QGVAR(removeCCP), {
    params ["_vehicle"];
    private _handle = _vehicle getVariable [QGVAR(ccpHandle), -1];
    _handle call CBA_fnc_removePerFrameHandler;
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    call COMPILE_SCRIPT(XEH_postInitServer)
};