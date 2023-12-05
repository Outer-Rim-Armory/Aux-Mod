params ["_message"];

_message = format["[%1] %2", _fnc_scriptNameParent, _message];

if (BNA_KC_DevMode) then
{
	systemChat _message;
};
diag_log _message;