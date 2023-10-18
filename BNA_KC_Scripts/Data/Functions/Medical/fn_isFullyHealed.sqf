/*
 * Author: DartRuffian
 * Checks if a given unit is fully healed.
 * I.e. Heartrate is 80, no missing blood, not in pain, no open wounds, etc.
 *
 * Arguments:
 * unit: Object - The unit to check the vitals of.
 *
 * Return Value:
 * Boolean - Whether the unit is stable or not.
 *
 * Examples:
 * player call BNAKC_fnc_isFullyHealed; // Returns true
 */


params [["_unit", objNull, [objNull]]];

if (isNull _unit) exitWith {false};
if !(typeOf _unit isKindOf "CAManbase") exitWith {false};
if !(alive _unit) exitWith { false }; // If not alive

// if !(_unit getVariable ["ace_medical_bandagedWounds", []] isEqualTo []) exitWith { false }; // If has any bandaged wounds
if !(_unit getVariable ["ace_medical_openWounds", []] isEqualTo []) exitWith { false }; // If has any open wounds

if ((_unit getVariable ["ace_medical_bloodVolume", 6]) < 6) exitWith { false }; // Less than full blood
if (_unit getVariable ["ace_medical_inCardiacArrest", false]) exitWith { false }; // Not in cardiac arrest

if (_unit getVariable ["ace_medical_pain", 0] > 0) exitWith { false };

private _cardiacOutput = [_unit] call ace_medical_status_fnc_getCardiacOutput;
private _bloodLoss = ([_unit] call ace_medical_status_fnc_getBloodLoss);
if (_bloodLoss > (ace_medical_const_bloodLossKnockOutThreshold * _cardiacOutput) / 2) exitWith { false }; // Enough blood for heart

private _bloodPressure = ([_unit] call ace_medical_status_fnc_getBloodPressure); // Good blood pressure
_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];
if (_bloodPressureL < 60 || {_bloodPressureH < 120}) exitWith { false };

private _heartRate = (_unit getVariable ["ace_medical_heartRate", 80]); // Good heartrate
if (_heartRate < 80) exitWith { false };

true