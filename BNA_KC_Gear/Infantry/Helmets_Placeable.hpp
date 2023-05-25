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

class ls_blueforHeadgear_base;

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