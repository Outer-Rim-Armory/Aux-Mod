#include "..\script_component.hpp"
/*
 * Author: Dogo
 * Fucking yeets a unit with a kick animation
 *
 * Arguments:
 *
 *
 * Return Value:
 * None
 *
 * Examples:
 * QUOTE([_this,cursorTarget,5000] call FUNC(armstrongKick));
 */

params ["_player","_Target","_force"];

if!((_Target distance _player) < 3) exitWith{};
_player switchMove "WBK_FISTS_ATTACK_Leg";
_dir = eyeDirection _player;

_forceDir = _dir vectorMultiply [_force,_force,0];
_forceDir set [2,200];

_sounds = [
	QPATHTOEF(weapons,senatorfists\data\sounds\SenArm_Punch_1.wss),
	QPATHTOEF(weapons,senatorfists\data\sounds\SenArm_Punch_2.wss),
	QPATHTOEF(weapons,senatorfists\data\sounds\SenArm_Punch_3.wss),
	QPATHTOEF(weapons,senatorfists\data\sounds\SenArm_Punch_4.wss)
	];
_rSound = selectRandom _sounds;
playSound3D [_rSound,_player];

_Target addForce [_forceDir, _dir, false];

_player addEventHandler ["AnimDone",
{
	params ["_unit","_anim"];
	_unit removeEventHandler ["AnimDone",_thisEventHandler];
	_unit switchMove "";
	}
];
