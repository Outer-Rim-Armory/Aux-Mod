class CLASS(cloudlet_jetpackFire): CLASS(cloudlet_flare2) {
    moveVelocity[] = {0, -1.5, 0};
    moveVelocityVar[] = {1, 1, 1};
};

class CLASS(cloudlet_jetpackFire_blue): CLASS(cloudlet_jetpackFire) {
    colorCoef[] = {0, 0.1, 0.9, 1};
};

class CLASS(cloudlet_jetpackFire_yellow): CLASS(cloudlet_jetpackFire) {
    colorCoef[] = {1, 0.85, 0, 1};
};

class CLASS(cloudlet_jetpackSparks): CLASS(cloudlet_airFireSparks) {
    colorCoef[] = {1, 1, 1, 1};
    moveVelocity[] = {0, -1.5, 0};
    moveVelocityVar[] = {1, 1, 1};

    size[] = {0.08, 0.08, 0.1, 0.1, 0.1, 0.1, 0.1};
    sizeCoef = 1;
    sizeVar = 1.5;

    volume = 1;
    weight = 1.05;
    interval = 0.01;
    lifeTime = 0.5;
    lifeTimeVar = 1.25;
};

class CLASS(cloudlet_jetpackSparks_blue): CLASS(cloudlet_jetpackSparks) {
    color[] = {
        {0.2, 0.2, 1, -6.5},
        {0.2, 0.2, 1, -6},
        {0.2, 0.2, 1, -5.5},
        {0.2, 0.2, 1, -5}
    };
    colorVar[] = {0, 0.15, 0.15, 0};
};

class CLASS(cloudlet_jetpackSmoke): CLASS(cloudlet_mediumSmoke) {
    color[] = {
        {0.9, 0.9, 0.9, 0.08},
        {0.9, 0.9, 0.9, 0.04},
        {0.9, 0.9, 0.9, 0.01},
        {0.9, 0.9, 0.9, 0.001}
    };
    colorCoef[] = {1, 1, 1, 1};

    moveVelocity[] = {0, -1.5, 0};
    moveVelocityVar[] = {1, 1, 1};
    rubbing = 0.17;

    positionVar[] = {0, 0, 0};
    randomDirectionIntensity = 0.05;
    randomDirectionIntensityVar = 0;
    randomDirectionPeriod = 0.1;
    randomDirectionPeriodVar = 0;
    rotationVelocity = 1;
    rotationVelocityVar = 20;

    angleVar = 0.5;

    animationSpeed[] = {1.2};

    size[] = {0.3, 0.7, 1, 1.2, 1.4, 1.6, 1.8};
    sizeCoef = 1;
    sizeVar = 0;

    volume = 1;
    weight = 1.05;
    interval = 0.02;
    lifeTime = 0.8;
    lifeTimeVar = 0;

    blockAIVisibility = 0;

    particleFSFrameCount = 8;
    particleFSIndex = 12;
};
