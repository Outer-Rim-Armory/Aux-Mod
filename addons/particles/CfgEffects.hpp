class CLASS(Effect_E60_Fly) {
    class Sparks {
        simulation = "particles";
        type = QCLASS(Cloudlet_E60R_Sparks);
        position[] = {0, 0, 0};
        qualityLevel = 2;
    };
    class Smoke {
        simulation = "particles";
        type = QCLASS(Cloudlet_E60R_Smoke);
        position[] = {0, 0, 0};
        qualityLevel = -1;
    };
    class Light {
        simulation = "light";
        type = QCLASS(Light_E60R);
        position[] = {0, 0, 0};
    };
};

class CLASS(Effect_B2Blaster_rocket_Fly): CLASS(Effect_E60_Fly) {
    class Sparks: Sparks {
        type = QCLASS(Cloudlet_B2Blaster_rocket_Sparks);
    };
    class Smoke: Smoke {
        type = QCLASS(Cloudlet_B2Blaster_rocket_Smoke);
    };
    class Light: Light {
        type = QCLASS(Light_B2Blaster_rocket);
    };
};

class CLASS(Effects_Mortar_SmokeShellBlue) {
    class Smoke {
        type = QCLASS(Cloudlet_Mortar_SmokeShellBlue);
        simulation = "particles";

        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
};
class CLASS(Effects_Mortar_SmokeShellRed): CLASS(Effects_Mortar_SmokeShellBlue) {
    class Smoke: Smoke {
        type = QCLASS(Cloudlet_Mortar_SmokeShellRed);
    };
};
