#include "script_component.hpp"

["CBA_settingsInitialized", {
    if (GVAR(versionCheckEnabled)) then {
        [{
            !isNull findDisplay 46 && {!isNil QGVARMAIN(serverVersion)};
        }, {
            GVARMAIN(clientVersion) = QUOTE(VERSION_STR);
            if (GVARMAIN(clientVersion) =!= GVARMAIN(serverVersion)) then {
                WARNING_2("Client/Server version mismatch. Client: %1 Server: %2",GVARMAIN(clientVersion),GVARMAIN(serverVersion));
                private _title = format ["[%1] ERROR - Client: %2  Server: %3", QUOTE(PREFIX), GVARMAIN(clientVersion), GVARMAIN(serverVersion)];
                private _message = "You have a different version of the KC Aux loaded compared to the server. Either you or the server could be missing important fixes, try repairing the KC Aux through the Arma launcher to download the latest updates.<br/><br/>Press OK to continue or CANCEL to exit.";
                [_title, _message, {}, {
                    (ctrlParent (_this select 0)) closeDisplay 2;
                    // Close curator and mission displays (because of the message display, it doesn't quit the mission yet)
                    findDisplay 312 closeDisplay 0;
                    findDisplay 46 closeDisplay 0;

                    true;
                }] call FUNC(errorMessage);
            };
        }] call CBA_fnc_waitUntilAndExecute;
    };

    [QGVAR(localSound), LINKFUNC(playLocalSound)] call CBA_fnc_addEventHandler;
    ["featureCamera", LINKFUNC(onArsenalOpen)] call CBA_fnc_addPlayerEventHandler;
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
