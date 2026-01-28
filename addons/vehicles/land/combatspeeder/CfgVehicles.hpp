class CfgVehicles {
    class 3AS_Combat_Speeder_F;
    class CLASS(CombatSpeeder_Base): 3AS_Combat_Speeder_F {
        SCOPE_HIDDEN;
        displayName = "Combat Speeder (Base)";
        editorSubcategory = QEDSUBCAT(Cars);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1);

        hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Wheeled\Combat_Speeder\Data\CIS_C_Speeder_Rear_co.paa",
            "3as\3AS_CIS_Wheeled\Combat_Speeder\Data\CIS_C_Speeder_Front_co.paa"
        };
    };
};
