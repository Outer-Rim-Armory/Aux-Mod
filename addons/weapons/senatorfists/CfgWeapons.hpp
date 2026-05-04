class CfgWeapons {
    class WBK_BrassKnuckles;
    class CLASS(Armstrong): WBK_BrassKnuckles {
        SCOPE_PUBLIC;
        author = AUTHOR;
        displayName = "[KC] Senator Armstrong Fists";
        baseWeapon = QCLASS(Armstrong);
        IMS_Melee_Param_Damage = 0.5;
        IMS_WeaponType = "BrassKnuckless";
        model = "";
        IMS_WeaponEventHandler_Special = QUOTE([ARR_3(player,cursorTarget,10000)] call FUNC(armstrongKick));
    };
};
