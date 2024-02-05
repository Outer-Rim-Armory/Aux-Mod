class CfgVehicles
{
    class DOUBLES(Ground,CLASS(Holder_Base));
    GROUND_HOLDER(Helmet_Phase1_HowzerBlue,"INF P1 Helm ('Howzer') [Blue]");
    GROUND_HOLDER(Helmet_Phase1_HowzerBrown,"INF P1 Helm ('Howzer') [Brown]");
    GROUND_HOLDER(Helmet_Phase1_91st_Ponds,"INF P1 Helm ('Ponds')");
    GROUND_HOLDER(Helmet_Phase2_Fil,"INF P2 Helm ('Fil')");
    GROUND_HOLDER(Helmet_Phase2_FilSquad,"INF P2 Helm ('Fil's Squad')");
    GROUND_HOLDER(Helmet_Phase2_HowzerBlue,"INF P2 Helm ('Howzer') [Blue]");
    GROUND_HOLDER(Helmet_Phase2_HowzerBrown,"INF P2 Helm ('Howzer') [Brown]");
    GROUND_HOLDER(Helmet_Phase2_91st_Ponds,"INF P2 Helm ('Ponds')");
    GROUND_HOLDER(Helmet_Phase2_91st_Stone,"INF P2 Helm ('Stone')");
    GROUND_HOLDER(Helmet_Phase2_187th,"INF P2 Helm (187th Trooper)");

    class CLASS(Unit_Phase2_Base);
    class CLASS(Unit_Fil): CLASS(Unit_Phase2_Base)
    {
        SCOPE_PUBLIC;
        uniformClass = QCLASS(Uniform_Fil);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };

    class CLASS(Unit_FilSquad): CLASS(Unit_Phase2_Base)
    {
        SCOPE_HIDDEN;
        uniformClass = QCLASS(Uniform_FilSquad);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };

    class CLASS(Unit_Phase2_HowzerBlue): CLASS(Unit_Phase2_Base)
    {
        displayName = "Howzer (Blue)";
        uniformClass = QCLASS(Uniform_HowzerBlue);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        editorSubcategory = QCLASS(EdSubCat_Customs);
        editorPreview = EDITOR_PREVIEW(Unit_Phase2_HowzerBlue);

        linkedItems[] =
        {
            QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    class CLASS(Unit_Phase2_HowzerBrown): CLASS(Unit_Phase2_HowzerBlue)
    {
        displayName = "Howzer (Brown)";
        uniformClass = QCLASS(Uniform_HowzerBrown);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        editorPreview = EDITOR_PREVIEW(Unit_Phase2_HowzerBrown);

        linkedItems[] =
        {
            QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };

    class CLASS(Unit_91st_Ponds): CLASS(Unit_Phase2_Base)
    {
        SCOPE_HIDDEN;
        uniformClass = QCLASS(Uniform_Ponds);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };

    class CLASS(Unit_91st_Stone): CLASS(Unit_Phase2_Base)
    {
        SCOPE_HIDDEN;
        uniformClass = QCLASS(Uniform_Stone);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };

    class CLASS(Unit_187th_Trooper): CLASS(Unit_Phase2_Base)
    {
        SCOPE_HIDDEN;
        uniformClass = QCLASS(Uniform_187th);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_upper_co.paa),
            QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_lower_co.paa),
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };
};