params ["_object"];
_p = _object selectionNames "Memory";

{
	_action =
	[
		_x,
		_x,
		"",
		{systemChat "1";},
		{true},
		{},
		[],
		_x,
		10
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _p;