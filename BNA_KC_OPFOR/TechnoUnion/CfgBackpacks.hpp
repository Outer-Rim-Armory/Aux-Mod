class BNA_KC_OPFOR_Backpack_Base;
class BNA_KC_TU_Backpack: BNA_KC_OPFOR_Backpack_Base
{
    // Scope
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    displayName = "[TU] Backpack";
    descriptionshort = "Techno Union Backpack";

    model = "\sc_equipment\data\marine\mr_backpack.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\backpack_co.paa"};
    picture = "\sc_equipment\data\icons\icon_se_ca.paa";
};
class BNA_KC_TU_Backpack_Predef_Rifleman: BNA_KC_TU_Backpack
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5, 10)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};

class BNA_KC_TU_Backpack_Heavy: BNA_KC_TU_Backpack
{
    displayName = "[TU] Heavy Backpack";
    maximumLoad = 450;
    mass = 35;

    model = "\sc_equipment\data\wasp\wp_backpack.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
    picture = "\sc_equipment\data\icons\icon_se_ca.paa";
};
class BNA_KC_TU_Backpack_Heavy_Predef_AT: BNA_KC_TU_Backpack_Heavy
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5, 10)
        MAG_XX(Aux12thFleet_Mag_E60R_HE, 3)
        MAG_XX(Aux12thFleet_Mag_E60R_AT, 3)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};
class BNA_KC_TU_Backpack_Heavy_Predef_AA: BNA_KC_TU_Backpack_Heavy
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5, 10)
        MAG_XX(Aux12thFleet_Mag_E60R_AA, 6)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};

class BNA_KC_TU_Backpack_Assault: BNA_KC_TU_Backpack
{
    displayName = "[TU] Assault Backpack";
    maximumLoad = 300;
    mass = 35;

    model = "\sc_equipment\data\wasp\wp_backpack_sl.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
    picture = "\sc_equipment\data\icons\icon_se_ca.paa";
};
class BNA_KC_TU_Backpack_Assault_Predef_Heavy: BNA_KC_TU_Backpack_Assault
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5C, 10)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};
class BNA_KC_TU_Backpack_Assault_Predef_Medium: BNA_KC_TU_Backpack_Assault_Predef_Heavy
{
    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5C, 10)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};

class BNA_KC_TU_Backpack_RTO: BNA_KC_TU_Backpack
{
    displayName = "[TU] Radio Backpack";
    mass = 35;

    model = "\sc_equipment\data\watchdog\wd_backpack_sl.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_desert_co.paa"};
    picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

    // TFAR Long Range
    tf_hasLRradio = 1;
    tf_range = 25000;

    tf_dialog = "mr3000_radio_dialog";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_east_radio_code";
    tf_subtype = "digital_lr";
};
class BNA_KC_TU_Backpack_RTO_Predef_SL: BNA_KC_TU_Backpack_RTO
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        MAG_XX(Aux12thFleet_Mag_E5, 10)
        MAG_XX(SC_IG3, 2)
        MAG_XX(SmokeShell, 2)
        MAG_XX(ShieldGrenade_Mag, 2)
        MAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
    };
};