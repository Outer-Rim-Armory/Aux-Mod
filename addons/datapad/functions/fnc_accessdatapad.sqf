#include "..\script_component.hpp"
params ["_target", "_caller", "_actionId"];


_display = (findDisplay 46) createDisplay "JRYMap";
uiNamespace setVariable ["BNA_KC_Display_Datapad",_display];



_display displayAddEventHandler ["Unload",
{
    params ["_display", "_exitCode"];

    private _unit = missionNamespace getVariable "BNA_KC_player";
    _unit setVariable ["BNA_KC_Datapad_Action",false];
    uiNamespace setVariable ["BNA_KC_Display_Datapad",displayNull];

    if ((currentWeapon _unit) isEqualTo QCLASS(Launcher_Datapad) && {(_unit ammo currentWeapon _unit) > 0}) then
    {
        private _accessDatapad = _unit addAction
        ["Access Data Pad",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                [_target,_caller,_actionId] call FUNC(accessdatapad);
            },nil,1.5,false,true,"","true"
        ];
        _unit setVariable ["BNA_KC_Datapad_ActionID",_accessDatapad];
        _unit setVariable ["BNA_KC_Datapad_Action",true];
    };
}];

_caller removeAction _actionId;
