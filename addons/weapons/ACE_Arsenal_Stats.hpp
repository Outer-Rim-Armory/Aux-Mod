class ACE_Arsenal_Stats {
    class GVAR(empRadius) {
        scope = 2;
        displayName = "EMP Radius";
        priority = 0;
        stats[] = {QGVAR(empRadiusDroid), QGVAR(empRadiusDroideka), QGVAR(empRadiusVehicle)};
        showBar = FALSE;
        showText = TRUE;
        textStatement = QUOTE(call FUNC(statTextStatement_empRadius));
        condition = QUOTE(call FUNC(statCondition_isEmp));
        tabs[] = {{}, {ARSENAL_TAB_GRENADES}};
    };

    class GVAR(bactaDuration): GVAR(empRadius) {
        displayName = "Healing Duration";
        stats[] = {QGVAR(bactaDuration)};
        textStatement = QUOTE(format [ARR_2('%1s',getNumber (_this#1 >> QQGVAR(bactaDuration)))]);
        condition = QUOTE(call FUNC(statCondition_isBacta));
    };
};
