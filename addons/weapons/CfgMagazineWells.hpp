class CfgMagazineWells {
    class CLASS(MagWell_1Rnd_UGL_Smokes) {
        BI_Magazines[] = {
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
    };
    class CLASS(MagWell_3Rnd_UGL_Smokes) {
        BI_Magazines[] = {
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell"
        };
    };

    class CLASS(MagWell_1Rnd_UGL_Flares) {
        BI_Magazines[] = {
            "1Rnd_UGL_FlareWhite_F",
            "1Rnd_UGL_FlareRed_F"
        };
        KC_Magazines[] = {
            QCLASS(Mag_UGL_FlareBlue)
        };
    };
    class CLASS(MagWell_3Rnd_UGL_Flares) {
        BI_Magazines[] = {
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareRed_F"
        };
        KC_Magazines[] = {
            QCLASS(Mag_UGL_3Rnd_FlareBlue)
        };
    };

    class CLASS(MagWell_UGL_Common) {
        BI_Magazines[] = {
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareCIR_F",

            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell",

            "3Rnd_HE_Grenade_shell"
        };
        KC_Magazines[] = {
            QCLASS(Mag_UGL_3Rnd_FlareBlue)
        };
        ACE_Magazines[] = {
            "ACE_HuntIR_M203"
        };
    };
};