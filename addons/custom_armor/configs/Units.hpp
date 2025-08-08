class CLASS(Unit_Phase2_Base);
class CLASS(Unit_Axel): CLASS(Unit_Phase2_Base) {
    displayName = "Axel";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Axel);

    uniformClass = QCLASS(Uniform_Axel);
    backpack = QCLASS(Jetpack_JT12_LR);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Axel_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Axel_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_Axel), QCLASS(Vest_ForceRecon_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_Axel), QCLASS(Vest_ForceRecon_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Bailout): CLASS(Unit_Phase2_Base) {
    displayName = "Bailout";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Bailout);

    uniformClass = QCLASS(Uniform_Bailout);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Bailout_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Bailout_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Bailout), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Bailout), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Bean): CLASS(Unit_Phase2_Base) {
    displayName = "Bean";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Bean);

    uniformClass = QCLASS(Uniform_Bean);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Bean_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Bean_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Bean), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Bean), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Bob): CLASS(Unit_Phase2_Base) {
    displayName = "Bob";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Bob);

    uniformClass = QCLASS(Uniform_Bob);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Bob_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Bob_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Engineer_Bob), QCLASS(Vest_Engineer_CT), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Engineer_Bob), QCLASS(Vest_Engineer_CT), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Burnt): CLASS(Unit_Phase2_Base) {
    displayName = "Burnt";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Burnt);

    uniformClass = QCLASS(Uniform_Burnt);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Burnt_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_BARC_Burnt), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_BARC_Burnt), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Burnt_Worn): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Burnt_Worn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\worn\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\worn\Burnt_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};


class CLASS(Unit_Catholic): CLASS(Unit_Phase2_Base) {
    displayName = "Catholic";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Catholic);

    uniformClass = QCLASS(Uniform_Catholic);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Catholic_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Catholic_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_Catholic), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_Catholic), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Cough): CLASS(Unit_Phase2_Base) {
    displayName = "Cough";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Cough);

    uniformClass = QCLASS(Uniform_Cough);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Cough_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Cough_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Cough), QCLASS(Vest_ARC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Cough), QCLASS(Vest_ARC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Cutthroat): CLASS(Unit_Phase2_Base) {
    displayName = "Cutthroat";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Cutthroat);

    uniformClass = QCLASS(Uniform_Cutthroat);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Cutthroat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Cutthroat_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Cutthroat), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Cutthroat), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Defter): CLASS(Unit_Phase2_Base) {
    displayName = "Defter";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Defter);

    uniformClass = QCLASS(Uniform_Defter);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Defter_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Defter_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Defter), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Defter), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};


class CLASS(Unit_Dexus): CLASS(Unit_Phase2_Base) {
    displayName = "Dexus";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Dexus);

    uniformClass = QCLASS(Uniform_Dexus);
    backpack = QCLASS(cloneBackpack_heavy_Dexus);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Dexus_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(cloneVest_heavy_Dexus), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(cloneVest_heavy_Dexus), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Drake): CLASS(Unit_Phase2_Base) {
    displayName = "Drake";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Drake);

    uniformClass = QCLASS(Uniform_Drake);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Drake_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Drake_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };


    linkedItems[] = {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_Kama_Drake), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_Kama_Drake), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
//class CLASS(Unit_Drake_Emp): CLASS(Unit_Phase2_Base) {
//    SCOPE_HIDDEN;
//   uniformClass = QCLASS(Uniform_Drake_Empire);
//    hiddenSelectionsTextures[] = {
//        QPATHTOF(data\uniforms\standard\camo\empire\Drake_upper_co.paa),
//        QPATHTOF(data\uniforms\standard\camo\empire\Drake_lower_co.paa),
//        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
//    };
//};

