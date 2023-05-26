#include "\BNA_KC_Gear\Macros.hpp"
    // Helmet Holder macro

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
    editorCategory = "BNA_KC_Objects";
    editorSubcategory = "BNA_KC_Objects_Helmets_P2";

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

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CR_Legacy, [KC] INF P2 Helm 00 (Recruit, Legacy), BNA_KC_Helmet_Phase2_CR_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT, [KC] INF P2 Helm 01 (Trooper), BNA_KC_Helmet_Phase2_CT, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT_v2, [KC] INF P2 Helm 01 (Trooper, Version 2), BNA_KC_Helmet_Phase2_CT_v2, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CT_Legacy, [KC] INF P2 Helm 01 (Trooper, Legacy), BNA_KC_Helmet_Phase2_CT_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_SCT, [KC] INF P2 Helm 02 (Senior Trooper), BNA_KC_Helmet_Phase2_SCT, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_SCT_Legacy, [KC] INF P2 Helm 02 (Senior Trooper, Legacy), BNA_KC_Helmet_Phase2_SCT_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_VCT, [KC] INF P2 Helm 03 (Veteran Trooper), BNA_KC_Helmet_Phase2_VCT, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_VCT_Legacy, [KC] INF P2 Helm 03 (Veteran Trooper, Legacy), BNA_KC_Helmet_Phase2_VCT_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_LCPL, [KC] INF P2 Helm 04 (Lance Corporal Trooper), BNA_KC_Helmet_Phase2_LCPL, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_LCPL_Legacy, [KC] INF P2 Helm 04 (Lance Corporal Trooper, Legacy), BNA_KC_Helmet_Phase2_LCPL_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CPL, [KC] INF P2 Helm 05 (Corporal Trooper), BNA_KC_Helmet_Phase2_CPL, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CS, [KC] INF P2 Helm 06 (Sergeant), BNA_KC_Helmet_Phase2_CS, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CS_Legacy, [KC] INF P2 Helm 06 (Sergeant, Legacy), BNA_KC_Helmet_Phase2_CS_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSS, [KC] INF P2 Helm 07 (Staff Sergeant), BNA_KC_Helmet_Phase2_CSS, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSS_Legacy, [KC] INF P2 Helm 07 (Staff Sergeant, Legacy), BNA_KC_Helmet_Phase2_CSS_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSFC, [KC] INF P2 Helm 08 (Sergeant First Class), BNA_KC_Helmet_Phase2_CSFC, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSFC_Legacy, [KC] INF P2 Helm 08 (Sergeant First Class, Legacy), BNA_KC_Helmet_Phase2_CSFC_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CMS, [KC] INF P2 Helm 09 (Master Sergeant), BNA_KC_Helmet_Phase2_CMS, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CMS_Legacy, [KC] INF P2 Helm 09 (Master Sergeant, Legacy), BNA_KC_Helmet_Phase2_CMS_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSM, [KC] INF P2 Helm 10 (Sergeant Major), BNA_KC_Helmet_Phase2_CSM, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_P2_CSM_Legacy, [KC] INF P2 Helm 10 (Sergeant Major, Legacy), BNA_KC_Helmet_Phase2_CSM_Legacy, "P2")

HELMET_HOLDER(BNA_KC_HelmetHolder_P2_Officer, [KC] INF P2 Helm 12+ (Officer), BNA_KC_Helmet_Phase2_Officer, "P2")


// ┌───────────────────┐
// │    P1  Helmets    │
// └───────────────────┘
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CR, [KC] INF P1 Helm 00 (Recruit), BNA_KC_Helmet_Phase1_CR, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT, [KC] INF P1 Helm 01 (Trooper), BNA_KC_Helmet_Phase1_CT, "P1")
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v2, [KC] INF P1 Helm 01 (Trooper, Version 2), BNA_KC_Helmet_Phase1_CT_v2, "P1")
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v3, [KC] INF P1 Helm 01 (Trooper, Version 3), BNA_KC_Helmet_Phase1_CT_v3, "P1")
HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CT_v4, [KC] INF P1 Helm 01 (Trooper, Version 4), BNA_KC_Helmet_Phase1_CT_v4, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_SCT, [KC] INF P1 Helm 02 (Senior Trooper), BNA_KC_Helmet_Phase1_SCT, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_VCT, [KC] INF P1 Helm 03 (Veteran Trooper), BNA_KC_Helmet_Phase1_VCT, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_LCPL, [KC] INF P1 Helm 04 (Lance Corporal Trooper), BNA_KC_Helmet_Phase1_LCPL, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CPL, [KC] INF P1 Helm 05 (Corporal Trooper), BNA_KC_Helmet_Phase1_CPL, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CS, [KC] INF P1 Helm 06 (Sergeant), BNA_KC_Helmet_Phase1_CS, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSS, [KC] INF P1 Helm 07 (Staff Sergeant), BNA_KC_Helmet_Phase1_CSS, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSFC, [KC] INF P1 Helm 08 (Sergeant First Class), BNA_KC_Helmet_Phase1_CSFC, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CMS, [KC] INF P1 Helm 09 (Master Sergeant), BNA_KC_Helmet_Phase1_CMS, "P1")

HELMET_HOLDER(BNA_KC_HelmetHolder_P1_CSM, [KC] INF P1 Helm 10 (Sergeant Major), BNA_KC_Helmet_Phase1_CSM, "P1")


// ┌───────────────────┐
// │    AB  Helmets    │
// └───────────────────┘
HELMET_HOLDER(BNA_KC_HelmetHolder_AB, [KC] AB Helm (Trooper), BNA_KC_Helmet_Airborne_Base, "P2")
HELMET_HOLDER(BNA_KC_HelmetHolder_AB_v2, [KC] AB Helm (Trooper, Version 2), BNA_KC_Helmet_Airborne_v2, "P2")


// ┌───────────────────┐
// │    ENG Helmets    │
// └───────────────────┘
HELMET_HOLDER(BNA_KC_HelmetHolder_ENG, [KC] ENG Helm (Base), BNA_KC_Helmet_Engineer_Base, "P2")


// ┌───────────────────┐
// │   SNOW  Helmets   │
// └───────────────────┘
HELMET_HOLDER(BNA_KC_HelmetHolder_Insulated, [KC] INF Snow Helm (Trooper), BNA_KC_Helmet_Insulated_Base, "Insulated")