class CfgWeapons {
    class WBK_Morket_CloneAssasinWeaponMain;
    class CLASS(Assasin_Blades): WBK_Morket_CloneAssasinWeaponMain {
        SCOPE_PUBLIC;
        displayName = "[KC] Clone Assasin Blades";
        baseWeapon = QCLASS(Assasin_Blades);
        IMS_Melee_Param_Damage = 0.5;
    };
};
