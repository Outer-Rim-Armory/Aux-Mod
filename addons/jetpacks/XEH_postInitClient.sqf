#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(toggleFuelDisplay), {_this call BNAKC_Jetpacks_fnc_jetDialogShowHide}] call CBA_fnc_addEventHandler;

    ["loadout", {[QGVAR(toggleFuelDisplay)] call CBA_fnc_localEvent;}, true] call CBA_fnc_addPlayerEventHandler;
    ["vehicle", {[QGVAR(toggleFuelDisplay)] call CBA_fnc_localEvent;}] call CBA_fnc_addPlayerEventHandler;
    ["featureCamera", {[QGVAR(toggleFuelDisplay)] call CBA_fnc_localEvent;}] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;