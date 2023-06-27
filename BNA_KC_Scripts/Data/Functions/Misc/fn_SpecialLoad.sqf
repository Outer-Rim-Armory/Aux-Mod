params ["_vehicle", "_distance"];

_compatibleObjects = configProperties
[
    configFile >> "CfgVehicles",
    "isClass _x && (getNumber (configFile >> 'CfgVehicles' >> configName _x >> 'VehicleTransport' >> 'Cargo' >> 'BNA_KC_SpecialLoad') isEqualTo 1);"
] apply {configName _x};

_objects = nearestObjects
[
    _vehicle,
    _compatibleObjects,
    _distance
]; 

if (count _objects >= 1) then
{
    _vehicle setVehicleCargo (_objects select 0)
}
else
{
    systemChat "No vehicle compatible with BNAKC_fnc_SpecialLoad. Try standard load instead?";
};