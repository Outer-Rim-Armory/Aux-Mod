class CfgVehicles {
    class 3as_ParticleCannon;
    class CLASS(ParticleCannon_Base): 3as_ParticleCannon {
        SCOPE_HIDDEN;
        displayName = "Particle Cannon (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);
    };
};
