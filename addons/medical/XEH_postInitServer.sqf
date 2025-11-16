#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["ace_medical_blood_bloodDropCreated", LINKFUNC(bloodDropCreated)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
