params ["_object"];
sleep 0.5;

systemChat(format["%1", _object]);
[_object, [0, 0, 270]] call BIS_fnc_setObjectRotation;