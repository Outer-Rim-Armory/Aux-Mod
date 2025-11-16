/*
 * Author: DartRuffian
 * Removes "[vl-" and "]" from the beginning and end of a voiceline tag.
 *
 * Arguments:
 * 0: The string to check <String>
 *
 * Return Value:
 * String: The config name of the tag
 *
 * Example:
 * "[vl-NeedMedic]" call CWR_fnc_getConfigNameFromTag; // Returns "NeedMedic"
 */

params ["_tag"];

private _configName = _tag trim ["[]", 0];  // Remove "[" or "]" from both sides
_configName = _configName trim ["vl-", 1];  // Remove "vl-" from the left side
_configName;
