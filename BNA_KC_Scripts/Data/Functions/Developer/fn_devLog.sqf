params ["_message"];

// _message = format["[%1] %2", scriptName, _message];

systemChat _message;
diag_log _message;