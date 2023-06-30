_this spawn
{
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

	switch (_ammo) do
	{
		case "BNA_KC_Grenade_DroidPopper_Ammo":
		{
			_delay = getNumber (configFile >> "CfgAmmo" >> _ammo >> "explosionTime") - 0.1;
			if (BNA_KC_DevMode) then
			{
				systemChat "Droid Popper ammo activated";
				systemChat format ["Waiting %1 seconds", _delay];
			};
			sleep _delay;
			private _position = getPosATL _projectile;
			systemChat str _position;
			if (BNA_KC_DevMode) then
			{
				createVehicle ["VR_3DSelector_01_default_F", _position, [], 0, "CAN_COLLIDE"];
			};

			_droidUnits = nearestObjects [_position, [], 3];

			
			_droidUnits = _droidUnits select { ((toLowerAnsi typeOf _x find "b1") > 0) }; // Filter out non-droid objects
			_shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], 3];	// Droidka Shields
			_tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], 3]; // 3AS's Droidkas require extra work

			// Remove or kill objects
			{ _x setDamage [1, true, _unit]; } forEach _droidUnits; // Kill droid units
			{ deleteVehicle _x; } forEach _shieldObjects;		   // Remove 501st shields
			
			{ _x setHitPointDamage ["HitShield", 1]; } forEach _tasDekas; // Damages the droideka shield
			{ _x animateSource ["ShieldLayer_BaseFront", 1, true]; } forEach _tasDekas; // Animates the shield turning off
		};
	};
};