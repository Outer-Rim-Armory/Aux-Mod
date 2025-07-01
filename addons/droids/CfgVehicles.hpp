class CfgVehicles {
    class CLASS(CIS_Unit_Droid_Base);
    class CLASS(CIS_Unit_Droid_B2): CLASS(CIS_Unit_Droid_Base) {
        GVAR(reviveUnit) = QCLASS(CIS_Unit_Droid_B2_Revived);
        GVAR(reviveChance) = 0.3;
    };

    class CLASS(CIS_Unit_Droid_B2_Revived): CLASS(CIS_Unit_Droid_B2) {
        SCOPE_HIDDEN;
        GVAR(reviveUnit) = "";
        GVAR(reviveChance) = 0;

        armor = 1;
        armorStructural = 1;
        // Textures of original alive unit will be applied
    };

    class CLASS(CIS_Unit_Droid_BX): CLASS(CIS_Unit_Droid_Base) {
        GVAR(reviveUnit) = QCLASS(CIS_Unit_Droid_BX_Revived);
        GVAR(reviveChance) = 0.6;
    };

    class CLASS(CIS_Unit_Droid_BX_Revived): CLASS(CIS_Unit_Droid_BX) {
        SCOPE_HIDDEN;
        GVAR(reviveUnit) = "";
        GVAR(reviveChance) = 0;

        armor = 1;
        armorStructural = 1;
    };
};
