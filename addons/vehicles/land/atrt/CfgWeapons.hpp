class CfgWeapons {
    class 3AS_ATRT_Base;
    class 3AS_ATRT_Uniform: 3AS_ATRT_Base {
        class ItemInfo;
    };
    class CLASS(Uniform_ATRT): 3AS_ATRT_Uniform {
        displayName = "AT-RT Plating";
        JLTS_hasStunProtection = TRUE;
        picture = QPATHTOF(land\atrt\data\ui\ATRT_ca.paa);

        EGVAR(medical,canBleed) = FALSE;

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(ATRT);
        };
    };
};