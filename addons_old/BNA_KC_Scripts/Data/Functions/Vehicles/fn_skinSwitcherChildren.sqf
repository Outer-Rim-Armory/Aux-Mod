/*
 * Author: DartRuffian
 * Creates ace child actions to allow pilots to switch between vehicle skins.
 *
 * Arguments:
 * target: Object - The object the action is assigned to
 * player: Object - ace_player
 * params: Array - Parameters passed to the ace action
 *
 * Return Value:
 * None
 *
 * Examples:
 * insertChildren = "_this call BNAKC_fnc_skinSwitcherChildren";
 */


params ["_target", "_player", "_params"];
private ["_actions", "_textureSources"];
_actions = [];
_textureSources = configProperties
[
    configFile >> "CfgVehicles" >> typeOf _target >> "TextureSources"
] apply { configName _x; };

{
	private ["_childStatement", "_action"];
    _childStatement =
	{
		params ["_target", "_player", "_params"];
		_params params ["_vehicle", "_textureSource"];
		private ["_textures"];

		_textures = getArray (configFile >> "CfgVehicles" >> typeOf _target >> "TextureSources" >> _textureSource >> "textures");
		{
			_vehicle setObjectTextureGlobal [_forEachIndex, _x];
		} forEach _textures;
	};
    _action =
    [
        format ["switchSkin%1", _x],
		"",
		"",
		_childStatement,
		{true},
		{},
		[_target, _x],
		[0, 0, 0],
		0,
		[0, 1, 1, 0, 1],
        {
            params ["_target", "_player", "_params", "_actionData"];
            _params params ["_target", "_textureSource"];
			private ["_textureName"];
			_textureName = getText(configFile >> "CfgVehicles" >> typeOf _target >> "TextureSources" >> _textureSource >> "displayName");

			_actionData set [1, _textureName];
        }
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _textureSources;

_actions;