class ACE_Arsenal_Stats {
    class GVAR(strength) {
        scope = 2;
        displayName = "Jetpack Strength";
        priority = 0;
        stats[] = {QGVAR(strength)};
        showBar = TRUE;
        showText = TRUE;
        barStatement = QUOTE(getNumber (_this#1 >> QQGVAR(strength)) / JETPACK_STRENGTH_DEFAULT);
        textStatement = QUOTE(getNumber (_this#1 >> QQGVAR(strength)));
        condition = QUOTE(getNumber (_this#1 >> QQGVAR(isJetpack)) >= 1);
        tabs[] = {{ARSENAL_TAB_BACKPACKS}, {}};
    };

    class GVAR(speed): GVAR(strength) {
        displayName = "Jetpack Speed";
        stats[] = {QGVAR(speed)};
        barStatement = QUOTE(getNumber (_this#1 >> QQGVAR(speed)) / JETPACK_SPEED_DEFAULT);
        textStatement = QUOTE(getNumber (_this#1 >> QQGVAR(speed)));
    };

    class GVAR(fuel): GVAR(strength) {
        displayName = "Jetpack Fuel Capacity";
        stats[] = {QGVAR(fuel)};
        barStatement = QUOTE(getNumber (_this#1 >> QQGVAR(fuel)) / JETPACK_FUEL_DEFAULT);
        textStatement = QUOTE(getNumber (_this#1 >> QQGVAR(fuel)));
    };
};
