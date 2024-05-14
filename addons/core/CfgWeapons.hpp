class CfgWeapons {
    class H_HelmetB;
    class H_HelmetO_ViperSP_hex_F: H_HelmetB {
        class ItemInfo;
    };
    class CLASS(helmet_base): H_HelmetO_ViperSP_hex_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        subItems[] = {};

        picture = QPATHTOF(data\ui\logo_kc_ca.paa);

        class ItemInfo: ItemInfo {
            modelSides[] = {ALL_SIDES};
        };
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

        visionMode[] = {"Normal", "NVG"};
        thermalMode[] = {WHOT};
        modelOptics = QPATHTOF(data\models\empty\CLASS(empty.p3d));

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