class CfgWeapons {
    class SW_clone_knife;
    class CLASS(Clone_Knife): SW_clone_knife {
        SCOPE_PUBLIC;
        displayName = "[KC] Clone Knife";
        baseWeapon = QCLASS(Clone_Knife);
        IMS_Melee_Param_Damage = 0.25;
    };
};