class CLASS(Unit_Evo): CLASS(Unit_Phase2_Base) {
    displayName = "Evo";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Evo);

    uniformClass = QCLASS(Uniform_Evo);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Evo_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Evo_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Evo), QCLASS(Vest_ARC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Evo), QCLASS(Vest_ARC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Grey): CLASS(Unit_Phase2_Base) {
    displayName = "Grey";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Grey);

    uniformClass = QCLASS(Uniform_Grey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Grey_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Grey_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_P2_Grey), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_P2_Grey), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Hagrid): CLASS(Unit_Phase2_Base) {
    displayName = "Hagrid";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Hagrid);

    uniformClass = QCLASS(Uniform_Hagrid);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Hagrid_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Hagrid_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Hagrid), QCLASS(cloneVest_arc_Hagrid), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Hagrid), QCLASS(cloneVest_arc_Hagrid), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Harry): CLASS(Unit_Phase2_Base) {
    displayName = "Harry";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Harry);

    uniformClass = QCLASS(Uniform_Harry);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Harry_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Harry_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Harry), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Harry), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Henkie): CLASS(Unit_Phase2_Base) {
    displayName = "Henkie";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Henkie);

    uniformClass = QCLASS(Uniform_Henkie);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Henkie_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Henkie_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Henkie), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Henkie), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Jaws): CLASS(Unit_Phase2_Base) {
    displayName = "Jaws";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Jaws);

    uniformClass = QCLASS(Uniform_Jaws);
    backpack = QCLASS(cloneBackpack_radioHeavy_Jaws);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Jaws_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Jaws), QCLASS(Vest_Jaws), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Jaws), QCLASS(Vest_Jaws), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Jaws_CamoBrown): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Jaws_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\brown\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\brown\Jaws_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Joe): CLASS(Unit_Phase2_Base) {
    displayName = "Joe";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Joe);

    uniformClass = QCLASS(Uniform_Joe);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Joe_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase12_Joe), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase12_Joe), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Jester): CLASS(Unit_Phase2_Base) {
    displayName = "Jester";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Jester);

    uniformClass = QCLASS(Uniform_Jester);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Jester_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Jester_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Jester), QCLASS(Vest_CSFC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Jester), QCLASS(Vest_CSFC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Keeli): CLASS(Unit_Phase2_Base) {
    displayName = "Keeli";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Keeli);

    uniformClass = QCLASS(Uniform_Keeli);
    backpack = QCLASS(Backpack_Radio_Mini);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };


        weapons[] = {QCLASS(DC17M), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC17M), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_90Rnd_DC17M)};
        respawnMagazines[] = {QCLASS(Mag_90Rnd_DC17M)};

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(cloneNvg_phase2_officerVisor_Keeli), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(cloneNvg_phase2_officerVisor_Keeli), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Keeli_CamoBrown): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_CamoGrey): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_Worn): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_Worn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\worn\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\worn\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_Emp): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_Empire);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\empire\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\empire\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_Geo): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_Geo);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\KeeliGeo_upper_co.paa),
        QPATHTOF(data\uniforms\standard\KeeliGeo_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Kujo): CLASS(Unit_Phase2_Base) {
    displayName = "Kujo";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Kujo);

    uniformClass = QCLASS(Uniform_Kujo);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Kujo_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Kujo_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Kujo), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Kujo), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Leon): CLASS(Unit_Phase2_Base) {
    displayName = "Leon";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Leon);

    uniformClass = QCLASS(Uniform_Leon);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Leon_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Leon_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_Leon), QCLASS(Vest_Airborne_CT), QCLASS(cloneNvg_chip), CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_Leon), QCLASS(Vest_Airborne_CT), QCLASS(cloneNvg_chip), CLONE_LINKED_ITEMS_RADIO
    };
};


