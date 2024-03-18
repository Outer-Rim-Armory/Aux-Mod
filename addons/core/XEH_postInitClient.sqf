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
}] call CBA_fnc_addEventHandler;