class CLASS(Uniform_Jedi_Knight): CLASS(Uniform_Base) {
    SCOPE_HIDDEN;
    displayName = "[KC] Jedi Armor (Base)";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Jedi_Knight);
    };
    picture = "\ls\core\addons\characters_clone\data\ui\jediUniform_ui_ca.paa";
};

class CLASS(Uniform_Jedi_Commander): CLASS(Uniform_Jedi_Knight) {
    SCOPE_PUBLIC;
    displayName = "[KC] Jedi Commander Armor";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Jedi_Commander);
    };
};
