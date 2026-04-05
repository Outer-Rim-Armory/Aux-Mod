class CfgWeapons {
    class LFP_Lightsaber_Lin_g;
    class WBK_lightsaber2_jedi;
    class CLASS(Lightsaber_Woods): LFP_Lightsaber_Lin_g {
        SCOPE_PUBLIC;
        displayName = "[KC] Lightsaber (Woods)";
        baseWeapon = QCLASS(Lightsaber_Woods);
        IMS_Melee_Param_Damage = 1;
    };
    class CLASS(Lightsaber_Karma): WBK_lightsaber2_jedi {
        displayName = "[KC] Lightsaber (Karma)";
        baseWeapon = QCLASS(Lightsaber_Karma);
        IMS_Melee_Param_Damage = 1;
    };
};
