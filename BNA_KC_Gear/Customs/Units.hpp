// ┌───────────────────┐
// │       Units       │
// └───────────────────┘
// Base Unit (if no other rank unit applies)
class BNA_KC_Unit_Phase2_Base;
// Rank Units (Officers)
// class BNA_KC_Unit_Phase2_WO;
// class BNA_KC_Unit_Phase2_1LT;
// class BNA_KC_Unit_Phase2_CAP;
// class BNA_KC_Unit_Phase2_MAJ;
// class BNA_KC_Unit_Phase2_CMD;

class BNA_KC_Unit_Burnt: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Burnt.jpg";

	displayName = "[KC] Burnt";
    uniformClass = "BNA_KC_Uniform_Burnt";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Burnt_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Burnt_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Burnt", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Burnt", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Dexus: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Dexus.jpg";

	displayName = "[KC] Dexus";
    uniformClass = "BNA_KC_Uniform_Dexus";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Dexus_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Dexus_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Dexus", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Dexus", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Drake: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Drake.jpg";

	displayName = "[KC] Drake";
    uniformClass = "BNA_KC_Uniform_Drake";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Drake_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Drake_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
	backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Fil: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Fil.jpg";

	displayName = "[KC] Fil";
    uniformClass = "BNA_KC_Uniform_Fil";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Fil_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Fil_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Fil", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Fil", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_FilSquad: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\FilSquad.jpg";

	displayName = "[KC] Fil's Squad Member";
    uniformClass = "BNA_KC_Uniform_FilSquad";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_FilSquad_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_FilSquad_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_FilSquad", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_FilSquad", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Joe: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Joe.jpg";

	displayName = "[KC] Joe";
    uniformClass = "BNA_KC_Uniform_Joe";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Joe_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Joe_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
	backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Keeli: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli.jpg";

	displayName = "[KC] Keeli";
    uniformClass = "BNA_KC_Uniform_Keeli";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Keeli_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Keeli_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
};
class BNA_KC_Unit_Keeli_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli_CamoBrown.jpg";

    displayName = "[KC] Keeli (Brown Camo)";
    uniformClass = "BNA_KC_Uniform_Keeli_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Keeli_CamoBrown_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Keeli_CamoBrown_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli_CamoBrown", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli_CamoBrown", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
};
class BNA_KC_Unit_Keeli_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli_CamoGrey.jpg";

    displayName = "[KC] Keeli (Grey Camo)";
    uniformClass = "BNA_KC_Uniform_Keeli_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Keeli_CamoGrey_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Keeli_CamoGrey_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli_CamoGrey", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli_CamoGrey", "BNA_KC_Vest_Officer_Keeli", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
};

class BNA_KC_Unit_Ponds: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Ponds.jpg";

	displayName = "[KC 187th] Ponds";
    uniformClass = "BNA_KC_Uniform_Ponds";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Ponds_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Ponds_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Ponds", "BNA_KC_Vest_Officer_Ponds", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Ponds", "BNA_KC_Vest_Officer_Ponds", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_PondsTrooper: BNA_KC_Unit_Ponds
{
    displayName = "[KC 187th] Trooper";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\PondsTrooper.jpg";
    uniformClass = "BNA_KC_Uniform_PondsTrooper";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Uniforms\Uniform_Ponds187th_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Uniform_Ponds187th_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_PondsTrooper", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_PondsTrooper", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Rat: BNA_KC_Unit_Phase2_Base
{
    // Editor Attributes
    editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Rat.jpg";

    displayName = "[KC] Rat";
    uniformClass = "BNA_KC_Uniform_Rat";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Rat_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Rat_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // Loadout
    linkedItems[] =
    {
        "BNA_KC_Helmet_BARC_Rat", "BNA_KC_Vest_Officer_Rat", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_BARC_Rat", "BNA_KC_Vest_Officer_Rat", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Sin: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Sin.jpg";

	displayName = "[KC] Sin";
    uniformClass = "BNA_KC_Uniform_Sin";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\Uniform_Sin_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Uniform_Sin_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_ARF_Sin", "k_ls_vest_recon_officer_1", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARF_Sin", "k_ls_vest_recon_officer_1", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Stone: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Stone.jpg";

	displayName = "[KC] Stone";
    uniformClass = "BNA_KC_Uniform_Stone";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Stone_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\BNA_KC_Uniform_Stone_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Stone", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Stone", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
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

	displayName = "[KC] Dexus (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Dexus";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Dexus_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Dexus_Lower.paa",
        "lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Dexus", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Dexus", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Insulated_Joe: BNA_KC_Unit_Insulated_Trooper
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Joe_Insulated.jpg";

	displayName = "[KC] Joe (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Joe";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Joe_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Joe_Lower.paa",
        "lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Joe", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Joe", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Insulated_Keeli: BNA_KC_Unit_Insulated_Trooper
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";
    editorPreview = "\BNA_KC_Gear\Customs\Data\Previews\Keeli_Insulated.jpg";

	displayName = "[KC] Keeli (Snow)";
    uniformClass = "BNA_KC_Uniform_Insulated_Keeli";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Keeli_Upper.paa",
        "BNA_KC_Gear\Customs\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Keeli_Lower.paa",
        "lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

	// Loadout
	linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Keeli", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Keeli", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr", "lsd_gar_p2Interior_hud"
    };
};