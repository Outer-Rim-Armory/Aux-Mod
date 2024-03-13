class Extended_Init_EventHandlers {
    class CLASS(CIS_Unit_Droid_B1_Saboteur) {
        class EGVAR(jammer,jammerUnit) {
            init = QUOTE(_unit = _this#0; [ARR_2(_unit,100)] call EFUNC(jammer,addJammer));
        };
    };
};