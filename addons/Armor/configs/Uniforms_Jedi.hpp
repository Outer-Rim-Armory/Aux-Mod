class BNA_KC_Uniform_Jedi_Knight: BNA_KC_Uniform_Base
{
    SCOPE_HIDDEN;
    displayName = "[KC] Jedi Armor (Base)";

    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Jedi_Knight";
    };
};

class BNA_KC_Uniform_Jedi_Commander: BNA_KC_Uniform_Jedi_Knight
{
    SCOPE_PUBLIC;
    displayName = "[KC] Jedi Commander Armor";

    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Jedi_Commander";
    };
};