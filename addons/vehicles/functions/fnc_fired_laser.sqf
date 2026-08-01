#include "..\script_component.hpp"
/*
    Author: HorribleGoat
    Author: Turmio
    Author: Battlestad

	edited by dogo to work with KC balls

    Description:
    Searches for start point and end point from object and calculates crosshair to screen based on direction vector. Also returns the distance to the crosshair position from weapon end position.

    Parameter(s):
        0 (Mandatory):
            OBJECT - Data object
        1 (Mandatory):
            STRING - Weapon start point name
        2 (Mandatory):
            STRING - Weapon end point name
        3 (Mandatory):
            STRING - Path to crosshair img


    Returns:
    NUMBER - Distance to target
*/

// should only be executed on server, but will need proper testing in a MP environment
if (isServer) then {

	params ["_v","_w"];
	private [
		"_selectionLod",
		"_weaponStartPos",
		"_weaponEndPos",
		"_weaponWorldStart",
		"_weaponWorldEnd",
		"_weaponDir",
		"_maxDistance",
		"_crosshairPos",
		"_intersection"
	];
	private [
		"_laser_chamber",
		"_laser_muzzle",
		"_laser_anim"
	];

	_v = _this select 0;
	_w = _this select 1;

	//hintsilent str _w;

	// replace weapons classnames with whatever your left and right lasers will be named
	if (_w == QCLASS(Laser_LAAT_Ball) || _w == QCLASS(Laser_LAAT_Ball_R)) then { // changed ParticleCannon class names to KC Varients - Dogo

		if (_w == QCLASS(Laser_LAAT_Ball)) then {  // changed ParticleCannon class names to KC Varients - Dogo
			_laser_chamber = "Laser_L_chamber";
			_laser_muzzle = "Laser_L_muzzle";
			_laser_anim = "Laser_L"; // would be cleaner if you renamed this to "Laser_Left" or something
		} else {
			if (_w == QCLASS(Laser_LAAT_Ball_R)) then { // replace this with the new "Laser_weapon_right" weapon classname || changed ParticleCannon class names to KC Varients - Dogo
				_laser_chamber = "Lazer_R_chamber";// replace this with new "Laser_R_chamber" that you set up in the memory lod
				_laser_muzzle = "Laser_R_muzzle";// replace this with new "Laser_R_muzzle" that you set up in the memory lod
				_laser_anim = "Laser_R";// replace this with a new animationSource (Laser_Right or something)
			};
		};

		if (_v animationphase _laser_anim == 0) then {
		_selectionLod= "memory";
		_weaponStartPos = _v selectionPosition [_laser_chamber ,_selectionLod];
		_weaponEndPos = _v selectionPosition [_laser_muzzle ,_selectionLod];

		_weaponWorldStart = _v modelToWorld _weaponStartPos;
		_weaponWorldEnd = _v modelToWorld _weaponEndPos;
		_weaponDir = _weaponWorldStart vectorFromTo _weaponWorldEnd;

		_maxDistance = 2000;
		_crosshairPos = [(_weaponWorldStart select 0 )+ ((_weaponDir select 0)*_maxDistance ),(_weaponWorldStart select 1 ) + ((_weaponDir select 1)*_maxDistance ),(_weaponWorldStart select 2)+ ((_weaponDir select 2)*_maxDistance )];

		_intersection = lineIntersectsSurfaces
		[
				AGLToASL _weaponWorldEnd,
				AGLToASL _crosshairPos,
				vehicle player,
				player,
				true,
				1,
				"VIEW",
				"GEOM"
		];
		if (count _intersection > 0) then
		{
			_crosshairPos = ASLToAGL (_intersection select 0 select 0);
		};

		_distanceToTarget = _weaponWorldEnd vectorDistance _crosshairPos;
		//hintSilent str _distanceToTarget;

			_v animateSource [_laser_anim, _distanceToTarget, true];
			sleep 0.08;
			_v animateSource [_laser_anim, 0, true];
		};
	};
};
