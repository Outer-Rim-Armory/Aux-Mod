class CLASS(Unit_Phase2__Base_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF - Clone Trooper (Female, Base)";

    uniformClass = QCLASS(Uniform_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\Base_upper_co.paa),
        QPATHTOF(data\uniforms\female\Base_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CR_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF 00 - Clone Recruit (Female)";

    uniformClass = QCLASS(Uniform_CR_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\CR_upper_co.paa),
        QPATHTOF(data\uniforms\female\CR_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CR_female_Empire): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    displayName = "INF 00 - Clone Recruit (Female, Empire)";

    uniformClass = QCLASS(Uniform_CR_female_Empire);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\CR_Empire_upper_co.paa),
        QPATHTOF(data\uniforms\female\CR_Empire_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };
};

class CLASS(Unit_Phase2_CT_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF 01 - Clone Trooper (Female)";

    uniformClass = QCLASS(Uniform_CT_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\CT_upper_co.paa),
        QPATHTOF(data\uniforms\female\CT_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CT_female_Empire): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    displayName = "INF 01 - Clone Trooper (Female, Empire)";

    uniformClass = QCLASS(Uniform_CT_female_Empire);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\CT_Empire_upper_co.paa),
        QPATHTOF(data\uniforms\female\CT_Empire_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };
};

class CLASS(Unit_Phase2_SCT_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF 02 - Senior Clone Trooper (Female)";

    uniformClass = QCLASS(Uniform_SCT_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\SCT_upper_co.paa),
        QPATHTOF(data\uniforms\female\SCT_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_SCT_female_Empire): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    displayName = "INF 02 - Senior Clone Trooper (Female, Empire)";

    uniformClass = QCLASS(Uniform_SCT_female_Empire);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\SCT_Empire_upper_co.paa),
        QPATHTOF(data\uniforms\female\SCT_Empire_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };
};

class CLASS(Unit_Phase2_VCT_female): CLASS(Unit_Phase2_Base) {
    displayName = "INF 03 - Veteran Clone Trooper (Female)";

    uniformClass = QCLASS(Uniform_VCT_female);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\VCT_upper_co.paa),
        QPATHTOF(data\uniforms\female\VCT_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "442_n_sensor", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_VCT_female_Empire): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    displayName = "INF 03 - Veteran Clone Trooper (Female, Empire)";

    uniformClass = QCLASS(Uniform_VCT_female_Empire);

    model = "\kobra\442_equipment\uniform\model\clone_uniform_f.p3d";
    hiddenSelections[] = {"upper", "lower", "clan", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\female\VCT_Empire_upper_co.paa),
        QPATHTOF(data\uniforms\female\VCT_Empire_lower_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\female\upper.rvmat),
        QPATHTOF(data\uniforms\female\lower.rvmat)
    };
};
