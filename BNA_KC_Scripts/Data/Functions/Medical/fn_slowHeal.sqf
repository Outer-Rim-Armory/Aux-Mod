/*
 * Authors: SweMonkey, modified by DartRuffian
 * Slowly heals the given unit by removing wounds from the unit's ace_medical_openWounds array.
 * Also restores blood and lowers pain.
 *
 * Arguments:
 * unit: Object - The unit to heal
 *
 * Return Value:
 * Number - The CBA frame handler ID
 *
 * Example:
 * player call BNAKC_fnc_slowHeal;
 */


#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})
params ["_unit", "_delay"];

[
    {
        _this params ["_unit", "_handlerID"];
        _unit = _unit select 0; // _unit gets passed as [_unit]

        // if (BNA_KC_DevMode) then { systemChat format ["Handler %1 is healing unit %2", _handlerID, _unit]; };

        if !(alive _unit) then
        {
            // If the unit is dead, remove the handle
            [_handlerID] call CBA_fnc_removePerFrameHandler;
        };

        _woundsArray = _unit getVariable ["ace_medical_openWounds", []];
        _painLevel = _unit getVariable ["ace_medical_pain", 0];
        _bloodLevel = _unit getVariable ["ace_medical_bloodVolume", 6.0];

        if !(_woundsArray isEqualTo []) then
        {
            // If there are wounds, remove a random one each iteration
            _randomNum = random count _woundsArray;
            _woundsArray deleteAt _randomNum;
            _unit setVariable["ace_medical_openWounds", _woundsArray, true]; // Apply list of wounds, with one removed
        }
        else
        {
            // Unit has no wounds remaining, move onto pain and fluids
            // Slowly remove pain
            if (_painLevel > 0) then { _painLevel = _painLevel - 0.1; }
            // Prevents pain from reaching negative values
            else  { _painLevel = 0; };

            // Slowly add blood
            if (_bloodLevel < 6.0) then { _bloodLevel = _bloodLevel + 0.25; }
            else { bloodLevel = 6.0; };
            // Prevents blood from getting over 6 Liters

            // Once pain and blood have been increased, set the values
            _unit setVariable ["ace_medical_pain", _painLevel, true];
            _unit setVariable ["ace_medical_bloodVolume", _bloodLevel, true];

            if (_woundsArray isEqualTo [] and (_painLevel == 0) and (_bloodLevel == 6.0)) then
            {
                // If unit has no other remaining wounds, heal all broken limbs and remove handler
                _unit setVariable ["ace_medical_fractures", [0, 0, 0, 0, 0, 0], true];
                // if (BNA_KC_DevMode) then { systemChat format ["Finished healing %1, removing handler %2", _unit, _handlerID]; };
                [_handlerID] call CBA_fnc_removePerFrameHandler;
                BNA_KC_Weap_SlowHealHandles deleteAt (BNA_KC_Weap_SlowHealHandles find _handlerID); // Remove value from list
            };
        };

        // Update values on ACE's back-end
        [_unit] call ace_medical_engine_fnc_updateDamageEffects;
        [_unit] call ace_medical_status_fnc_updateWoundBloodLoss;
    },
    _delay,
    [_unit]
] call CBA_fnc_addPerFrameHandler;