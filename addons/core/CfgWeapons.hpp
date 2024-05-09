class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class CLASS(helmet_base): H_HelmetO_ViperSP_hex_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        picture = QPATHTOF(data\ui\logo_kc_ca.paa);
    };

    class V_PlateCarrier1_rgr;
    class CLASS(vest_base): V_PlateCarrier1_rgr {
        SCOPE_PRIVATE;
        author = AUTHOR;

        picture = QPATHTOF(data\ui\logo_kc_ca.paa);
    };

    class NVGoggles;
    class CLASS(nvg_base): NVGoggles {
        SCOPE_PRIVATE;
        author = AUTHOR;

        thermalMode[] = {WHOT};
        modelOptics = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));

        picture = QPATHTOF(data\ui\logo_kc_ca.paa);
    };

    class ACE_ItemCore;
    class CLASS(ItemCore): ACE_ItemCore {
        SCOPE_PRIVATE;
        author = AUTHOR;

        picture = QPATHTOF(data\ui\logo_kc_ca.paa);
    };

    class CBA_MiscItem_ItemInfo;
    class CLASS(ItemCore_ItemInfo): CBA_MiscItem_ItemInfo {};
};