#include "script_component.hpp"

["CBA_settingsInitialized", {
    [GVAR(preset), parseNumber GVAR(budget), GVAR(sides)] call FUNC(registerPreset);

    if (GVAR(persistenceEnabled)) then {
        GVAR(counter) = profileNamespace getVariable [VAR_SAVE_KEY(counter), 0];
        GVAR(savedObjects) = profileNamespace getVariable [VAR_SAVE_KEY(savedObjects), createHashMap];

        call FUNC(loadSavedObjects);

        {
            private _side = _x;
            private _budgetKey = format [QGVAR(TRIPLES(budget,%1,%2.%3)), _side, missionName, worldName];
            private _currentBudgetSide = missionNamespace getVariable [format ["ace_fortify_budget_%1", _side], 0];

            private _budgetSide = profileNamespace getVariable [_budgetKey, _currentBudgetSide];
            TRACE_3("Loading budget from profile",_side,_budgetSide,_currentBudgetSide);
            missionNamespace setVariable [format ["ace_fortify_budget_%1", _side], _budgetSide, true];
        } forEach [west, east, independent];
    };

    ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;
    ["acex_fortify_objectDeleted", LINKFUNC(objectDeleted)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;