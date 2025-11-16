/*
 * Author: DartRuffian
 * Finds and returns a list of all voiceline tags present in a string.
 *
 * Arguments:
 * 0: The string to check <String>
 *
 * Return Value:
 * Array of nested arrays: Each lowest level array in format:
 *   0: String - match
 *   1: Number - offset of given match relative to haystack beginning (the provided offset is ignored)
 *
 * Example:
 * "[vl-NeedMedic] test message [vl-NeedAmmo]" call CWR_fnc_findAllVoicelineTags;
 * // Returns [[["[vl-NeedMedic]", 0]], [["[vl-NeedAmmo]", 10]]]
 */

params ["_message"];

private _tags = _message regexFind ["\[vl-[A-z]+\]/g"]; // /g sets global flag, returns all matches
_tags;
