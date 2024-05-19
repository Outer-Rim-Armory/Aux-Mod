class ACE_Arsenal_Stats {
    class statBase;
    class GVAR(strength): statBase {
        scope = 2;
        displayName = "Jetpack Strength";
        stats[] = {QGVAR(strength)};
        showBar = TRUE;
        showText = TRUE;
        barStatement = QUOTE(STAT_BAR_STATEMENT(0,20));
        textStatement = QUOTE(call FUNC(statTextStatement_strength));
        condition = QUOTE(getNumber (_this#1 >> QQGVAR(isJetpack)) >= 1);
        tabs[] = {{ARSENAL_TAB_BACKPACKS}, {}};
    };

    class GVAR(speed): GVAR(strength) {
        displayName = "Jetpack Speed";
        stats[] = {QGVAR(speed)};
        barStatement = QUOTE(STAT_BAR_STATEMENT(1,JETPACK_SPEED_DEFAULT * 1.5));
        textStatement = QUOTE(call FUNC(statTextStatement_speed));
    };

    class GVAR(fuel): GVAR(strength) {
        displayName = "Jetpack Fuel Capacity";
        stats[] = {QGVAR(fuel)};
        barStatement = QUOTE(STAT_BAR_STATEMENT(0,300));
        textStatement = QUOTE(call FUNC(statTextStatement_fuel));
    };
};
