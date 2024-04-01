class CfgAmmo {
    class CLASS(Bullet_PlasmaSniperAP_Blue);
    class CLASS(Bullet_PlasmaDC20Y): CLASS(Bullet_PlasmaSniperAP_Blue) {
        tracerScale = 1;
    };

    class CLASS(Bullet_PlasmaDC20Y_AP): CLASS(Bullet_PlasmaSniperAP_Blue) {
        hit = 300;
        caliber = 30;
    };

    class CLASS(Bullet_PlasmaSniper_Blue);
    class CLASS(Bullet_PlasmaDC20Y_HE): CLASS(Bullet_PlasmaSniper_Blue) {
        explosive = 0.5;
    };
};