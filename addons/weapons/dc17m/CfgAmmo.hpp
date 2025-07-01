class CfgAmmo {
    class CLASS(Bullet_PlasmaRifle_Blue);
    class CLASS(Bullet_PlasmaDC17M_Blaster): CLASS(Bullet_PlasmaRifle_Blue) {
        hit = 23;
        caliber = 2.4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        timeToLive = 6;
        typicalSpeed = 300;
    };

    class CLASS(Bullet_PlasmaSniper_Blue);
    class CLASS(Bullet_PlasmaDC17M_Sniper): CLASS(Bullet_PlasmaSniper_Blue) {
        hit = 95;
        caliber = 3;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        timetolive = 20;
        typicalspeed = 1250;
    };
};
