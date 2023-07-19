if isClass (configFile >> "CfgPatches" >> "ace_common") then
{
    // ACE version
    ["ace_firedPlayer",
    {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

        if !(_magazine isKindOf ["HandGrenade", configFile >> "CfgMagazines"]) exitWith {};
        // End early if not a grenade

        private _nearbyUnits = nearestObjects [player, ["Man"], 30];
        [player, "[vl-ThrowGrenade]Grenade out, [bearing]!"] remoteExecCall ["CWR_fnc_SendLocalMessage", (_nearbyUnits)];
    }] call CBA_fnc_addEventHandler;
}
else
{
    player addEventHandler ["Fired",
    {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
        
        if !(_magazine isKindOf ["HandGrenade", configFile >> "CfgMagazines"]) exitWith {};
        // End early if not a grenade

        private _nearbyUnits = nearestObjects [player, ["Man"], 30];
        [player, "[vl-ThrowGrenade]Grenade out, [bearing]!"] remoteExecCall ["CWR_fnc_SendLocalMessage", (_nearbyUnits)];
    }];
};