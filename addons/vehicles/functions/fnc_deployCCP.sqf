params
[
    ["_obj", objNull, [objNull]]
];

if (isGamePaused) then {continue};

private _vD = vectorDir _obj;
private _vU = vectorUp _obj;
private _hold = "Land_HelipanEmpty_F" createVehicle position _obj;
_hold setDir (getDir -obj);
_hold setVectorDirAndUp [_vD,_vU];
_obj attachTo [_hold];
[_obj,_hold] spawn
{
    params ["_obj","_hold"];

    private _radius = missionNamespace getVariable "BNA_KC_vehicles_areaHealRadius_M";
    private _rate = missionNamespace getVariable "BNA_KC_vehicles_areaHealRate_M";
    private _healAmount = missionNamespace getVariable "BNA_KC_vehicles_healAmount_M";
    private _fuelDeduction = missionNamespace getVariable "BNA_KC_vehicles_fuelHealConsumption_M";

    waitUntil {
        if (_obj getVariable "BNA_KC_vehicles_DeployCCP" == false || isNull _obj || fuel _obj == 0) exitWith
        {
        _obj setVariable ["BNA_KC_vehicles_DeployCCP",false,true];
        detach _obj;
        deleteVehicle _hold;
        true;
        };

        private _near = nearestObjects [_obj, ["Man"], _radius];
        private _fuel = fuel _obj;

        for "_i" from 0 to count _near -1 do {
            _unit = _near select _1;
            _blood = _unit getVariable "ace_medical_bloodVolume";
            _cardiac = _unit getVariable ["ace_medical_inCardiacArrest", false];
            _pain = _unit getVariable ["ace_medical_pain", 0];
            _t = time + _rate;
            waitUntil {if (isEngineOn _obj) then {_obj engineOn false;};;time > _t};
            if (_blood <6) then {
                if (isNull objectParent player) then {
                    _blood = _blood + _healAmountl
                }
                else {
                    _blood = _blood + (_healAmount / 2);
                };
                _unit setVariable ["ace_medical_bloodVolume",_blood];
            };
            if (_cardiac) then {
                _unit setVariable ["ace_medical_inCardiacArrest",false];
            };
            if (_pain > 0) then {
                if (isNull objectParent player) then {
                    _pain = _pain - _healAmount;
                }
                else {
                    _pain = _pain - (_healAmount / 2);
                };
                _unit setVariable ["ace_medical_pain",_pain];
            };
            _fuel = _fuel - _fuelDeduction;
            _obj setFuel _fuel;
        };
        false;
    };
};