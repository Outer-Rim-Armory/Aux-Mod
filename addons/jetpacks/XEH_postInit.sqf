#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["BNA_KC_Jet_JetpackFired", {_this call BNA_KC_Jetpacks_fnc_effectHandler}] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call COMPILE_SCRIPT(XEH_postInitClient)
};