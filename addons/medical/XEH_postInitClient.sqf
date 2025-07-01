#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["ace_medicalMenuOpened", FUNC(showMedicalHint)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
