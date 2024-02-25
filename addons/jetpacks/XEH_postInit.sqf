#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["BNA_KC_Jet_JetpackFired", {_this call BNAKC_Jetpacks_fnc_effectHandler}] call CBA_fnc_addEventHandler;
    ["BNA_KC_Jet_FuelChanged", {_this call BNAKC_Jetpacks_fnc_jetDialogUpdateFuelLevel}] call CBA_fnc_addEventHandler;
    ["BNA_KC_Jet_showHideDisplay", {_this call BNAKC_Jetpacks_fnc_jetDialogShowHide}] call CBA_fnc_addEventHandler;
    call BNAKC_Jetpacks_fnc_jetDialogShowHideCreateHandlers;
}] call CBA_fnc_addEventHandler;