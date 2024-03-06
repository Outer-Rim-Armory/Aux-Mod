#include "..\script_component.hpp"
/*
* Author: DartRuffian
* Displays a player's medical message to the unit they are treating.
*
* Arguments:
* 0: Medic unit <OBJECT>
* 1: Patient unit <OBJECT>
*
* Return Value:
* None
*
* Examples:
* [player, _unit] call FUNC(showMedicalHint);
*
* Public: Yes
*/

params ["_medic", "_patient"];
private ["_message", "_image"];
TRACE_2("fnc_showMedicalHint",_medic,_patient);

// ! Add _medic == _patient check before release
if (GVAR(medicalHint_message) == "" or
    {ace_medical_gui_pendingReopen}
) exitWith {};

_message = format [GVAR(medicalHint_message), [_medic, false, true] call ace_common_fnc_getName];
_message = format ["<t align='center'>%1</t>", _message];
_image = "";

if(_medic call ace_medical_treatment_fnc_isMedic) then {
    _image = QPATHTOEF(core,data\ui\Medic_ca.paa);
};

#ifdef __A3_DEBUG__
    ["ace_common_displayTextPicture", [_message, _image], _medic] call CBA_fnc_targetEvent;
#endif
["ace_common_displayTextPicture", [_message, _image], _patient] call CBA_fnc_targetEvent;
nil;