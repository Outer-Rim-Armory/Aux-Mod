class CfgWeapons
{
    class ls_blueforHelmet_base;
    class CLASS(BLUFOR_Helmet_Base): ls_blueforHelmet_base
    {
        class ItemInfo;
    };
    class CLASS(RDF_Helmet): CLASS(BLUFOR_Helmet_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_urban_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
        };
    };

    class CLASS(RDF_Helmet_Marksman): CLASS(RDF_Helmet)
    {
        displayName = "[RDF] Marksman Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\ranger\textures\helmet_urban_co.paa"};

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class ls_blueforUniform_base;
    class CLASS(BLUFOR_Uniform_Base): ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(RDF_Uniform): CLASS(BLUFOR_Uniform_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(RDF_Unit_Base);
        };
    };

    class ls_blueforVest_base;
    class CLASS(BLUFOR_Vest_Base): ls_blueforVest_base
    {
        class ItemInfo;
    };
    class CLASS(RDF_Vest): CLASS(BLUFOR_Vest_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Light Vest";

        model = "\sc_equipment\data\watchdog\wd_vest_light.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_guard_co.paa"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_light.p3d";
            containerClass = "Supply250";

            SC_VEST_HITPOINTS_LIGHT;
        };
    };

    class CLASS(RDF_Vest_Medium): CLASS(RDF_Vest)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Medium Vest";
        model = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };
};