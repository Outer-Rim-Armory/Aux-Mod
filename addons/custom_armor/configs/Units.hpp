class CLASS(Unit_Phase2_Base);
class CLASS(Unit_Axel): CLASS(Unit_Phase2_Base)
{
    displayName = "Axel";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Axel);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Axel_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Axel_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Axel), QCLASS(Vest_CSM), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Axel), QCLASS(Vest_CSM), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Burnt): CLASS(Unit_Phase2_Base)
{
    displayName = "Burnt";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Burnt);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Burnt_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Burnt), QCLASS(Vest_MedicPlatoon), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Burnt), QCLASS(Vest_MedicPlatoon), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Defter): CLASS(Unit_Phase2_Base)
{
    displayName = "Defter";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Defter);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Defter_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Defter_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase1_Defter), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase1_Defter), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};


class CLASS(Unit_Dexus): CLASS(Unit_Phase2_Base)
{
    displayName = "Dexus";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Dexus);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Dexus_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Drake): CLASS(Unit_Phase2_Base)
{
    displayName = "Drake";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Drake);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Drake_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Drake_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Joe): CLASS(Unit_Phase2_Base)
{
    displayName = "Joe";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Joe);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Joe_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        // TODO: Re-add Joe's "Rex" helmet
        QCLASS(Helmet_Phase2_Joe), QCLASS(Vest_Officer), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Joe), QCLASS(Vest_Officer), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Keeli): CLASS(Unit_Phase2_Base)
{
    displayName = "Keeli";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Keeli);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
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

class CLASS(Unit_Rat): CLASS(Unit_Phase2_Base)
{
    displayName = "Rat";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Rat);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Rat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rat_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Sin): CLASS(Unit_Phase2_Base)
{
    displayName = "Sin";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Sin);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Sin_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sin_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_ARC_Sin), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_ARC_Sin), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Tyrant): CLASS(Unit_Phase2_Base)
{
    displayName = "Tyrant";

    editorSubcategory = EDSUBCAT(Customs);

    uniformClass = QCLASS(Uniform_Tyrant);
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\standard\Tyrant_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tyrant_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(Vest_ARC), QCLASS(NVG_phase2_Rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
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