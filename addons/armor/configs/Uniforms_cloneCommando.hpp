class CLASS(cloneCommando_uniform): CLASS(Uniform_ARC_CT) {
    displayName = "[KC] SF Commando Armor (Base)";
    model = "\ls\core\addons\characters_clone_legacy\uniforms\commando\ls_uniform_clone_commando.p3d";
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_uniform_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(cloneCommando_unit_base);
    };
};
