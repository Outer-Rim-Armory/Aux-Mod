class CfgVehicles
{
    class ls_flag_base;
    class CLASS(Flag_KC_Pole): ls_flag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Pole)";

        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_co.paa));
        };
    };

    class ls_staticFlag_base;
    class CLASS(Flag_KC_Vertical): ls_staticFlag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Vertical)";

        model = "\LS_statics_props\flags\ls_vertical_flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Horizontal): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Flag (Horizontal)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_co.paa)};
    };

    class CLASS(Flag_KC_Damaged_Pole): CLASS(Flag_KC_Pole)
    {
        displayName = "KC Damaged Flag (Pole)";
        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_Damaged_co.paa));
        };
    };
    class CLASS(Flag_KC_Damaged_Vertical): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Damaged Flag (Vertical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal, Mirrored)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal_Mirrored): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Mirrored_co.paa)};
    };
};