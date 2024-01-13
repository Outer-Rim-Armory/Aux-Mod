class CfgVehicles
{
    class CLASS(TU_Unit_Rifleman);
    class CLASS(EPF_Unit_Rifleman): CLASS(TU_Unit_Rifleman)
    {
        faction = QCLASS(Faction_EPF);
        uniformClass = QCLASS(EPF_Uniform);
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_Rifleman));

        linkedItems[] = {QCLASS(EPF_Helmet), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_Predef_Rifleman);

        class EventHandlers;
    };

    class CLASS(EPF_Unit_Rifleman_Shield): CLASS(EPF_Unit_Rifleman)
    {
        displayName = "Rifleman (Shield)";
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_Rifleman_Shield));

        weapons[] = {QCLASS(E5_Shielded), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5_Shielded), "", "Throw", "Put"};
    };

    class CLASS(EPF_Unit_AT): CLASS(EPF_Unit_Rifleman)
    {
        displayName = "Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_AT));
        icon = "iconManAT";

        weapons[] = {QCLASS(E5), "", QCLASS(E60R_AT), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(E60R_AT), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AT)};
        respawnMagazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AT)};

        linkedItems[] = {QCLASS(EPF_Helmet_Visor_Goggles), QCLASS(EPF_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Visor_Goggles), QCLASS(EPF_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_Heavy_Predef_AT);
    };

    class CLASS(EPF_Unit_AA): CLASS(EPF_Unit_AT)
    {
        displayName = "Rifleman (AA)";

        weapons[] = {QCLASS(E5), "", QCLASS(E60R_AA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(E60R_AA), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AA)};
        respawnMagazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AA)};
        backpack = QCLASS(EPF_Backpack_Heavy_Predef_AA);
    };

    class CLASS(EPF_Unit_AssaultHeavy): CLASS(EPF_Unit_Rifleman)
    {
        displayName = "Heavy Assault";
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_AssaultHeavy));
        icon = "iconManMG";

        weapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_150rnd_E5C)};
        respawnMagazines[] = {QCLASS(Mag_150rnd_E5C)};

        linkedItems[] = {QCLASS(EPF_Helmet_Assault), QCLASS(EPF_Vest_AssaultHeavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Assault), QCLASS(EPF_Vest_AssaultHeavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_Assault_Predef_Heavy);
    };

    class CLASS(EPF_Unit_AssaultMedium): CLASS(EPF_Unit_AssaultHeavy)
    {
        displayName = "Medium Assault";
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_AssaultMedium));
        linkedItems[] = {QCLASS(EPF_Helmet_Assault), QCLASS(EPF_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Assault), QCLASS(EPF_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_Assault_Predef_Medium);
    };

    class CLASS(EPF_Unit_SL): CLASS(EPF_Unit_Rifleman)
    {
        displayName = "Squad Leader";
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_SL));
        icon = "iconManLeader";

        linkedItems[] = {QCLASS(EPF_Helmet_Heavy), QCLASS(EPF_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Heavy), QCLASS(EPF_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_RTO_Predef_SL);
    };

    class CLASS(TU_Unit_Melee);
    class CLASS(EPF_Unit_Melee): CLASS(TU_Unit_Melee)
    {
        faction = QCLASS(Faction_EPF);
        uniformClass = QCLASS(EPF_Uniform);
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
        editorPreview = EDITOR_PREVIEW(CLASS(EPF_Unit_Melee));

        linkedItems[] = {QCLASS(EPF_Helmet_Visor), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Visor), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_Heavy);
    };

    class CLASS(EPF_Unit_Presidente): CLASS(EPF_Unit_Rifleman)
    {
        editorSubcategory = QCLASS(EdSubCat_Special);

        displayName = "El Presidente";
        uniformClass = QCLASS(EPF_Uniform_Presidente);

        model = "\a3\Characters_F_AoW\Uniforms\ParadeUniform_01_F";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "ribbon", "nametag"};
        hiddenSelectionsTextures[] =
        {
            "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_01_US_CO.paa",
            "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_01_US_CO.paa",
            "\a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_US_CO.paa",
            "\a3\characters_f_aow\uniforms\data\Ribbon_01_US_CO.paa"
        };
        hiddenSelectionsMaterials[] = {"", "", "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_US.rvmat"};

        identityTypes[] = {QCLASS(ElPresidente)};

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {QCLASS(EPF_Helmet_Presidente), "OPTRE_Glasses_Cigar", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_Presidente), "OPTRE_Glasses_Cigar", LINKED_ITEMS_RADIO};
        backpack = "";

        class EventHandlers: EventHandlers
        {
            init = QUOTE((_this select 0) setIdentity QQCLASS(ElPresidente));
        };
    };

    class CLASS(EPF_Unit_General): CLASS(EPF_Unit_Presidente)
    {
        displayName = "El General";
        uniformClass = QCLASS(EPF_Uniform_General);

        model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_black_co.paa"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat"};

        identityTypes[] = {QCLASS(ElPresidente)};

        weapons[] = {QCLASS(DC17M), QCLASS(DC15SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC17M), QCLASS(DC15SA), "Throw", "Put"};
        magazines[] =
        {
            ITEM_10(QCLASS(Mag_60Rnd_DC17M)),
            ITEM_4(QCLASS(Mag_7Rnd_DC15SA)),
            ITEM_2("SmokeShell"),
            ITEM_2("SC_IG3")
        };
        respawnMagazines[] =
        {
            ITEM_10(QCLASS(Mag_60Rnd_DC17M)),
            ITEM_4(QCLASS(Mag_7Rnd_DC15SA)),
            ITEM_2("SmokeShell"),
            ITEM_2("SC_IG3")
        };
        items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        linkedItems[] = {QCLASS(EPF_Helmet_General), QCLASS(EPF_Vest_General), "SC_MDFCape", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(EPF_Helmet_General), QCLASS(EPF_Vest_General), "SC_MDFCape", LINKED_ITEMS_RADIO};
        backpack = "";

        class EventHandlers: EventHandlers
        {
            init = QUOTE((_this select 0) setIdentity QQCLASS(ElGeneral));
        };
    };

    class CLASS(TU_Backpack);
    class CLASS(EPF_Backpack): CLASS(TU_Backpack)
    {
        displayName = "[EPF] Backpack";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\backpack_green_co.paa"};
    };
    class CLASS(EPF_Backpack_Predef_Rifleman): CLASS(EPF_Backpack)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5,10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(TU_Backpack_Heavy);
    class CLASS(EPF_Backpack_Heavy): CLASS(TU_Backpack_Heavy)
    {
        displayName = "[EPF] Heavy Backpack";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_green_co.paa"};
    };
    class CLASS(EPF_Backpack_Heavy_Predef_AT): CLASS(EPF_Backpack_Heavy)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5,10);
            MAG_XX(Aux12thFleet_Mag_E60R_HE,3);
            MAG_XX(Aux12thFleet_Mag_E60R_AT,3);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
    class CLASS(EPF_Backpack_Heavy_Predef_AA): CLASS(EPF_Backpack_Heavy)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5,10);
            MAG_XX(Aux12thFleet_Mag_E60R_AA,6);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(TU_Backpack_Assault);
    class CLASS(EPF_Backpack_Assault): CLASS(TU_Backpack_Assault)
    {
        displayName = "[EPF] Assault Backpack";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_green_co.paa"};
    };
    class CLASS(EPF_Backpack_Assault_Predef_Heavy): CLASS(EPF_Backpack_Assault)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5C,10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
    class CLASS(EPF_Backpack_Assault_Predef_Medium): CLASS(EPF_Backpack_Assault_Predef_Heavy)
    {
        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5C,10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(TU_Backpack_RTO);
    class CLASS(EPF_Backpack_RTO): CLASS(TU_Backpack_RTO)
    {
        displayName = "[EPF] Radio Backpack";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_co.paa"};
    };
    class CLASS(EPF_Backpack_RTO_Predef_SL): CLASS(EPF_Backpack_RTO)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(Aux12thFleet_Mag_E5,10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
};