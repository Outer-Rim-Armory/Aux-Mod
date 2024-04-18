class CLASS(cloneCommando_uniform): CLASS(Uniform_ARC_CT) {
    displayName = "[KC] SF Commando Armor (Base)";
    model = "\ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d";
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_uniform_k1_ca.paa";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(cloneCommando_unit_base);
    };
};