class CfgAmmo {
    class CLASS(Rocket_Base);
    class CLASS(Rocket_RPS7): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        submunitionAmmo = QCLASS(Rocket_RPS7_Submunition);
    };

    class CLASS(Rocket_Submunition_Base);
    class CLASS(Rocket_RPS7_Submunition): CLASS(Rocket_Submunition_Base) {
        SCOPE_PUBLIC;
    };
};