class CfgVehicles {
    class StaticMGWeapon;
    class 3AS_Republic_FCP: StaticMGWeapon {
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

    class 3AS_CIS_FCP;
    class CLASS(CIS_Command_Post): 3AS_CIS_FCP {
        SCOPE_PUBLIC;
        displayName = "Command Post";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1);
    };
};
