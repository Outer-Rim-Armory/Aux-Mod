class CLASS(Unit_Phase2_Base);
class CLASS(Unit_Axel): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Axel);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Axel_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Axel_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Burnt): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Burnt);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Burnt_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Defter): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Defter);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Defter_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Defter_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};


class CLASS(Unit_Dexus): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Dexus);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Dexus_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Drake): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Drake);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Drake_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Drake_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Fil): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Fil);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Fil_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Fil_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_FilSquad): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_FilSquad);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\FilSquad_upper_co.paa),
        QPATHTOF(data\uniforms\standard\FilSquad_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_HowzerBlue): CLASS(Unit_Phase2_Base)
{
    displayName = "Howzer (Blue)";
    uniformClass = QCLASS(Uniform_HowzerBlue);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\HowzerBlue_upper_co.paa),
        QPATHTOF(data\uniforms\standard\HowzerBlue_lower_co.paa),
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
        QPATHTOF(data\uniforms\standard\HowzerBrown_upper_co.paa),
        QPATHTOF(data\uniforms\standard\HowzerBrown_lower_co.paa),
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

class CLASS(Unit_Joe): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Joe);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Joe_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Keeli): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_CamoBrown): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoBrown);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_CamoGrey): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoGrey);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Ponds): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Ponds);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Ponds_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Ponds_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Trooper187): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Trooper187);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Trooper187_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Trooper187_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Rat): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Rat);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Rat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rat_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Sin): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Sin);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Sin_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sin_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Stone): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Stone);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Stone_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Stone_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Tyrant): CLASS(Unit_Phase2_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Tyrant);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Tyrant_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tyrant_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Base);
class CLASS(Unit_Phase2_Insulated_Dexus): CLASS(Unit_Phase2_Insulated_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Dexus);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\insulated\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Dexus_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Joe): CLASS(Unit_Phase2_Insulated_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Joe);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\insulated\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Joe_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Keeli): CLASS(Unit_Phase2_Insulated_Base)
{
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Keeli);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\insulated\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Keeli_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };
};