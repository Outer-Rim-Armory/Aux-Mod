#include "script_component.hpp"

[{
    !isNull findDisplay 46 and {!isNil QGVARMAIN(serverVersion)};
}, {
    GVARMAIN(clientVersion) = QUOTE(VERSION_STR);
    if (GVARMAIN(clientVersion) isNotEqualTo GVARMAIN(serverVersion)) then {
        WARNING_2("Client/Server version mismatch. Client: %1 Server: %2",GVARMAIN(clientVersion),GVARMAIN(serverVersion));
        private _title = format ["[%1] ERROR - Client: %2  Server: %3", QUOTE(PREFIX), GVARMAIN(clientVersion), GVARMAIN(serverVersion)];
        private _message = "You have a different version of the KC Aux loaded compared to the server. Either you or the server could be missing important fixes, try repairing the KC Aux through the Arma launcher to download the latest updates.";
        [_title, _message, {true}, {false}] call ace_common_fnc_errorMessage;
    };
}] call CBA_fnc_waitUntilAndExecute;

["CBA_settingsInitialized", {
    [QGVAR(localSound), LINKFUNC(playLocalSound)] call CBA_fnc_addEventHandler;
    ["featureCamera", {
        params ["_unit", "_camera"];
        switch (_camera) do {
            case "ace_arsenal": {
                [] call FUNC(onArsenalOpen);
            };
        };
    }] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;

[QGVAR(say3D), {
    params ["_object", "_sound", "_distance"];

    if (ace_player distance _object > _distance) exitWith {};
    _object say3D [_sound, _distance, 1, false];
}] call CBA_fnc_addEventHandler;

[QGVAR(forceSay3D), {
    params ["_object", "_sound", "_distance"];

    if (ace_player distance _object > _distance) exitWith {};

    if (isNull objectParent _object) then {
        // say3D waits for the previous sound to finish, so use a dummy instead
        private _dummy = "#dynamicsound" createVehicleLocal [0, 0, 0];
        _dummy attachTo [_object, [0, 0, 0]];
        _dummy say3D [_sound, _distance];

        [{
            detach _this;
            deleteVehicle _this;
        }, _dummy, 10] call CBA_fnc_waitAndExecute;
    } else {
        // attachTo doesn't work within vehicles
        _object say3D [_sound, _distance];
    };
}] call CBA_fnc_addEventHandler;