class CLASS(Unit_Rat): CLASS(Unit_Phase2_Base) {
    displayName = "Rat";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Rat);

    uniformClass = QCLASS(Uniform_Rat);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Rat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rat_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Rev): CLASS(Unit_Phase2_Base) {
    displayName = "Rev";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Rev);

    uniformClass = QCLASS(Uniform_Rev);
    backpack = QCLASS(cloneBackpack_heavy_Rev);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Rev_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rev_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Rev), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Rev), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Sin): CLASS(Unit_Phase2_Base) {
    displayName = "Sin";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Sin);

    uniformClass = QCLASS(Uniform_Sin);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Sin_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sin_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Sin), QCLASS(cloneVest_arc_Sin), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Sin), QCLASS(cloneVest_arc_Sin), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Sogi): CLASS(Unit_Phase2_Base) {
    displayName = "Sogi";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Sogi);

    uniformClass = QCLASS(Uniform_Sogi);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Sogi_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sogi_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Sogi), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Sogi), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Splashdown): CLASS(Unit_Phase2_Base) {
    displayName = "Splashdown";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Splashdown);

    uniformClass = QCLASS(Uniform_Splashdown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Splashdown_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Splashdown_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Engineer_Splashdown), QCLASS(Vest_Engineer), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Engineer_Splashdown), QCLASS(Vest_Engineer), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Star): CLASS(Unit_Phase2_Base) {
    displayName = "Star";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Star);

    uniformClass = QCLASS(Uniform_Star);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Star_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Star_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_Star), QCLASS(Vest_Airborne_CS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_Star), QCLASS(Vest_Airborne_CS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Swoop): CLASS(Unit_Phase2_Base) {
    displayName = "Swoop";

    editorSubcategory = QEDSUBCAT(Customs);
    backpack = QCLASS(Backpack_ARC);
    editorPreview = EDITOR_PREVIEW(Unit_Swoop);

    uniformClass = QCLASS(Uniform_Swoop);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Swoop_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Swoop_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Swoop), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Swoop), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Talyn): CLASS(Unit_Phase2_Base) {
    displayName = "Talyn";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Talyn);

    uniformClass = QCLASS(Uniform_Talyn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Talyn_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Talyn_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Talyn), QCLASS(Vest_CSS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Talyn), QCLASS(Vest_CSS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Tugz): CLASS(Unit_Phase2_Base) {
    displayName = "Tugz";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Tugz);

    uniformClass = QCLASS(Uniform_Tugz);
    backpack = QCLASS(Jetpack_JT12_LR);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Tugz_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tugz_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_Tugz), QCLASS(Vest_Airborne_CS), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_Tugz), QCLASS(Vest_Airborne_CS), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Tyrant): CLASS(Unit_Phase2_Base) {
    displayName = "Tyrant";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Tyrant);

    uniformClass = QCLASS(Uniform_Tyrant);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Tyrant_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tyrant_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(cloneVest_arc_Tyrant), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(cloneVest_arc_Tyrant), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Weenie): CLASS(Unit_Phase2_Base) {
    displayName = "Weenie";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Weenie);

    uniformClass = QCLASS(Uniform_Weenie);
    backpack = QCLASS(Backpack_Radio_Mini);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Weenie_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Weenie_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Weenie), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Weenie), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Woods): CLASS(Unit_Phase2_Base) {
    displayName = "Wood's";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Woods);

    uniformClass = QCLASS(Uniform_Woods);
    backpack = QCLASS(Backpack_Radio_Mini);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Woods_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Woods_lower_co.paa),
        QPATHTOF(data\uniforms\standard\undersuit\Woods_undersuit_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Woods), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Woods), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_Insulated_Base);
class CLASS(Unit_Phase2_Insulated_Dexus): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Dexus);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Dexus_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Jaws): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Jaws);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Jaws_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2Insulated\data\undersuit_co.paa"
    };

};
class CLASS(Unit_Phase2_Insulated_Joe): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Joe);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Joe_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Keeli): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Keeli);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Keeli_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2Insulated\data\undersuit_co.paa"
    };

};

class CLASS(cloneCommando_unit_base);
class CLASS(Unit_RC_Tugz): CLASS(cloneCommando_unit_base) {
    SCOPE_PUBLIC;
    displayName = "Tugz (RC)";
    editorSubcategory = QEDSUBCAT(Customs);
    uniformClass = QCLASS(Uniform_RC_Tugz);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\commando\Tugz_upper_co.paa),
        QPATHTOF(data\uniforms\commando\Tugz_lower_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_RC_Tugz), QCLASS(Tugz_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_RC_Tugz), QCLASS(Tugz_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Tugz_Backpack);
};
class CLASS(Unit_RC_Jaws): CLASS(cloneCommando_unit_base) {
    SCOPE_PUBLIC;
    displayName = "Jaws (RC)";
    editorSubcategory = QEDSUBCAT(Customs);
    uniformClass = QCLASS(Uniform_RC_Jaws);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\commando\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\commando\Jaws_lower_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_RC_Jaws), QCLASS(Jaws_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_RC_Jaws), QCLASS(Jaws_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Jaws_Backpack);
};
class CLASS(Unit_RC_Cutthroat): CLASS(cloneCommando_unit_base) {
    SCOPE_PUBLIC;
    displayName = "Cutthroat (RC)";
    editorSubcategory = QEDSUBCAT(Customs);
    uniformClass = QCLASS(Uniform_RC_Cutthroat);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\commando\Cutthroat_upper_co.paa),
        QPATHTOF(data\uniforms\commando\Cutthroat_lower_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_RC_Cutthroat), QCLASS(Cutthroat_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_RC_Cutthroat), QCLASS(Cutthroat_RC_Vest), QCLASS(cloneNvg_chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Cutthroat_Backpack);
};
