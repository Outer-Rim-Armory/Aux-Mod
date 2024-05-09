class CfgWeapons {
    class ACE_ItemCore;
    class CLASS(ItemCore): ACE_ItemCore {
        SCOPE_PRIVATE;
        author = AUTHOR;
    };

    class CBA_MiscItem_ItemInfo;
    class CLASS(ItemCore_ItemInfo): CBA_MiscItem_ItemInfo {};

    class V_PlateCarrier1_rgr;
    class CLASS(vest_base): V_PlateCarrier1_rgr {
        SCOPE_PRIVATE;
        author = AUTHOR;
    };
};