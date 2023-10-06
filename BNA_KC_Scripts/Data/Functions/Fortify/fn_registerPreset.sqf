/*
 * Author: DartRuffian
 * Registers the selected preset and budget to the west (blufor) side.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_registerPreset;
 */


if !(BNA_KC_FortifyPreset isEqualTo "Disabled") then
{
    [
        west,
        parseNumber BNA_KC_FortifyBudget,
        getArray (configfile >> "ACEX_Fortify_Presets" >> BNA_KC_FortifyPreset >> "objects")
    ] call acex_fortify_fnc_registerObjects;
}
else
{
    [west, 0, []] call acex_fortify_fnc_registerObjects;
};