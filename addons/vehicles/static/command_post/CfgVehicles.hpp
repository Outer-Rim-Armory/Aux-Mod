class CfgVehicles {
    class StaticWeapon;
    class StaticMGWeapon: StaticWeapon {
        class Turrets;
    };
    class 3AS_Republic_FCP: StaticMGWeapon {
    class UserActions;
    class Turrets: Turrets {
        class MainTurret;
    };
    };
    class CLASS(REP_Command_Post): 3AS_Republic_FCP {
        SCOPE_PUBLIC;
        displayName = "[KC] Republic Command Post";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(KC);
        crew = QCLASS(Unit_Phase2_CT);

        class UserActions : UserActions {
            VS_ASSAULTSHIELD
            VS_CCP
            VS_CITADELSHIELD
            VS_SQUADSHIELD
            VS_REPAIRMODE
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                canBeTransported = TRUE;
                dimensions[] = {
                    {-2.29093,  5.07768, -1.22499},
                    { 2.78876, -5.07768, -1.22499}
                };
            };
        };
    };

    class 3AS_CIS_FCP: 3AS_Republic_FCP {
        class UserActions;
    };
    class CLASS(CIS_Command_Post): 3AS_CIS_FCP {
        SCOPE_PUBLIC;
        displayName = "Command Post";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1);
        class UserActions : UserActions {
            VS_ASSAULTSHIELD
            VS_CCP
            VS_CITADELSHIELD
            VS_SQUADSHIELD
            VS_REPAIRMODE
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                canBeTransported = TRUE;
                dimensions[] = {
                    {-2.29093,  5.07768, -1.22499},
                    { 2.78876, -5.07768, -1.22499}
                };
            };
        };
    };
};
