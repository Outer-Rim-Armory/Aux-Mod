// ┌───────────────────┐
// │       Units       │
// └───────────────────┘
class BNA_KC_Unit_Phase2_Base;
class BNA_KC_Unit_Axel: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Axel.jpg";

    displayName = "Axel";
    uniformClass = "BNA_KC_Uniform_Axel";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Axel_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Axel_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Axel", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Axel", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Burnt: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Burnt.jpg";

    displayName = "Burnt";
    uniformClass = "BNA_KC_Uniform_Burnt";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Burnt_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Burnt_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Burnt", "BNA_KC_Vest_Medic_Platoon", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Burnt", "BNA_KC_Vest_Medic_Platoon", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Dexus: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Dexus.jpg";

    displayName = "Dexus";
    uniformClass = "BNA_KC_Uniform_Dexus";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Dexus_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Dexus_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Dexus", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Dexus", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Drake: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Drake.jpg";

    displayName = "Drake";
    uniformClass = "BNA_KC_Uniform_Drake";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Drake_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Drake_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Fil: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Fil.jpg";

    displayName = "Fil";
    uniformClass = "BNA_KC_Uniform_Fil";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Fil_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Fil_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Fil", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Fil", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_FilSquad: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\FilSquad.jpg";

    displayName = "Fil's Squad Member";
    uniformClass = "BNA_KC_Uniform_FilSquad";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_FilSquad_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_FilSquad_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_FilSquad", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_FilSquad", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Joe: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Joe.jpg";

    displayName = "Joe";
    uniformClass = "BNA_KC_Uniform_Joe";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Joe_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Joe_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Keeli: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli.jpg";

    displayName = "Keeli";
    uniformClass = "BNA_KC_Uniform_Keeli";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Keeli_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Keeli_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};
class BNA_KC_Unit_Keeli_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    // Scope
    scope = 1;
    scopeCurator = 0;

    uniformClass = "BNA_KC_Uniform_Keeli_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Camo\Brown\Uniform_Keeli_CamoBrown_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Camo\Brown\Uniform_Keeli_CamoBrown_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Keeli_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    // Scope
    scope = 1;
    scopeCurator = 0;

    uniformClass = "BNA_KC_Uniform_Keeli_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Camo\Grey\Uniform_Keeli_CamoGrey_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Camo\Grey\Uniform_Keeli_CamoGrey_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Ponds: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Ponds.jpg";

    displayName = "Ponds";
    uniformClass = "BNA_KC_Uniform_Ponds";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Ponds_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Ponds_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Ponds", "BNA_KC_Vest_Officer_Ponds", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Ponds", "BNA_KC_Vest_Officer_Ponds", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_PondsTrooper: BNA_KC_Unit_Ponds
{
    displayName = "Ponds Trooper";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\PondsTrooper.jpg";
    uniformClass = "BNA_KC_Uniform_PondsTrooper";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Ponds187th_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Ponds187th_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_PondsTrooper", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_PondsTrooper", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Rat: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Rat.jpg";

    displayName = "Rat";
    uniformClass = "BNA_KC_Uniform_Rat";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Rat_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Rat_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_BARC_Rat", "BNA_KC_Vest_Officer_Rat", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_BARC_Rat", "BNA_KC_Vest_Officer_Rat", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Sin: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Sin.jpg";

    displayName = "Sin";
    uniformClass = "BNA_KC_Uniform_Sin";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Sin_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Sin_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_ARF_Sin", "BNA_KC_Vest_CSFC", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARF_Sin", "BNA_KC_Vest_CSFC", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Stone: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Stone.jpg";

    displayName = "Stone";
    uniformClass = "BNA_KC_Uniform_Stone";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Stone_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Stone_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Stone", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Stone", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Tyrant: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Tyrant.jpg";

    displayName = "Tyrant";
    uniformClass = "BNA_KC_Uniform_Tyrant";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Tyrant_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Uniform_Tyrant_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Tyrant", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Tyrant", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    backpack = "BNA_KC_Backpack_ARC";
};


// ┌───────────────────┐
// │    Snow  Units    │
// └───────────────────┘
class BNA_KC_Unit_Insulated_Trooper;

class BNA_KC_Unit_Insulated_Dexus: BNA_KC_Unit_Insulated_Trooper
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Dexus_Insulated.jpg";

    displayName = "Dexus (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Dexus";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Dexus_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Dexus_Lower.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Dexus", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Dexus", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Insulated_Joe: BNA_KC_Unit_Insulated_Trooper
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Joe_Insulated.jpg";

    displayName = "Joe (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Joe";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Joe_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Joe_Lower.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Joe", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Joe", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Insulated_Keeli: BNA_KC_Unit_Insulated_Trooper
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli_Insulated.jpg";

    displayName = "Keeli (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Keeli";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Keeli_Upper.paa",
        "\BNA_KC_Gear\Customs\Data\Textures\Uniforms\Insulated\Uniform_Insulated_Keeli_Lower.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Keeli", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Keeli", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};