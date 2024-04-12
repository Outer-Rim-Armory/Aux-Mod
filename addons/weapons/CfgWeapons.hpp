class CfgWeapons {
    class JLTS_stun_muzzle;
    class CLASS(Muzzle_Stun): JLTS_stun_muzzle {
        displayName = "Stun";
        magazines[] = {
            QCLASS(Mag_StunShort),
            QCLASS(Mag_StunLong),
            "Aux12thFleet_Mag_StunShort",
            "Aux12thFleet_Mag_StunLong"
        };
        magazineWell[] = {};
    };

    class CLASS(Muzzle_Stun_Fried): CLASS(Muzzle_Stun) {
        displayName = "Stun (Fried)";
        magazines[] = {};
    };
};