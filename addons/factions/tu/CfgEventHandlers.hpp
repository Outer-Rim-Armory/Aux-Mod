class Extended_Init_EventHandlers
{
    class CLASS(TU_Unit_Melee)
    {
        class GVAR(Melee_Init)
        {
            init = QUOTE(_unit = _this select 0; if (local _unit and ADDON_LOADED(WBK_MeleeMechanics)) then {[_unit] execVM 'WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf';}; _unit setVariable ['IMS_CustomHealthDamage', 20, true];);
        };
    };
};