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

class BNA_KC_Unit_Test: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] Test Unit";
    uniformClass = "BNA_KC_Uniform_Test";
	hiddenSelectionsTextures[] =
	{
        "BNA_KC_Gear\Customs\Data\Test Color Upper Armor.paa",
        "BNA_KC_Gear\Customs\Data\Test Color Lower Armor.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" 
    };
};

class BNA_KC_Unit_Dexus: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_Dexus", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Dexus", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_Drake: BNA_KC_Unit_Phase2_Base // Update to 1LT when rank armor is done.
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARC_Drake", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
	backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Fil: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_Fil", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Fil", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_FilSquad: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_FilSquad", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_FilSquad", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_Joe: BNA_KC_Unit_Phase2_Base // BNA_KC_Unit_Phase2_CAP
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Joe", "BNA_KC_Vest_ARC", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
	backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_Keeli: BNA_KC_Unit_Phase2_Base // BNA_KC_Unit_Phase2_CAP
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Keeli", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
};

class BNA_KC_Unit_Ponds: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

	displayName = "[KC] Ponds";
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
        "BNA_KC_Helmet_Phase2_Ponds", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Ponds", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_Stone: BNA_KC_Unit_Phase2_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Phase2_Stone", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Stone", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};


// ┌───────────────────┐
// │    Snow  Units    │
// └───────────────────┘
class BNA_KC_Unit_Insulated_Base;

class BNA_KC_Unit_Insulated_Dexus: BNA_KC_Unit_Insulated_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Insulated_Dexus", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Dexus", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_Insulated_Joe: BNA_KC_Unit_Insulated_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Insulated_Joe", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Joe", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
    };
};

class BNA_KC_Unit_Insulated_Keeli: BNA_KC_Unit_Insulated_Base
{
	// Editor Attributes
	editorSubcategory = "BNA_KC_Customs";

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
        "BNA_KC_Helmet_Insulated_Keeli", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated_Keeli", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud"
    };
};