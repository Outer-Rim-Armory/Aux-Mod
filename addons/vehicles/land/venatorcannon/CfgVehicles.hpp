class CfgVehicles {
    class HMG_01_base_F;
    class HMG_01_A_base_F: HMG_01_base_F {
        class Turrets;
    };
    class 3AS_Venator_Cannon: HMG_01_A_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class CLASS(Venator_Cannon_Base): 3AS_Venator_Cannon {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Turrets);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,VenatorCannon_Base);
        armor = 150;

        displayName = "Venator Cannon (Base)";
        crew = "B_UAV_AI";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Cannon_Venator)};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells),
                    QCLASS(Mag_1000Rnd_Venator_AA_Shells)
                };
            };
        };
    };

    class CLASS(Venator_Cannon): CLASS(Venator_Cannon_Base) {
        SCOPE_PUBLIC;
        displayName = "Venator Cannon";
    };
};
