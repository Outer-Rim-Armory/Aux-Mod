#include "script_component.hpp"

["CBA_settingsInitialized", {
    [GVAR(preset), parseNumber GVAR(budget), GVAR(sides)] call FUNC(registerPreset);

    GVAR(counter) = profileNamespace getVariable [VAR_SAVE_KEY(counter), 0];
    // GVAR(budget_west) = profileNamespace getVariable [VAR_SAVE_KEY(budget_west), parseNumber GVAR(budget)];
    GVAR(savedObjects) = profileNamespace getVariable [VAR_SAVE_KEY(savedObjects), createHashmap];

    call FUNC(loadSavedObjects);

    ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;
    ["acex_fortify_objectDeleted", LINKFUNC(objectDeleted)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;