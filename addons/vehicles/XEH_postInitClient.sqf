#include "script_component.hpp"

[QGVAR(autoEject), {
    params ["_unit"];
    if (_unit isNotEqualTo ace_player) exitWith {};
    INFO_1("Ejecting player from vehicle",_unit);

    if (GVAR(autoEject_invincibleTimer) > 0) then {
        _unit allowDamage false;
        [{_this allowDamage true;}, _unit, GVAR(autoEject_invincibleTimer)] call CBA_fnc_waitAndExecute;
    };

    if (alive _unit and {(_unit getVariable ["ace_isUnconscious", false])}) then {
        "You have been ejected." call ace_common_fnc_displayTextStructured;
        moveOut _unit;
    };
}] call CBA_fnc_addEventHandler;