class CfgWeapons
{
    class CLASS(TU_Helmet);
    class CLASS(EPF_Helmet): CLASS(TU_Helmet)
    {
        displayName = "[EPF] Helmet";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_olive_co.paa"};
        class ItemInfo;
    };

    class CLASS(TU_Helmet_Assault);
    class CLASS(EPF_Helmet_Assault): CLASS(TU_Helmet_Assault)
    {
        displayName = "[EPF] Assault Helmet";
        hiddenSelectionsTextures[] = {"sc_equipment\data\ranger\textures\helmet_green_co.paa"};
    };

    class CLASS(TU_Helmet_Visor);
    class CLASS(EPF_Helmet_Visor): CLASS(TU_Helmet_Visor)
    {
        displayName = "[EPF] Visor Helmet";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\helmet_green_co.paa"};
    };

    class CLASS(TU_Helmet_Visor_Goggles);
    class CLASS(EPF_Helmet_Visor_Goggles): CLASS(TU_Helmet_Visor_Goggles)
    {
        displayName = "[EPF] Visor Helmet (Goggles)";
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\wasp\textures\helmet_green_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };
    };

    class CLASS(TU_Helmet_Heavy);
    class CLASS(EPF_Helmet_Heavy): CLASS(TU_Helmet_Heavy)
    {
        displayName = "[EPF] Heavy Helmet";
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\helmet_co.paa"};
    };

    class CLASS(EPF_Helmet_Presidente): CLASS(EPF_Helmet)
    {
        displayName = "[EPF] El Presidente Cap";
        model = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_US_F_CA.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        };
    };

    class CLASS(EPF_Helmet_General): CLASS(EPF_Helmet_Presidente)
    {
        displayName = "[EPF] El General Cap";
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_AAF_F_CA.paa";
    };

    class CLASS(OPFOR_Uniform_Base);
    class CLASS(TU_Uniform): CLASS(OPFOR_Uniform_Base)
    {
        class ItemInfo;
    };
    class CLASS(EPF_Uniform): CLASS(TU_Uniform)
    {
        displayName = "[EPF] Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(EPF_Unit_Rifleman);
        };
    };

    class CLASS(EPF_Uniform_Presidente): CLASS(EPF_Uniform)
    {
        displayName = "[EPF] El Presidente Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(EPF_Unit_Presidente);
        };
    };

    class CLASS(EPF_Uniform_General): CLASS(EPF_Uniform)
    {
        displayName = "[EPF] El General Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(EPF_Unit_General);
        };
    };

    class CLASS(TU_Vest);
    class CLASS(EPF_Vest): CLASS(TU_Vest)
    {
        displayName = "[EPF] Light Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
        class ItemInfo;
    };

    class CLASS(TU_Vest_Medium);
    class CLASS(EPF_Vest_Medium): CLASS(TU_Vest_Medium)
    {
        displayName = "[EPF] Medium Vest";
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\marine\textures\vest_green_co.paa",
            "\sc_equipment\data\marine\textures\legs_green_co.paa"
        };
    };

    class CLASS(TU_Vest_AssaultMedium);
    class CLASS(EPF_Vest_AssaultMedium): CLASS(TU_Vest_AssaultMedium)
    {
        displayName = "[EPF] Medium Assault Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
    };

    class CLASS(TU_Vest_AssaultHeavy);
    class CLASS(EPF_Vest_AssaultHeavy): CLASS(TU_Vest_AssaultHeavy)
    {
        displayName = "[EPF] Heavy Assault Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
    };

    class CLASS(EPF_Vest_General): CLASS(EPF_Vest)
    {
        displayName = "[EPF] El General Vest";
        model = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\samurai\textures\torso_black_co.paa",
            "\sc_equipment\data\samurai\textures\legs_black_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        };
    };
};