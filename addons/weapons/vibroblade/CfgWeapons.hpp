class CfgWeapons {
    class DpSword;
    class CLASS(VibroBlade): DpSword {
        SCOPE_PUBLIC;
        displayName = "[KC] Vibrosword";
        baseWeapon = QCLASS(VibroBlade);
        IMS_Melee_Param_Damage = 0.3;
    };
    class WBK_Vibroblade_new;
    class CLASS(VibroBlade_BX): WBK_Vibroblade_new {
        SCOPE_PUBLIC;
        displayName = "[KC] BX Commando Vibrosword";
        baseWeapon = QCLASS(VibroBlade_BX);
        IMS_Melee_Param_Damage = 0.5;
    };
};
