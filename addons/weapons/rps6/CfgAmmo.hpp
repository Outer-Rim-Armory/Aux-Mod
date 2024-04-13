class CfgAmmo {
    class CLASS(Rocket_Base);
    class CLASS(Rocket_RPS6): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        submunitionAmmo = QCLASS(Rocket_RPS6_Submunition);
    };

    class CLASS(Rocket_Submunition_Base);
    class CLASS(Rocket_RPS6_Submunition): CLASS(Rocket_Submunition_Base) {
        SCOPE_PUBLIC;
    };
};