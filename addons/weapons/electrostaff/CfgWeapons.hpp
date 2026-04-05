class CfgWeapons {
    class LFP_Guard_Shock_Pike;
    class CLASS(ElectroStaff): LFP_Guard_Shock_Pike {
        SCOPE_PUBLIC;
        displayName = "[KC] ElectroStaff";
        baseWeapon = QCLASS(ElectroStaff);
        IMS_Melee_Param_Damage = 0.3;
    };
};
