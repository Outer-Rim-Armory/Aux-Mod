class ls_blueforHeadgear_base;

// Macro to create the helmet holder classes for a given helmet
#define HELMET_HOLDER(CLASS_NAME, DISPLAY_NAME, HELM_NAME) \
class CLASS_NAME: BNA_KC_HelmetHolder_P2_CR \
{ \
    displayName = DISPLAY_NAME; \
    class TransportItems \
    { \
        class HELM_NAME \
        { \
            name = HELM_NAME; \
            count = 1; \
        }; \
    }; \
};


// ┌───────────────────┐
// │    P2  Helmets    │
// └───────────────────┘
class BNA_KC_HelmetHolder_P2_CR: ls_blueforHeadgear_base
{
    // Mod Info
    dlc = "BNA_KC";
    author = "SweMonkey and DartRuffian";

    // Scope
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    // Editor Attributes
    editorCategory = "BNA_KC_Props";
    editorSubcategory = "BNA_KC_Props_Helmets";

    displayName = "[KC] INF P2 Helm 00 (Recruit)";
    class TransportItems
    {
        class BNA_KC_Helmet_Phase2_CR
        {
            name = "BNA_KC_Helmet_Phase2_CR";
            count = 1;
        };
    };
};

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CR_Legacy,   [KC] INF P2 Helm 00 (Recruit, Legacy),                BNA_KC_Helmet_Phase2_CR_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT,          [KC] INF P2 Helm 01 (Trooper),                        BNA_KC_Helmet_Phase2_CT)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT_v2,       [KC] INF P2 Helm 01 (Trooper, Version 2),             BNA_KC_Helmet_Phase2_CT_v2)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT_Legacy,   [KC] INF P2 Helm 01 (Trooper, Legacy),                BNA_KC_Helmet_Phase2_CT_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_SCT,         [KC] INF P2 Helm 02 (Senior Trooper),                 BNA_KC_Helmet_Phase2_SCT)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_SCT_Legacy,  [KC] INF P2 Helm 02 (Senior Trooper, Legacy),         BNA_KC_Helmet_Phase2_SCT_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_VCT,         [KC] INF P2 Helm 03 (Veteran Trooper),                BNA_KC_Helmet_Phase2_VCT)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_VCT_Legacy,  [KC] INF P2 Helm 03 (Veteran Trooper, Legacy),        BNA_KC_Helmet_Phase2_VCT_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_LCPL,        [KC] INF P2 Helm 04 (Lance Corporal Trooper),         BNA_KC_Helmet_Phase2_LCPL)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_LCPL_Legacy, [KC] INF P2 Helm 04 (Lance Corporal Trooper, Legacy), BNA_KC_Helmet_Phase2_LCPL_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CPL,         [KC] INF P2 Helm 05 (Corporal Trooper),               BNA_KC_Helmet_Phase2_CPL)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CS,          [KC] INF P2 Helm 06 (Sergeant),                       BNA_KC_Helmet_Phase2_CS)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CS_Legacy,   [KC] INF P2 Helm 06 (Sergeant, Legacy),               BNA_KC_Helmet_Phase2_CS_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSS,         [KC] INF P2 Helm 07 (Staff Sergeant),                 BNA_KC_Helmet_Phase2_CSS)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSS_Legacy,  [KC] INF P2 Helm 07 (Staff Sergeant, Legacy),         BNA_KC_Helmet_Phase2_CSS_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSFC,        [KC] INF P2 Helm 08 (Sergeant First Class),           BNA_KC_Helmet_Phase2_CSFC)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSFC_Legacy, [KC] INF P2 Helm 08 (Sergeant First Class, Legacy),   BNA_KC_Helmet_Phase2_CSFC_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CMS,         [KC] INF P2 Helm 09 (Master Sergeant),                BNA_KC_Helmet_Phase2_CMS)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CMS_Legacy,  [KC] INF P2 Helm 09 (Master Sergeant, Legacy),        BNA_KC_Helmet_Phase2_CMS_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSM,         [KC] INF P2 Helm 10 (Sergeant Major),                 BNA_KC_Helmet_Phase2_CSM)
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSM_Legacy,  [KC] INF P2 Helm 10 (Sergeant Major, Legacy),         BNA_KC_Helmet_Phase2_CSM_Legacy)

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_Officer,     [KC] INF P2 Helm 12+ (Officer),                       BNA_KC_Helmet_Phase2_Officer)


// ┌───────────────────┐
// │    P1  Helmets    │
// └───────────────────┘
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CR,          [KC] INF P1 Helm 00 (Recruit),                        BNA_KC_Helmet_Phase1_CR)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT,          [KC] INF P1 Helm 01 (Trooper),                        BNA_KC_Helmet_Phase1_CT)
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v2,       [KC] INF P1 Helm 01 (Trooper, Version 2),             BNA_KC_Helmet_Phase1_CT_v2)
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v3,       [KC] INF P1 Helm 01 (Trooper, Version 3),             BNA_KC_Helmet_Phase1_CT_v3)
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v4,       [KC] INF P1 Helm 01 (Trooper, Version 4),             BNA_KC_Helmet_Phase1_CT_v4)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_SCT,         [KC] INF P1 Helm 02 (Senior Trooper),                 BNA_KC_Helmet_Phase1_SCT)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_VCT,         [KC] INF P1 Helm 03 (Veteran Trooper),                BNA_KC_Helmet_Phase1_VCT)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_LCPL,        [KC] INF P1 Helm 04 (Lance Corporal Trooper),         BNA_KC_Helmet_Phase1_LCPL)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CPL,         [KC] INF P1 Helm 05 (Corporal Trooper),               BNA_KC_Helmet_Phase1_CPL)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CS,          [KC] INF P1 Helm 06 (Sergeant),                       BNA_KC_Helmet_Phase1_CS)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSS,         [KC] INF P1 Helm 07 (Staff Sergeant),                 BNA_KC_Helmet_Phase1_CSS)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSFC,        [KC] INF P1 Helm 08 (Sergeant First Class),           BNA_KC_Helmet_Phase1_CSFC)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CMS,         [KC] INF P1 Helm 09 (Master Sergeant),                BNA_KC_Helmet_Phase1_CMS)

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSM,         [KC] INF P1 Helm 10 (Sergeant Major),                 BNA_KC_Helmet_Phase1_CSM)