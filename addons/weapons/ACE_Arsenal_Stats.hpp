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
};
