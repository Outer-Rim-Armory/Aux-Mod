_target = cursorTarget;

if((!isNull _target) && {alive _target} && {_target distance player < 3} && {_target isKindOf 'Landvehicle' || _target isKindOf 'Air' || _target isKindOf 'Ship'})then {
	_target setVectorUp [0, 0, 1];
	['Flipped vehicle!',0,0.7,2,0] spawn bis_fnc_dynamictext;
};
